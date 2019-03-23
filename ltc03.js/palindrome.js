const readline =  require('readline');

function reverse(string) {
    if (string.length == 0) {
        return string
    } else {
        return reverse(string.substr(1)) + string[0]
    }
}

let rl = readline.createInterface(process.stdin, process.stdout);

rl.question("Enter a string: ", function (string){

  cstring = string.toUpperCase();
//console.log("toUPPER",cstring);
  cstring = cstring.replace(/ |\,|\'|\"|\./g, '');
//console.log("noPUNCT",cstring);
  rstring = reverse(cstring);
  console.log("\n" + rstring + "\n");
  console.log((rstring == cstring)?"Yes, it is a palindrome\n\n":"No, it is not a palindrome\n\n");
  rl.close();

});
