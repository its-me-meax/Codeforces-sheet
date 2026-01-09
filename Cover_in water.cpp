class Solution {
public:
    void solve() {
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            string s;
            cin >> s;

            int ans = 0;
            for (int i = 0; i < n; ) {
                if (s[i] == '#') {
                    i++;
                    continue;
                }

                int j = i;
                while (j < n && s[j] == '.') j++;

                int len = j - i;
                if (len == 1) ans += 1;
                else if (len == 2) ans += 2;
                else ans += 2;

                i = j;
            }

            cout << ans << '\n';
        }
    }
};
