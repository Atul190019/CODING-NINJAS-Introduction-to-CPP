int countSubsequences(string binary)
{
// Initialize a variable 'MOD to store value equal to (1e9 + 7). 
    int mod = (int)1e9 + 7;

// Initialize a variable 'ENDSe to store count of subsequences ending with

int ends0 = 0;

// Initialize a variable 'ENDS1' to store count of subsequences ending with

int ends1 = 0;

// Initialize a variable 'FINDO to check whether 'e' is present in 'BINARY'.
    int find0 = 0;

// Iterate 'I' in @ to 'BINARY.LENGTH": 
for(int i = 0; i < binary.length(); ++i) {

// If current character is '1':

if (binary[i] == '1') {
    // Set 'ENDS1' as ('ENDS' + 'ENDS1' + 1) % 'MOD'. ends1 = (ends® + ends1 + 1) % mod;

// Set 'ENDSe as ('ENDSe' + 'ENDS1') % 'MOD'. 
    ends1 = (ends0 + ends1 + 1) % mod;

// Set 'FINDO' as 1. 

}
    else
    {
        ends0 = (ends0 + ends1) % mod;

// Set 'FINDO' as 1. 
    find0 = 1;
    }

}

// Return ('ENDSe' + 'ENDS1' + 'FINDO') % "MOD". 
    return (ends0 + ends1 + find0) % mod;
}
