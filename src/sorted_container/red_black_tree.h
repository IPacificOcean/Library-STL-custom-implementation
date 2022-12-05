//
// Created by Lok on 04.12.2022.
//

#ifndef S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_
#define S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_

namespace s21 {

enum node_colors { RED, BLACK };

template <class T> struct Node {

  Node<T> *parent_;
  Node<T> *left_;
  Node<T> *right_;
  enum node_colors color_;
  T *data_;
};
template <class T> class Tree {

public:
  Tree () {
    size_ = 0;
    root_ = new Node<T>();
  }

  ~Tree() = default;

  void insert(const T &data) {
    Node<T> temp = Node<T>(data);
    ++size_;
    if (root_ == nullptr) {
      root_ = std::swap(temp);
    } else if (temp > root_) {
      // right
    } else if (temp < root_) {
      // left
    } else {
      --size_;
    }
  }

private:
  size_t size_;
  Node<T> root_;
};
} // namespace s21

#endif // S21_CONTAINERS_SRC_SORTED_CONTAINER_RED_BLACK_TREE_H_
