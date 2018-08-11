#ifndef GameObject_hpp
#define GameObject_hpp

class GameObject {
    virtual void Update() = 0;
    virtual void Render() = 0;
};

#endif