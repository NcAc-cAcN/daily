use std::io;

fn main() {
    let mut word = String::new();
    let mut word2 = String::new();
    let _ = io::stdin().read_line(&mut word);
    let _ = io::stdin().read_line(&mut word2);
    let res = if word2.trim().chars().rev().eq(word.trim().chars()) == true {
        "YES"
    } else {
        "NO"
    };

    println!("{}",res)
}
