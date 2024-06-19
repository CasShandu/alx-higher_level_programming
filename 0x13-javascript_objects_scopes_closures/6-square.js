#!/usr/bin/node

const initialSquare = require('./5-square');

class Square extends initialSquare {

  charPrint (char) {
    if (char === undefined) {
      this.print();
    } else {
      for (let i = 0; i < this.height; i++) {
        console.log(char.repeat(this.width));
      }
    }
  }
}

module.exports = Square;
