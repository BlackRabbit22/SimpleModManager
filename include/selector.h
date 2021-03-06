//
// Created by Adrien Blanchet on 12/09/2019.
//

#ifndef MODAPPLIER_SELECTOR_H
#define MODAPPLIER_SELECTOR_H


#include <vector>
#include <string>

class selector {

public:

  selector();
  ~selector();

  void initialize();
  void reset();

  void set_default_cursor_position(int default_cursor_position_);
  void set_cursor_position(int cursor_position_);
  void set_selection_list(std::vector<std::string> selection_list_);
  void set_cursor_marker(std::string cursor_marker_);

  void set_tag(int entry_, std::string tag_);

  int get_nb_pages();
  int get_current_page();
  int get_selected_entry();
  std::vector<std::string> get_selection_list();

  void print_selector();
  void reset_cursor_position();
  void reset_page();
  void reset_tags_list();
  void increment_cursor_position();
  void decrement_cursor_position();
  void next_page();
  void previous_page();
  std::string get_selected_string();

private:

  int _default_cursor_position_;
  int _cursor_position_;
  int _current_page_;
  int _max_items_per_page_;
  std::string _cursor_marker_;
  std::vector<std::string> _selection_list_;
  std::vector<std::string> _tags_list_;


};


#endif //MODAPPLIER_SELECTOR_H
