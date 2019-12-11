#include <queue>
#include <algorithm>
#include <string>
#include <list>

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 * 
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 * 
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  std::list<std::string> path;
  std::queue<std::string> queue;
  std::unordered_map<std::string, bool> visited_before;
  std::unordered_map<std::string, std::string> parent;

  queue.push(start);
  parent[start] = "first";
  //std::cout<<"1 : "<<parent[start]<<" 2 : "<<start<<std::endl;
  //std::cout<<"first :"<<start<<std::endl;
  //std::cout<<"end :"<<end<<std::endl;

  while(!queue.empty()) {

    std::string temp = queue.front();
    queue.pop();
    visited_before[temp] = true;
    //std::cout<<" z : "<<temp<<std::endl;

    for (auto it : incidentEdges(temp)) {
      if (it.get().source().key() == temp) {
        if (visited_before.find(it.get().dest().key()) == visited_before.end()) {
          queue.push(it.get().dest().key());
          parent[it.get().dest().key()] = temp;
          visited_before[it.get().dest().key()] = true;
          //std::cout<<it.get().dest().key()<<" dest"<<std::endl;
        }
      } else {
        if (visited_before.find(it.get().source().key()) == visited_before.end()) {
          queue.push(it.get().source().key());
          parent[it.get().source().key()] = temp;;
          visited_before[it.get().source().key()] = true;
          //std::cout<<it.get().source().key()<<" source"<<std::endl;
        }
      }
    }
  }

  std::string toput = end;
  while (toput != "first") {
    path.push_back(toput);
    toput = parent[toput];
  }
  //path.push_back(start);
  std::reverse(path.begin(), path.end());
  

 /*for (auto it : path) {
   std::cout<<it<<" ";
 }
 //std::cout<<parent[start];
 */

  return path;
}

