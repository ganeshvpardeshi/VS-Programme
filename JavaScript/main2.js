let subject ={
    "maths" : 22,
    "science":23,
    "social_science":{
        "history":29,
        "geo":33,
    }
}
let totalMarks=subject;//direct copy
// totalMarks.maths=subject.maths +10;
console.log("1",totalMarks);
totalMarks=Object.assign({},subject);//shallow copy
totalMarks.social_science.geo=subject.social_science.geo+10;
console.log("\n\n2",totalMarks);

console.log("\n\n");

JSON.stringify(subject);//deep copy
JSON.parse(JSON.stringify(subject))//deep copy
console.log(typeof(JSON.stringify(subject)));
console.log(typeof(JSON.parse(JSON.stringify(subject))));
