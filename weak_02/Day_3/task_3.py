#	Write a program to format a receipt for a fictional
#  purchase (e.g., list items, price, and total).
item1_name = "Shampoo"
item1_price = 15.99

item2_name = "Gadget"
item2_price = 23.50

item3_name = "Fruits"
item3_price = 9.75

item4_name = "Meat"
item4_price = 5.20

total = item1_price + item2_price + item3_price + item4_price

print("\t  Receipt")
print("=" * 20)
print(f"{item1_name}: ${item1_price:.2f}")
print(f"{item2_name}: ${item2_price:.2f}")
print(f"{item3_name}: ${item3_price:.2f}")
print(f"{item4_name}: ${item4_price:.2f}")
print("=" * 20)
print(f"Total: ${total:.2f}")