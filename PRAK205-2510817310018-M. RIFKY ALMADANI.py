tinggi, sisi_miring = map(int, input().split())
alas = ((sisi_miring ** 2) - (tinggi ** 2)) ** 0.5
print("Alas = %d cm" %alas)
print("Tinggi = %d cm" %(tinggi))
print("Keliling = %d cm" %(alas + tinggi + sisi_miring))
print("Luas = %d cm^2" %(0.5 * alas * tinggi))

tinggi = int(input())
sisi_miring = int(input())
alas = ((sisi_miring ** 2) - (tinggi ** 2)) ** 0.5
print("Alas = %d cm" %alas)
print("Tinggi = %d cm" %(tinggi))
print("Keliling = %d cm" %(alas + tinggi + sisi_miring))
print("Luas = %d cm^2" %(0.5 * alas * tinggi))