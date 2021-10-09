struct Vertex {
    int id;
    std::vector<Edge> edges;
    Vertex(int vertexId = 0){
        id = vertexId;
    }
};

struct Edge {
    ind id;
    std::array<Vertex, 2> vertices;
};

struct Graph{
    std::vector<Edge> edges;
    std::vector<Vertex> vertices;
};
