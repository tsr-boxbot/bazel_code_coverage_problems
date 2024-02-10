#ifndef ADD_H
#define ADD_H

extern int add(int a, int b);

class OP
{
  protected:
    OP();
  public:
    virtual ~OP();
    virtual int Do(int other) const = 0;
};

class ADD_OP : public OP
{
  private:
    int x_;
  public:
    ADD_OP(int x);
    virtual ~ADD_OP();
    virtual int Do(int other) const override;
};

#endif /* ADD_H */
