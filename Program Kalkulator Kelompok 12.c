#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* --- Fungsi kecil yang sering dipakai --- */
void pause() {
    printf("\n(Enter untuk lanjut)");
    while (getchar() != '\n');
    getchar();
}

/* membalik string (dipakai buat konversi bilangan) */
void balik(char *s) {
    int i = 0, j = strlen(s) - 1;
    char t;
    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++; j--;
    }
}

/* ubah karakter hex → angka desimal */
int nilaiHex(char c) {
    if (isdigit(c)) return c - '0';
    return toupper(c) - 'A' + 10;
}

/* ============================
        1. HUKUM OHM
============================ */
void hukumOhm() {
    int p;
    double V, I, R;

    printf("\n--- Hukum Ohm ---\n");
    printf("1. Cari V\n");
    printf("2. Cari I\n");
    printf("3. Cari R\n");
    printf("Pilih: ");
    scanf("%d", &p);

    if (p == 1) {
        printf("Masukkan I: "); scanf("%lf", &I);
        printf("Masukkan R: "); scanf("%lf", &R);
        printf("V = %.4lf Volt\n", I * R);
    }
    else if (p == 2) {
        printf("Masukkan V: "); scanf("%lf", &V);
        printf("Masukkan R: "); scanf("%lf", &R);
        printf("I = %.4lf A\n", V / R);
    }
    else if (p == 3) {
        printf("Masukkan V: "); scanf("%lf", &V);
        printf("Masukkan I: "); scanf("%lf", &I);
        printf("R = %.4lf Ohm\n", V / I);
    }
    else {
        printf("Pilihan tidak ada.\n");
    }

    pause();
}

/* ============================
        2. DAYA LISTRIK
============================ */
void dayaListrik() {
    double V, I;

    printf("\n--- Daya Listrik ---\n");
    printf("V: "); scanf("%lf", &V);
    printf("I: "); scanf("%lf", &I);

    printf("P = %.4lf Watt\n", V * I);

    pause();
}

/* ============================
       3. RESISTOR SERI
============================ */
void resistorSeri() {
    int n;
    double R, total = 0;

    printf("\n--- Resistor Seri ---\n");
    printf("Jumlah resistor: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("R%d: ", i);
        scanf("%lf", &R);
        if (R < 0) R = 0;
        total += R;
    }

    printf("Total = %.4lf Ohm\n", total);

    pause();
}

/* ============================
     4. RESISTOR PARALEL
============================ */
void resistorParalel() {
    int n;
    double R, jumlah = 0;

    printf("\n--- Resistor Paralel ---\n");
    printf("Jumlah resistor: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("R%d: ", i);
        scanf("%lf", &R);
        if (R <= 0) {
            printf("R tidak boleh 0, diset 1 Ohm\n");
            R = 1;
        }
        jumlah += 1.0 / R;
    }

    printf("Total = %.4lf Ohm\n", 1.0 / jumlah);

    pause();
}

/* ============================
   5. DESIMAL KE BASIS LAIN
============================ */
void convertDecimal() {
    long long n, t;
    char bin[100], oct[100], hex[100];
    int i;

    printf("\n--- Konversi Desimal ---\n");
    printf("Masukkan angka: ");
    scanf("%lld", &n);

    /* biner */
    t = n; i = 0;
    do {
        bin[i++] = (t % 2) + '0';
        t /= 2;
    } while (t > 0);
    bin[i] = '\0';
    balik(bin);

    /* oktal */
    t = n; i = 0;
    do {
        oct[i++] = (t % 8) + '0';
        t /= 8;
    } while (t > 0);
    oct[i] = '\0';
    balik(oct);

    /* hex */
    t = n; i = 0;
    do {
        int r = t % 16;
        hex[i++] = (r < 10 ? r + '0' : r - 10 + 'A');
        t /= 16;
    } while (t > 0);
    hex[i] = '\0';
    balik(hex);

    printf("Biner : %s\n", bin);
    printf("Oktal : %s\n", oct);
    printf("Hex   : %s\n", hex);

    pause();
}

/* ============================
     6. BINER → DESIMAL
============================ */
void binerToDecimal() {
    char s[100];
    long long hasil = 0;

    printf("\n--- Biner ke Desimal ---\n");
    printf("Masukkan biner: ");
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        hasil = hasil * 2 + (s[i] - '0');

    printf("Desimal = %lld\n", hasil);

    pause();
}

/* ============================
     7. OKTAL → DESIMAL
============================ */
void oktalToDecimal() {
    char s[100];
    long long hasil = 0;

    printf("\n--- Oktal ke Desimal ---\n");
    printf("Masukkan oktal: ");
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        hasil = hasil * 8 + (s[i] - '0');

    printf("Desimal = %lld\n", hasil);

    pause();
}

/* ============================
     8. HEX → DESIMAL
============================ */
void hexToDecimal() {
    char s[100];
    long long hasil = 0;

    printf("\n--- Hex ke Desimal ---\n");
    printf("Masukkan hex: ");
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        hasil = hasil * 16 + nilaiHex(s[i]);

    printf("Desimal = %lld\n", hasil);

    pause();
}

/* ============================
            MENU UTAMA
============================ */
int main() {
    int pilih;

    do {
        printf("\n=================================\n");
        printf("   TOOL ASISTEN LAB SEDERHANA  \n");
        printf("=================================\n");
        printf("1. Hukum Ohm\n");
        printf("2. Daya Listrik\n");
        printf("3. Resistor Seri\n");
        printf("4. Resistor Paralel\n");
        printf("5. Desimal ke Biner/Oktal/Hex\n");
        printf("6. Biner ke Desimal\n");
        printf("7. Oktal ke Desimal\n");
        printf("8. Hex ke Desimal\n");
        printf("9. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilih);

        switch (pilih) {
            case 1: hukumOhm(); break;
            case 2: dayaListrik(); break;
            case 3: resistorSeri(); break;
            case 4: resistorParalel(); break;
            case 5: convertDecimal(); break;
            case 6: binerToDecimal(); break;
            case 7: oktalToDecimal(); break;
            case 8: hexToDecimal(); break;
            case 9:
                printf("Selesai. Terima kasih.\n");
                break;
            default:
                printf("Menu tidak ditemukan.\n");
        }

    } while (pilih != 9);

    return 0;
}

