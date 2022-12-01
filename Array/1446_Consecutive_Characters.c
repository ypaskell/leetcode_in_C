#define max(a, b) ((a) > (b) ? (a) : (b))

int maxPower(char *s) {
  int res = 1;
  char *l = s;
  while (*s) {
    while (*l == *s)
      s++;
    res = max(res, s - l);
    l = s;
  }
  return res;
}