// Алексеева Ульяна st129990@student.spbu.ru


class Autobot: public Transformer {
public:
    bool transform();
    bool attack_against_evil();
    bool attack_against_decepticon();
private:
    uint level_of_kidness;
    uint happiness_level;
    uint level_of_greatness;
};
