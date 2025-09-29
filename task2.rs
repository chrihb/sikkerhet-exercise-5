fn task2(input: &str) -> String {
    let mut output = String::new();

    for c in input.chars() {
        match c {
            '&' => output.push_str("&amp;"),
            '<' => output.push_str("&lt;"),
            '>' => output.push_str("&gt;"),
            _ => output.push(c),
        }
    }

    output
}

fn main() {
    let output = task2("Hello & <World>!");
    println!("{}", output);
}