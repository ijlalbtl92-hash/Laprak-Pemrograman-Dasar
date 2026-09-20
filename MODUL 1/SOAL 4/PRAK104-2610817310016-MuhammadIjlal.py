price_a = 400000
price_b = 350000

discount_a = price_a - (price_a * 13 // 100)
discount_b = price_b - (price_b * 21 // 100)

print(f"Harga sepatu A adalah {price_a}")
print(f"Harga sepatu B adalah {price_b}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {discount_a}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {discount_b}")