const obj ={
    myFunction(){
        console.log(this);
    },
    myFunction1(){
       function myFunction2()
       {
           console.log(this);
       }
       return myFunction2(); 
    }
}
// console.log(obj.myFunction1);//this keyword will refers current object 
const test = obj.myFunction();
obj.myFunction1();//global object 
test;//this keyword will refers current object 
function greet ()
{
    console.log(this);
}
const test1 = new greet();
// console.log(test1);