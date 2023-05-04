impl Solution {
    pub fn is_valid_sudoku(board: Vec<Vec<char>>) -> bool {
        let mut clone = board.clone();
        for i in 0..9{
            let mut seen_row:std::collections::HashSet<char>= Default::default();
            let mut seen_column:std::collections::HashSet<char>= Default::default();
            for j in 0..9{
                if clone[i][j]!='.' {
                    if !seen_row.insert(clone[i][j]){return false;};
                }

                if clone[j][i]!='.' {
                    if !seen_column.insert(clone[j][i]){return false;};
                }

            }
        }

        for i in (0..9).step_by(3){
            for j in (0..9).step_by(3){
                let x:Vec<Vec<char>> = clone[i..i+3].iter().map(|x| x[j..j+3].to_vec()).collect();
                let x:Vec<char> = x.concat();
                let mut set:std::collections::HashSet<char> = Default::default();
                for i in x.iter(){
                    if *i!='.'{
                        if !set.insert(*i){
                            return false
                        }
                    }
                }

            }
        }

        return true;
    }
}
