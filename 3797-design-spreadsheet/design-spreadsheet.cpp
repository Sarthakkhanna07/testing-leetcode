class Spreadsheet {
public:
    vector<vector<int>> sheet;

    Spreadsheet(int rows) {
        sheet.assign(rows, vector<int>(26, 0));
    }
    
    void setCell(string cell, int value) {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1)) - 1;
        sheet[row][col] = value;
    }
    
    void resetCell(string cell) {
        int col = cell[0] - 'A';
        int row = stoi(cell.substr(1)) - 1;
        sheet[row][col] = 0;
    }
    
    int getValue(string formula) {
        string expr = formula.substr(1);   // remove '='
        int plusIdx = expr.find('+');

        string left = expr.substr(0, plusIdx);
        string right = expr.substr(plusIdx + 1);

        return valueOf(left) + valueOf(right);
    }

    int valueOf(const string& s) {
        if (isdigit(s[0])) {
            return stoi(s);
        }
        int col = s[0] - 'A';
        int row = stoi(s.substr(1)) - 1;
        return sheet[row][col];
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */