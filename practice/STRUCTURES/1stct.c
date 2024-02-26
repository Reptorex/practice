struct Car
{
  char brand[50];
  char model[50];
  int year;
};

 int main()
{
  struct Car car1 = {"porshe", "911", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"volvo", "xc90", 2011};

  printf("%s %s %d \n", car1.brand, car1.model, car1.year);
  printf("%s %s %d \n", car2.brand, car2.model, car2.year);
  printf("%s %s %d \n", car3.brand, car3.model, car3.year);


}
