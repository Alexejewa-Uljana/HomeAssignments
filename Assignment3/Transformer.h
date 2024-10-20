// Алексеева Ульяна st129990@student.spbu.ry

class Transformer{
public:
    Transformer();
    void setAmmo(uint ammo);
    uint getAmmo();
    void setFuel(uint fuel);
    uint getFuel();
    void setRange(uint range);
    uint getRange();
    void setStrength(uint strength);
    uint getStrength();
    void setLevel(uint level);
    uint getLevel();
    bool move();
    bool turn(Direction dir);
    bool jump;
    bool fire();
    bool ultimate();
    bool transform();
private:
    uint _level;
    uint _stregth;
    uint _range;
    uint _fuel;
    uint _ammo;
}
