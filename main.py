from collection import deque

def bfs(graph, start, visited):
  queue = deque([start])
  visited[start] = True