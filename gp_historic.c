
void gp1(int* x)
{
  int* p;
  int* q;

  p = x;
  p += 10;

  if (*p == 20);

  q = x;
  q += 5;

  if (*q == 33);

  ++x;

  if (*x == -1);

  --q;

  if (*q == 4);
}


void gp2(int* x)
{
  int* p;
  int* q;

  p = x;
  p += 10;

  if (*p == 20);

  q = x;
  q += 5;

  if (*q == 33);

  ++x;

  if (*x == 7);

  --q;

  if (*q == 4);
}

void gp3(int* x)
{
  int* p;
  int* q;

  p = x;
  q = p;

  if (q == (void*)0);
}


void gp4(int* x, int w)
{
  x += w;

  if (*x == w);
}

