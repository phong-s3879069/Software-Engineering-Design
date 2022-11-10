#include <iostream> 
#include <iomanip>
using std::cout;
int main()
{
    // Precision
    cout << 3.14159 << " " << 12.3456 << " (DATA TO DISPLAY)\n";
    cout << "precision = 3: \n";
    cout << std::setprecision(3)
         << 3.14159 << " " << 12.3456 << "\n\n";
    /* Note: setprecision(n) applies to the entire number,
    must use the fixed-point format to apply to the fractional part only*/
    cout << "precision = 3, fixed: \n";
    cout << std::fixed << std::setprecision(3)
         << 3.14159 << " " << 12.3456 << "\n\n\n";
    // Width
    cout << 10 << " " << 20 << " (DATA TO DISPLAY)\n";
    cout << "width = 10: \n";
    cout << std::setw(20)
         << 10 << " " << std::setw(20) << 20 << "\n\n";
    // Fill & Width
    cout << "fill = 'x', width = 10: \n";
    cout.fill('x');
    cout.width(10);
    cout << 10 << " " << 20 << "\n\n";
    // Set Format Flags
    cout << "set flags left justification and showpos, width = 10: \n";
    cout << std::left << std::showpos << std::setw(10)
         << 10 << " " << 20 << "\n\n";
}
