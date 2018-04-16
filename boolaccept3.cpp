bool accept3 ()
{
int tries = 1 ;
while {tries < 4)
{
cout « "Do you want to proceed {y or n) ? \n " ; // вывести вопрос
char answer = 0;
cin » answer; //считать ответ
switch {answer)
{
case 'y' :
return true;
case 1 п 1 :
return false;
default:
cout « "Sorry, I don 11 understand that, \n" ;
tries = tries + 1;
}
}
cout « "I 'll take that for a n o . \n" ;
return false;
}