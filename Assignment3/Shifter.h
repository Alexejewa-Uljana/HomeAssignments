// Алексеева Ульяна st129990@student.spbu.ru


class Shifter: public Transformer {
public:
    bool transform();
    void setSize(uint size);
    uint getSize();
    void setWeight(uint weight);
    uint getWeight();
    bool transform_size();
    bool transform_weight();
private:
    uint size;
    uint weight;
};
