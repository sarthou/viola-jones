#ifndef FILE_CARACT_H_INCLUDED
#define FILE_CARACT_H_INCLUDED

#include "File.h"

class File_caract : public File
{
public:
    File_caract();
    ~File_caract();

    void compute_variances();
    void generate_caracteristics_from_file(File_caract base_file);
    void generate_caracteristics();

    int go_to_data();
    int go_to_id();
    int get_id();

    int get_rects(caract_t &caract);
    void set_rects(caract_t &caract);

    void set_nb_caract(unsigned int nb_caract);
    unsigned int get_nb_caracteristics();

    int get_caract_index(int index, caract_t &caract);

    bool compare_caracts(caract_t caract1, caract_t caract2, int ID_1, int ID_2);

private:
    char tag_rect[5];
    char tag_rect_end[5];
    char tag_data[5];
    char tag_id[5];
    char tag_car[5];
    std::vector<define_caract_t> all_caract_type;

    void generate_caracteristics_0d(int x, int y, int length, int height, unsigned int &nb_caracts);
    void generate_caracteristics_45d(int x, int y, int length, int height, unsigned int &nb_caracts);
    void define_all_caract_type();
};

#endif // FILE_CARACT_H_INCLUDED
