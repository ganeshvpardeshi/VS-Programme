let a=[1,2,3,4];

a.push(5);
console.log("push",a);

a.pop();
console.log("pop",a);

a.unshift(0);
console.log("unshift",a);

a.shift();
console.log("shift",a);

console.log("slice",a.slice(1,4));

console.log("splice",a.splice(2,4));

console.log("length",a.length);

let b=[6,7,8,9,10];

console.log("concate",a.concat(b));

let c=a.find(function (item){ return item >1});
console.log("find ",c);
let d =a.reduce(function (a,c){return a+c});
console.log("reduce ",d);

let e=[9,8,7,6,5];
console.log("sort",e.sort());

console.log("index",a.indexOf(4));
