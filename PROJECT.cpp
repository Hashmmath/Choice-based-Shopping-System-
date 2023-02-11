#include<stdio.h>
#include<math.h>

struct{
	   char *Name;
	   char *Model;
	   char *Type;
       char *colour;
	   char *specifications;
	   char *size;
	   int price;
}DELL,DELL_VOSTRO,DELL_Mouse,ZEBRONICS,Lenovo,Lenovo_IdeaPad,hp,hp_Chromebook,OnePlus,Philips_Trimmer,vero_moda_pants,harpa_dress,biba_bottom,Safari,jockey_Pants,WROGN_Pant,UCB_Pant,USPA_Pant,AllenSolly_Pant,ck_Pant,Levis_Pant,Solimo_Box,Solimo_Bedsheets,Solimo_Curtains,Solimo_Incense,Solimo_Glove,Solimo_Oil,Solimo_Mob,Solimo_Handwash,Whirpool_WashingMachine,Panasonic_TV,Panasonic_Fridge,bata_flipflop,skechers_slippers,Giva_Earrings,Giva_Rings,Classmate_pens,luxar_Pen,FaberCastle,Oneplus_Nord,Oneplus_TV,NOKIA,Apple,Apple_Laptop,Apple_Ipad,Apple_Airpods,Samsung,Samsung_Earphones,Samsung_Fridge,acer,acer_Nitro,ASUS,ASUS_Mouse,Xiaomi,MI_NoteBook,Microsoft,Microsoft_Surface,LG,LG_TV,LG_Fridge,Moto,Vivo,OPPO,Honor,Google,JBL,boAt,Marshall,Philips,Mivi,Ryzen,Panasonic,Toshiba,Whirpool,Godrej,IFB,BOSCH,VOLTAS,DAIKIN,BLUE_STAR,USHA,Orient,Crompton,Solimo,puma,reebok,adidas,nike,levis,ck,AllenSolly,USPA,UCB,WROGN,jockey,Skybags,Armani,Titan,Police,fossil,casio,Diesel,American_Tourister,VIP,WildCraft,aurelia,biba,harpa,vero_moda,bata,skechers,catwalk,carlton,Giva,DA_Milano,LINO_PERROS,Diana_Korr,Ray_Ban,IDEE,Mtv,Presto,Classmate,apsara,parker,luxar,youva;

int main()
{
	DELL.Name = "DELL Inspiron";
	DELL_VOSTRO.Name = "DELL VOSTRO";
	DELL_Mouse.Name = "DELL Mouse";
	ZEBRONICS.Name = "ZEBRONICS Keyboard";
	Lenovo.Name = "Lenovo ThinkPad";
	Lenovo_IdeaPad.Name = "Lenovo IdeaPad";
	hp.Name = "hp Pavilion";
	hp_Chromebook.Name = "hp Chromebook";
	OnePlus.Name = "OnePlus";
	Oneplus_Nord.Name = "Oneplus Nord";
	Oneplus_TV.Name = "Oneplus TV";
	NOKIA.Name = "Nokia";
	Apple.Name = "Apple";
	Apple_Laptop.Name = "Apple MacBook Pro";
	Apple_Ipad.Name = "Apple Ipad";
	Apple_Airpods.Name = "Apple Airpods Pro";
	Samsung.Name = "Samsung";
	Samsung_Earphones.Name = "Samsung BUDS";
	Samsung_Fridge.Name = "Samsung Fridge";
	acer.Name = "acer Aspire";
	acer_Nitro.Name = "acer Nitro";
	ASUS.Name = "ASUS ZenBook";
	ASUS_Mouse.Name = "ASUS ROG Pugio";
	Xiaomi.Name = "Xiaomi mi phone";
	MI_NoteBook.Name = "mi NoteBook";
	Microsoft.Name = "Microsoft Surface-3";
	Microsoft_Surface.Name = "Microsoft Surface-Pro";
	LG.Name = "LG";
	LG_TV.Name = "LG TV";
	LG_Fridge.Name = "LG Fridge";
	Moto.Name = "Moto";
	Vivo.Name = "Vivo";
	OPPO.Name = "OPPO";
	Honor.Name = "Honor";
	Google.Name = "Google Pixel";
	JBL.Name = "JBL Speaker";
	boAt.Name = "boAt Speaker";
	Marshall.Name = "Marshall Speaker";
	Philips.Name = "Philips Speaker";
	Philips_Trimmer.Name = "Philips Trimmer";
	Mivi.Name = "Mivi Speaker";
	Ryzen.Name = "AMD Ryzen";
	Panasonic.Name = "Panasonic Trimmer";
	Panasonic_TV.Name = "Panasonic TV";
	Panasonic_Fridge.Name = "Panasonic Fridge";
	Toshiba.Name = "Toshiba TV";
	Whirpool.Name = "Whirpool Fridge";
	Whirpool_WashingMachine.Name = "Whirpool WashingMachine";
	Godrej.Name = "Godrej Fridge";
	IFB.Name = "IFB WashingMachine";
	BOSCH.Name = "BOSCH WashingMachine";
	VOLTAS.Name = "VOLTAS AC";
	DAIKIN.Name = "DAIKIN AC";
	BLUE_STAR.Name = "BLUESTAR AC";
	USHA.Name = "USHA FAN";
	Orient.Name = "Orient FAN";
	Crompton.Name = "Crompton FAN";
	Solimo.Name = "Solimo Tissues";
	Solimo_Box.Name = "Solimo_Plastic Boxes";
	Solimo_Bedsheets.Name = "Solimo BedSheets";
	Solimo_Curtains.Name = "Solimo Curtains";
	Solimo_Incense.Name = "Solimo Incense_Sticks";
	Solimo_Glove.Name = "Solimo Gloves";
	Solimo_Oil.Name = "Solimo OIL";
	Solimo_Mob.Name = "Solimo Mob";
	Solimo_Handwash.Name = "Solimo HandWash";
	puma.Name = "Puma Shoes";
	reebok.Name = "Reebok Shoes";
	adidas.Name = "Adidas Shoes";
	nike.Name = "NIKE Shoes";
	levis.Name = "Levis Shirt";
	Levis_Pant.Name = "Levis Pant";
	ck.Name = "ck Shirt";
	ck_Pant.Name = "ck Pant";
	AllenSolly.Name = "AllenSolly Shirt";
	AllenSolly_Pant.Name = "AllenSolly Pant";
	USPA.Name = "USPA Shirt";
	USPA_Pant.Name = "USPA Pant";
	UCB.Name = "UCB Shirt";
	UCB_Pant.Name = "UCB Pant";
	WROGN.Name = "WROGN Shirt";
	WROGN_Pant.Name = "WROGN Pant";
	jockey.Name = "jockey T-Shirts";
	jockey_Pants.Name = "jockey Pants";
	Skybags.Name = "Skybags Suitcase";
	Armani.Name = "Armani Watch";
	Titan.Name = "Titan Watch";
	Police.Name = "Police Watch";
	fossil.Name = "Fossil Watch";
	casio.Name = "Casio Watch";
	Diesel.Name = "Diesel Watch";
	American_Tourister.Name = "American-Tourister Suitcase";
	VIP.Name = "VIP Suitcase";
	WildCraft.Name = "WildCraft BagPack";
	Safari.Name = "Safari BagPack";
	aurelia.Name = "Aurelia Kurta";
	biba.Name = "BIBA SalwarSuit";
	biba_bottom.Name = "BIBA bottom";
	harpa.Name = "Harpa TOP";
	harpa_dress.Name = "Harpa dress";
	vero_moda.Name = "vero-moda Jacket";
	vero_moda_pants.Name = "vero-moda JeansPants";
	bata.Name = "BATA Sandals";
	bata_flipflop.Name = "bata flip flop";
	skechers.Name = "skechers Sneakers";
	skechers_slippers.Name = "skechers slippers";
	catwalk.Name = "CATWALK Sandals";
	carlton.Name = "carlton Loafers";
	Giva.Name = "Giva Necklace";
	Giva_Earrings.Name = "Giva Earrings";
	Giva_Rings.Name = "Giva Rings";
	DA_Milano.Name = "DA_Milano HandBag";
	LINO_PERROS.Name = "LINO-PERROS Satchel";
	Diana_Korr.Name = "Diana-Korr Wallet";
	Ray_Ban.Name = "Ray-Ban SunGlasses";
	IDEE.Name = "IDEE SunGlasses";
	Mtv.Name = "Mtv SunGlasses";
	Presto.Name = "Presto SurfaceCleaner";
	Classmate.Name = "Classmate Books";
	Classmate_pens.Name = "Classmate pens";
	apsara.Name = "Apsara Pencil";
	parker.Name = "Parker PEN";
	luxar.Name = "Luxar Notebook";
	luxar_Pen.Name = "Luxar Pen";
	youva.Name = "Youva Book";
	FaberCastle.Name = "FaberCastle DrawingStationary(Contains Crayons,WaterColours,Sketches,ColourPencils)";
	
	DELL.Model = "5502";
	DELL_VOSTRO.Model = "3400";
	DELL_Mouse.Model = "MS5320W";
	ZEBRONICS.Model = "Zeb-Max-Pro";
	Lenovo.Model = "E-15";
	Lenovo_IdeaPad.Model = "Slim 5 AMD RYZEN-7 4700U";
	hp.Model = "Gaming DK0271TX";
	hp_Chromebook.Model = "14na-na0003TU";
	OnePlus.Model = "8-Pro";
	Philips_Trimmer.Model = "BT3221/15";
	vero_moda_pants.Model = "Chino";
	harpa_dress.Model = "A-Line_Dress";
	biba_bottom.Model = "Palazzo_Bottom";
	Safari.Model = "DAYPACKNEO15CBDNB";
	jockey_Pants.Model = "AM05_Navy_M";
	WROGN_Pant.Model = "Jeans_Joggers";
	UCB_Pant.Model = "203762722_Brown";
	USPA_Pant.Model = "Denim";
	AllenSolly_Pant.Model = "ASTPWSRF252960";
	ck_Pant.Model = "4MS0P714007S";
	Levis_Pant.Model = "18298-0574";
	Solimo_Box.Model = "Plastic Containers";
	Solimo_Bedsheets.Model = "Cotton Double Bedsheets";
	Solimo_Curtains.Model = "Melodeon Polyster Curtain";
	Solimo_Incense.Model = "Multi Fragrance";
	Solimo_Glove.Model = "Microfibre Chenille Mitt Glove";
	Solimo_Oil.Model = "ExtraVirgin OLiveOil";
	Solimo_Mob.Model = "Spin Mob";
	Solimo_Handwash.Model = "Germ Protect HandWashLiquid";
	Whirpool_WashingMachine.Model = "ACE-8.5 TurboDry";
	Panasonic_TV.Model = "TV TH-40HS450DX";
	Panasonic_Fridge.Model = "NR-BS60VKX1";
	bata_flipflop.Model = "6716442";
	skechers_slippers.Model = "On The Go";
	Giva_Earrings.Model = "925-Silver Sterling";
	Giva_Rings.Model = "925-Silver Sterling Gemstone";
	Classmate_pens.Model = "Octane";
	luxar_Pen.Model = "Micra";
	FaberCastle.Model = "ART Care Kit";
	Oneplus_Nord.Model = "Nord-5G";
	Oneplus_TV.Model = "U-SERIES 55UA0A01";
	NOKIA.Model = "C3";
	Apple.Model = "11-PRO";
	Apple_Laptop.Model = "2021-Model";
	Apple_Ipad.Model = "PRO-2020";
	Apple_Airpods.Model = "PRO";
	Samsung.Model = "Galaxy-M51";
	Samsung_Earphones.Model = "SM-R180NZKAINU";
	Samsung_Fridge.Model = "RT34T4513S8";
	acer.Model = "Aspire-5";
	acer_Nitro.Model = "Nitro-5";
	ASUS.Model = "DUO_UX481FL-BM5811T";
	ASUS_Mouse.Model = "ROG-PUGIO";
	Xiaomi.Model = "MI-10";
	MI_NoteBook.Model = "NoteBook-14";
	Microsoft.Model = "VGY-00021";
	Microsoft_Surface.Model = "VDV-00015";
	LG.Model = "FHM1208ZDL";
	LG_TV.Model = "65UM7290PTD";
	LG_Fridge.Model = "GL-D201ASCY";
	Moto.Model = "MotoG-5G";
	Vivo.Model = "V-20";
	OPPO.Model = "F-17_PRO";
	Honor.Model = "9X-PRO";
	Google.Model = "Pixel5-5G";
	JBL.Model = "FLIP-3";
	boAt.Model = "Rockerz-225";
	Marshall.Model = "Major-III";
	Philips.Model = "MMS2200B";
	Mivi.Model = "MoonStone";
	Ryzen.Model = "Ryzen-5 3500X";
	Panasonic.Model = "ER207WK24B";
	Toshiba.Model = "55U5050";
	Whirpool.Model = "FP-283D-PROTTON-ROY";
	Godrej.Model = "RD-1904-PTDI-43-GLBL";
	IFB.Model = "ELITE-ZXS";
	BOSCH.Model = "WAX24168IN";
	VOLTAS.Model = "Copper-183VCZS";
	DAIKIN.Model = "JTKJ50TV";
	BLUE_STAR.Model = "IC318QATU";
	USHA.Model = "Striker Galaxy-1200mm";
	Orient.Model = "27Trendz-400mm";
	Crompton.Model = "SeaWind-1200mm";
	Solimo.Model = "Kitchen-Tissues";
	puma.Model = "One8_Prime-MidSneakers";
	reebok.Model = "Running_Shoes";
	adidas.Model = "ThorbM-RunningShoes";
	nike.Model = "Todos-Sneakers";
	levis.Model = "32874-0411";
	ck.Model = "Casual-Shirt";
	AllenSolly.Model = "ASSFHSPFR72154";
	USPA.Model = "USTS5778";
	UCB.Model = "18P5FN03U008I";
	WROGN.Model = "Jacket";
	jockey.Model = "J2715";
	Skybags.Model = "Trooper";
	Armani.Model = "AX2103";
	Titan.Model = "NM1805NL01";
	Police.Model = "PX34892P1"; //CHAIN
	fossil.Model = "FS4835";
	casio.Model = "G856";
	Diesel.Model = "DZ4338";
	American_Tourister.Model = "Cruze-ABS";
	VIP.Model = "Pisa-Polyester";
	WildCraft.Model = "Rucksack(8903338073857)";
	aurelia.Model = "19NOA11051-500917";
	biba.Model = "SKDINDIGO6057INDIGO";
	harpa.Model = "GR3848A";
	vero_moda.Model = "10227844";
	bata.Model = "Finn-Fashion";
	skechers.Model = "Goldie-2";
	catwalk.Model = "3866F-9";
	carlton.Model = "CLL-4494";
	Giva.Model = "925-SterlingSilver Zircon DoubleHeart";
	DA_Milano.Model = "DM7325H48";
	LINO_PERROS.Model = "LP3847659";
	Diana_Korr.Model = "DK537577";
	Ray_Ban.Model = "0RB3857";
	IDEE.Model = "IDS2500C51SG";
	Mtv.Model = "MTV-138-C3";
	Presto.Model = "PR35167";
	Classmate.Model = "CL25388";
	apsara.Model = "AP46728";
	parker.Model = "PR04994";
	luxar.Model = "LU93748";
	youva.Model = "YU5477";
	
	DELL.Type = "FHD-Laptop";
	DELL_VOSTRO.Type = "FHD_AG_Display-Laptop";
	DELL_Mouse.Type = "Wireless-Mouse";
	ZEBRONICS.Type = "Zeb-Max PRO Gaming-KeyBoard";
	Lenovo.Type = "IPS Thin&Light-Laptop";
	Lenovo_IdeaPad.Type = "IPS Thin&Light-Laptop";
	hp.Type = "Gaming-Laptop";
	hp_Chromebook.Type = "TouchScreen-Laptop";
	OnePlus.Type = "Smart-Phone";
	Philips_Trimmer.Type = "Titanium-Blade Trimmer";
	vero_moda_pants.Type = "Pants";
	harpa_dress.Type = "A-Line";
	biba_bottom.Type = "Palazzo";
	Safari.Type = "Casual/School/College BagPack";
	jockey_Pants.Type = "Fit-Joggers";
	WROGN.Type = "Joggers-Pant";
	UCB_Pant.Type = "Slim-Fit Casual-Trousers";
	USPA_Pant.Type = "Slim-Fit";
	AllenSolly_Pant.Type = "Chino Casual-Trousers";
	ck_Pant.Type = "Track-Pants";
	Levis_Pant.Type = "Slim Fit-Jeans";
	Solimo_Box.Type = "Plastic-Containers";
	Solimo_Bedsheets.Type = "BedSheets";
	Solimo_Incense.Type = "Incense-Sticks";
	Solimo_Glove.Type = "Single Sided-Glove";
	Solimo_Oil.Type = "Cooking-OIL";
	Solimo_Mob.Type = "Cleaning-Mob";
	Solimo_Handwash.Type = "Liquid-HandWash";
	Whirpool_WashingMachine.Type = "TOP-Loading WashingMachine";
	Panasonic_TV.Type = "Android-Smart_LED-TV";
	Panasonic_Fridge.Type = "Frost-Free_SidebySide-Refrigerator";
	bata_flipflop.Type = "Diamonte-Flip Flops";
	skechers_slippers.Type = "Glossy-Flip Flops&Slippers";
	Giva_Earrings.Type = "Ear-Rings";
	Giva_Rings.Type = "Ring";
	Classmate_pens.Type = "Gel-Pens";
	luxar_Pen.Type = "Ball-Pen";
	FaberCastle.Type = "Drawing-Kit";
	Oneplus_Nord.Type = "Smart-Phone";
	Oneplus_TV.Type = "Ultra HD LED SMART-Android-TV";
	NOKIA.Type = "Android-Smart-Phone";
	Apple.Type = "Smart-Phone";
	Apple_Laptop.Type = "Laptop";
	Apple_Ipad.Type = "Tab";
	Apple_Airpods.Type = "EarPhones";
	Samsung.Type = "Smart-Phone";
	Samsung_Earphones.Type = "Galaxy-Buds";
	Samsung_Fridge.Type = "DoubleDoor Refrigerator";
	acer.Type = "Laptop";
	acer_Nitro.Type = "Gaming-Laptop";
	ASUS.Type = "FHD Thin&Light-Laptop";
	ASUS_Mouse.Type = "Wired-Mouse";
	Xiaomi.Type = "Smart-Phone";
	MI_NoteBook.Type = "Thin&Light-Laptop";
	Microsoft.Type = "TouchScreen-Laptop";
	Microsoft_Surface.Type = "TouchScreen 2-in-1-Laptop";
	LG.Type = "Front Loading-WashingMachine";
	LG_TV.Type = "Smart IPS-SmartTV";
	LG_Fridge.Type = "Single Door-Refrigerator";
	Moto.Type = "Smart-Phone";
	Vivo.Type = "Smart-Phone";
	OPPO.Type = "Smart-Phone";
	Honor.Type = "Smart-Phone";
	Google.Type = "Smart-Phone";
	JBL.Type = "Portable-Speaker";
	boAt.Type = "Bluetooth-EarPhones";
	Marshall.Type = "Bluetooth-EarPhones";
	Philips.Type = "Bluetooth-Party-Speaker";
	Mivi.Type = "Wireless-Speaker";
	Ryzen.Type = "Desktop-Processor";
	Panasonic.Type = "Rechargeable-Charger";
	Toshiba.Type = "Ultra HD-SmartTV";
	Whirpool.Type = "Multi Door-Refrigirator";
	Godrej.Type = "Single Door-Refrigirator";
	IFB.Type = "Front Loading-WashingMachine";
	BOSCH.Type = "Front Loading-WashingMachine";
	VOLTAS.Type = "Inverter Spilt-AC";
	DAIKIN.Type = "Inverter Spilt-AC";
	BLUE_STAR.Type = "Inverter Spilt-AC";
	USHA.Type = "Ceiling-Fan";
	Orient.Type = "Table-Fan";
	Crompton.Type = "Ceiling-Fan";
	Solimo.Type = "Kitchen-Tissue";
	puma.Type = "Sneakers";
	reebok.Type = "Running-Shoes";
	adidas.Type = "Running-Shoes";
	nike.Type = "Sneakers";
	levis.Type = "Casual-Shirt";
	ck.Type = "Casual-Shirt";
	AllenSolly.Type = "Printed-Shirt";
	USPA.Type = "POLO(T-Shirt)";
	UCB.Type = "Printed-Casual-Shirt";
	WROGN.Type = "Jacket";
	jockey.Type = "Cotton T-Shirt";
	Skybags.Type = "HardSided Check-In_Luggage";
	Armani.Type = "Hampton-Men's Watch";
	Titan.Type = "Neo Men's-Watch";
	Police.Type = "Chain-Watch";
	fossil.Type = "Men's-Watch";
	casio.Type = "G-Shock Men's-Watch";
	Diesel.Type = "Cheif Men's-Watch";
	American_Tourister.Type = "HardSided Suitcase";
	VIP.Type = "Check-in Luggage";
	WildCraft.Type = "RUCKSACK";
	aurelia.Type = "Straight-Kurta";
	biba.Type = "Salwar-Suit";
	harpa.Type = "Regular Fit-Top";
	vero_moda.Type = "Women's-Jacket";
	bata.Type = "Sandals";
	skechers.Type = "Sneaker";
	catwalk.Type = "Block Heel-Sandals";
	carlton.Type = "Casual-Loafers";
	Giva.Type = "Necklace";
	DA_Milano.Type = "HandBag";
	LINO_PERROS.Type = "Satchel";
	Diana_Korr.Type = "Wallet";
	Ray_Ban.Type = "SunGlasses";
	IDEE.Type = "Unisex-SunGlasses";
	Mtv.Type = "Unisex-Round-Sunglasses";
	Presto.Type = "Floor-Disinfectant-Cleaner";
	Classmate.Type = "Spiral-NoteBook(Avengers-Edition)";
	apsara.Type = "Extra Dark-Pencils";
	parker.Type = "Millenium-GT-Ball-Point-Pen";
	luxar.Type = "Spiral-NoteBook";
	youva.Type = "Spiral-NoteBook";
	
	DELL.colour = "Platinum-Silver";
	DELL_VOSTRO.colour = "Black";
	DELL_Mouse.colour = "Grey";
	ZEBRONICS.colour = "Black";
	Lenovo.colour = "Black";
	Lenovo_IdeaPad.colour = "Graphite-Grey";
	hp.colour = "Shadow-Black";
	hp_Chromebook.colour = "White";
	OnePlus.colour = "Glacial-Green";
	Philips_Trimmer.colour = "Space-Grey";
	vero_moda_pants.colour = "Birch";
	harpa_dress.colour = "Red-Floral";
	biba_bottom.colour = "Indigo";
	Safari.colour = "Denim-Blue";
	jockey_Pants.colour = "Navy-Blue";
	WROGN_Pant.colour = "Black";
	UCB_Pant.colour = "Brown";
	USPA_Pant.colour = "Black";
	AllenSolly_Pant.colour = "Light-Grey";
	ck_Pant.colour = "Black-Camo";
	Levis_Pant.colour = "Blue";
	Solimo_Box.colour = "Silver";
	Solimo_Bedsheets.colour = "Green";
	Solimo_Curtains.colour = "Green";
	Solimo_Incense.colour = "Pink";
	Solimo_Glove.colour = "Blue";
	Solimo_Oil.colour = "Olive-Green";
	Solimo_Mob.colour = "Blue";
	Solimo_Handwash.colour = "Pink";
	Whirpool_WashingMachine.colour = "Wine-Dazzle";
	Panasonic_TV.colour = "Black";
	Panasonic_Fridge.colour = "Dark-Grey";
	bata_flipflop.colour = "Black";
	skechers_slippers.colour = "Pink";
	Giva_Earrings.colour = "Silver";
	Giva_Rings.colour = "Silver";
	Classmate_pens.colour = "Blue";
	luxar_Pen.colour = "Black";
	FaberCastle.colour = "MultiColour";
	Oneplus_Nord.colour = "Blue-Marble";
	Oneplus_TV.colour = "Black";
	NOKIA.colour = "Nordic-Blue";
	Apple.colour = "Mid-Night_Green";
	Apple_Laptop.colour = "Silver";
	Apple_Ipad.colour = "Space-Grey";
	Apple_Airpods.colour = "White";
	Samsung.colour = "Celestial-Black";
	Samsung_Earphones.colour = "Mystic-Black";
	Samsung_Fridge.colour = "Elegant-Inox";
	acer.colour = "Silver";
	acer_Nitro.colour = "Obsidian-Black";
	ASUS.colour = "Celestial_Blue";
	ASUS_Mouse.colour = "Black";
	Xiaomi.colour = "Coral-Green";
	MI_NoteBook.colour = "Silver";
	Microsoft.colour = "Platinum";
	Microsoft_Surface.colour = "Platinum";
	LG.colour = "Luxury-Silver";
	LG_TV.colour = "Ceramic-Black";
	LG_Fridge.colour = "Scarlet-Charm";
	Moto.colour = "Frosted-Silver";
	Vivo.colour = "MidNight-Jazz";
	OPPO.colour = "Matte-Black";
	Honor.colour = "Phantom-Purple";
	Google.colour = "Just-Black";
	JBL.colour = "Black";
	boAt.colour = "Navy-Blue";
	Marshall.colour = "Black";
	Philips.colour = "Blackish-Blue";
	Mivi.colour = "Black";
	Ryzen.colour = "Black";
	Panasonic.colour = "Black";
	Toshiba.colour = "Black";
	Whirpool.colour = "Alpha-Steel";
	Godrej.colour = "Glass-Blue";
	IFB.colour = "Silver";
	BOSCH.colour = "Silver";
	VOLTAS.colour = "White";
	DAIKIN.colour = "White";
	BLUE_STAR.colour = "White+Champagne Gold";
	USHA.colour = "Silver-Sage";
	Orient.colour = "Electric-Blue";
	Crompton.colour = "Brown";
	Solimo.colour = "White";
	puma.colour = "White";
	reebok.colour = "REDRUS";
	adidas.colour = "Black";
	nike.colour = "Black";
	levis.colour = "Wine-S";
	ck.colour = "Grey";
	AllenSolly.colour = "Blue";
	USPA.colour = "White";
	UCB.colour = "Black";
	WROGN.colour = "Green";
	jockey.colour = "Navy & White";
	Skybags.colour = "Polycarbonate-Blue";
	Armani.colour = "Black-Dail & Silver-Chain";
	Titan.colour = "Black-Dial & Brown-LeatherStrap";
	Police.colour = "Black";
	fossil.colour = "Blue-Dial";
	casio.colour = "Red-Strap & Black-Dial";
	Diesel.colour = "Black-Dial & Chain";
	American_Tourister.colour = "Black";
	VIP.colour = "Red";
	WildCraft.colour = "Red";
	aurelia.colour = "Blue";
	biba.colour ="Indigo" ;
	harpa.colour = "Mustard";
	vero_moda.colour = "Birch";
	bata.colour = "Black";
	skechers.colour = "White & Pink";
	catwalk.colour = "White";
	carlton.colour = "Gold";
	Giva.colour = "Silver";
	DA_Milano.colour = "Green";
	LINO_PERROS.colour = "Pink";
	Diana_Korr.colour = "Red";
	Ray_Ban.colour = "Blue";
	IDEE.colour = "Light-Green";
	Mtv.colour = "Green";
	Presto.colour = "Violet";
	Classmate.colour = "Avengers-Design";
	apsara.colour = "Black";
	parker.colour = "Gold & Black";
	luxar.colour = "Blue & Orange Design";
	youva.colour = "Yellow-Design";
	
	DELL.specifications = "11thGen Core i5-1135G7/8GB RAM/512GB SSD/2GB MX330 Graphics/Windows 10 + MS Office Laptop";
	DELL_VOSTRO.specifications = "11th Gen i5-1135G7 / 8GB / 1TB / Integrated Graphics / Win 10 + MS Office";
	DELL_Mouse.specifications = "Multi-Device Wireless Mouse,.4Ghz - Windows 7, Windows 8.1 and 10;Mac;Linux;Chrome;and Android OS";
	ZEBRONICS.specifications = "Full Size Keyboard, Suspended Keycaps, 18 RGB Light Modes (Gold Plated USB, Braided Cable,Integrated media control)";
	Lenovo.specifications = "Intel Core i5 10th Gen,8GB RAM/ 1TB HDD + 128GB SSD/ Windows 10 Home/ Microsoft Office Home & Student 2019";
	Lenovo_IdeaPad.specifications = "8GB/512GB SSD/Windows 10/MS Office 2019/Integrated AMD Radeon Graphics,Ports and Drive: 2xUSB-A3.1 Gen1";
	hp.specifications = "Core i5-9300H/8GB/512GB SSD/Windows 10 Home/MS Office/4GB NVIDIA GeForce GTX 1650 Graphics";
	hp_Chromebook.specifications = "Intel N4020/4GB/64GB SSD + 256GB Expandable/Chrome OS/1.46 kgs Light,Intel Celeron N4020 (1.1 GHz base frequency";
	OnePlus.specifications = "8GB RAM+128GB Storage,48MP rear camera with 4k video at 30/60 fps, 1080p video at 30/60 fps,17.22 centimeters (6.78-inch) 120Hz fluid display with 3168 x 1440 pixels resolution";
	Philips_Trimmer.specifications = "corded & cordless Titanium blade Beard Trimmer - 20 length settings; 90 min run time,Upto 90 minutes cordless use after 1 hour charging Fast Charge with battery indicator";
	vero_moda_pants.specifications = "polyester34%,viscose1%,elastane%,machine wash,Chino,Regular-rise,30.89x20.5x6cm;370 Grams";
	harpa_dress.specifications = "100% Polyester,Hand wash in cold water, dry in shade for lasting color,A-Line,Short Sleeve,Knee length";
	biba_bottom.specifications = " 29x23x2.6cm;250 Grams,Material: Cotton,soft touch and features elasticated waistband and drawstring for a better hold.";
	Safari.specifications = "Outer Material: Polyester, Color: Denim Blue,Not water resistant,Capacity: 15 liters; Weight: 200 grams; Dimensions: 12 cms x 27 cms x 41 cms (LxWxH),Number of compartments: 2";
	jockey_Pants.specifications = "Material composition:80% cotton, 20% polyester,Super combed Cotton Rich fabric,Comfortable ribbed waistband with drawstring,Convenient side pocket with zipper for added security,Slim fit";
	WROGN_Pant.specifications = "Synthetic,Machine wash,24.7 x 20.3 x 7.6 cm; 350 Grams";
	UCB_Pant.specifications = "Machine Wash,Fit Type: Slim,Material: cotton,Button fly with button closure,Machine wash,29.4 x 18.8 x 4.2 cm; 420 Grams";
	USPA_Pant.specifications = "Mild Wash, wash separately,Fit Type: Slim,Material: Cotton with Lycra/Elastane for Stretchability (98% Cotton , 2% Elastane),Color: Black,Fit Type: Slim Fit";
	AllenSolly_Pant.specifications = "Synthetic,Machine wash,24.7 x 20.3 x 7.6 cm; 350 Grams";
	ck_Pant.specifications = "Machine Wash,Color name: Ck Black Camo,Material: Cotton,Pattern: Printed,Machine Wash,35.6 x 26.9 x 5.4 cm; 430 Grams";
	Levis_Pant.specifications = "Machine Wash,Fit Type: Slim,Stretchable Jeans,Color Name: Blue,87% Cotton, 12% polyester and 1% elastane,Zip fly with button closure,Slim fit,Machine wash";
	Solimo_Box.specifications = "Plastic,Item Dimensions L x W x H17.5 x 12.9 x 17.5 Centimeters,Capacity200 Milliliters,ShapeRound,Get ample of storage capacity with a set of 20 jars - 4 eachinthesizesof1500ml,1200ml,450ml,200ml,50ml";
	Solimo_Bedsheets.specifications = "144 TC 100% Cotton,Bedsheet - 90 inch x 100 inch or 228 cm x 254 cm, Pillow Cover - 18 inch x 27 inch or 46 cm x 68 cm";
	Solimo_Curtains.specifications = "high quality 100% polyester fabric that is 190 GSM";
	Solimo_Incense.specifications = "5.3 x 1.5 x 22.9Centimeters,Burning time: 47 minutes,Freshens the air and eliminates bad odours";
	Solimo_Glove.specifications = "high-quality 1300 GSM 90% polyester and 10% nylon fabric chenille loops on front and 230 GSM polyester fabric on back,16 x 23 cm";
	Solimo_Oil.specifications = "Contains omega-3 and antioxidants which makes for a healthier cooking alternative,Extra virgin olive oil that is trans-fat-free";
	Solimo_Mob.specifications = "100% polyester highly absorbent fibre mop with 360-degree spinning and adjustable height, ensuring deep cleaning and ease of wringing,452.4X261.2X223.8mm";
	Solimo_Handwash.specifications = "Antibacterial germ-protect liquid handwash refill for everyday use,Contains Active Silver formula to help fight germs";
	Whirpool_WashingMachine.specifications = "5 Star Semi-Automatic Top Loading Washing Machine (ACE 8.5 TURBO DRY, Wine Dazzle),1400 RPM Motor,Big Wheels and Smart Handle";
	Panasonic_TV.specifications = "Full HD (1920x1080),2 HDMI ports to connect set top box, Blu-Ray players, gaming console,Android OS (Ver. 9.0) by Google | ARM CA53 Quad Core with TEE and secure boot 1.1GHz,16 Watts Output|Audio Link|V-Audio";
	Panasonic_Fridge.specifications = "Premium Refrigerator with Auto-Defrost Function to Prevent Ice Build-Up,Double Vegetable Box | Triple Twist Ice Tray | Interior Energy Saving LED Lighting";
	bata_flipflop.specifications = "Closure: Slip-On,Heel Height: 0.5 inches,Shoe Width: Medium,Material Type: Synthetic,0.5 inches,30.6 x 15 x 11 cm; 430 Grams";
	skechers_slippers.specifications = "Sole: Fabric,Closure: Slip-On,Shoe Width: Medium";
	Giva_Earrings.specifications = "925 Sterling Silver, 8 Mm Size, Aaa+ High Quality Cz Stone, Tarnish Resistant,Comes With The Authentication Certificate,These Stud Earrings In Sparkling Zircons Feature";
	Giva_Rings.specifications = "The Gemstone Little Heart Ring features an array of sparkling stones,Brilliantly shiny multi colored, 925 sterling silver, High quality gemstones, tarnish resistant and does not contain any allergic substance";
	Classmate_pens.specifications = "Smooth and fast writing,Japanese waterproof ink,Comfortable grip,Stylish sculpted design";
	luxar_Pen.specifications = "Ball pen,Ink color: Black, warranty: 1.5 Years,Superior RT mechanism";
	FaberCastle.specifications = "A smart assortment of art and craft tools for children,This assortment of dry and wet colors contains 10 erasable crayons,3 oil pastels";
	Oneplus_Nord.specifications = "12GB RAM, 256GB Storage,48MP+8MP+5MP+2MP quad rear camera with 1080P Video at 30/60 fps, 4k 30fps,6.44-inch 90Hz fluid Amoled display with 2400 x 1080 pixels resolution,4115mAH lithium-ion battery,30/60 fps and 1080 video capture at 30/60 fps";
	Oneplus_TV.specifications = "4K Ultra HD LED Smart Android TV,4K Ultra HD (3840x2160) | Refresh Rate: 60 hertz,3 HDMI ports to connect set top box, Blu Ray players, gaming console,30 Watts Output,Dolby Vision | HDR10 | HDR10+ | HLG | DCI-P3 93% colour gamut | Gamma Engine,Android TV 9.0 ";
	NOKIA.specifications = "2GB RAM 16GB Storage, All-Day Battery and Fingerprint Sensor,8MP auto-focus, F2.0 with flash rear camera | 5MP F2.4 front camera,720 x 1440 pixels resolution,3040mAH lithium-ion battery";
	Apple.specifications = "256GB,5.8-inch (14.7 cm) Super Retina XDR OLED display,Triple-camera system with 12MP Ultra Wide, Wide, and Telephoto cameras; Night mode, Portrait mode, and 4K video up to 60fps,12MP TrueDepth front camera,A13 Bionic chip,18W adapter";
	Apple_Laptop.specifications = "Apple M1 Chip (13-inch, 8GB RAM, 256GB SSD),8-core CPU delivers up to 2.8x faster performance,13.3-inch Retina display";
	Apple_Ipad.specifications = "Wi-Fi + Cellular, 512GB,11-inch (27.94 cms) edge-to-edge Liquid Retina display with ProMotion, True Tone, and P3 wide color,A12Z Bionic chip with Neural Engine,12MP Wide camera, 10MP Ultra Wide camera, and LiDAR Scanner,802.11ax Wi-Fi 6 and Gigabit-class LTE cellular data";
	Apple_Airpods.specifications = "Active noise cancellation for immersive sound,Three sizes of soft, tapered silicone tips for a customisable fit,Sweat and water resistant,Quick access to Siri by saying “Hey Siri”";
	Samsung.specifications = "6GB RAM, 128GB Storage, 64MP (F1.8) main camera + 12MP (F2.2) ultra wide camera + 5MP (F2.4) depth camera + 5MP (F2.4) macro camera and 32MP (F2.2) front camera,16.95 cm (6.7-inch) sAMOLED Plus - Infinity-O display,1080 x 2400 pixels resolution,7000mAH lithium-ion battery";
	Samsung_Earphones.specifications = "1 Lithium ion batteries required. (included),1.5 x 1.7 x 2.7 cm; 42 Grams,Noise cancelling,With microphone";
	Samsung_Fridge.specifications = "auto defrost function to prevent ice build up,This 3 Star rating model does not come with Freshroom / Coolpack feature";
	acer.specifications = "Intel Core i5 11th Generation,8 GB/512 GB SSD/Windows 10 Home/NVIDIA GeForce MX350 /1.7Kg,Intel Wireless Wi-Fi 6 | Acer Fingerprint Reader | Backlit Keyboard | Up to 8.5 Hours Battery Life";
	acer_Nitro.specifications = "Intel Core i5-10th Gen,8GB Ram/1TB HDD + 256GB SSD/Win10/GTX 1650Ti Graphics,AN515-55 + Xbox Game Pass for PC,10300H processor";
	ASUS.specifications = "Intel Core i5 10th Gen,8GB RAM/512GB NVMe SSD/Windows 10/2GB NVIDIA GeForce MX250 Graphics/ScreenPad Plus,LPDDR3 2133MHz RAM";
	ASUS_Mouse.specifications = "Gaming Mouse with a Truly ambidextrous Design Featuring configurable Side Buttons, Exclusive Push-fit Switch Socket Design, and Aura RGB Lighting with Aura Sync Support";
	Xiaomi.specifications = "8GB RAM, 256GB Storage,108MP Quad Camera, SD 865 Processor, 5G Ready,4780mAH lithium-polymer battery with 30W wired fast charger";
	MI_NoteBook.specifications = "Intel Core i5-10210U 10th Gen,8GB/256GB SSD/Windows 10/Intel UHD Graphics,1.6 GHz base speed, 4.2 GHz max speed, 4 Cores, 8 threads";
	Microsoft.specifications = "Intel Core i5 10th Gen,8GB/128GB SSD/Windows 10 Home/Integrated Graphics";
	Microsoft_Surface.specifications = "10th Gen Intel Core i5/8GB/128GB SSD/Windows 10 Home/Intel Iris Plus Graphics,Quad-Core, 1.10 Ghz,8GB LPDDR4x RAM with Intel Iris Plus Graphics | Storage: 128GB SSD";
	LG.specifications = "5 Star Inverter Fully-Automatic Front Loading Washing Machine (FHM1208ZDL, Luxury Silver, Direct Drive Technology),1200 RPM: higher spin speeds helps in faster drying";
	LG_TV.specifications = "4K Ultra HD Smart IPS LED TV,20 Watts Output, Wireless Sound (2 Way Bluetooth), Surround Sound: DTS Virtual: X,4K IPS Panel for wide viewing angle, True color accuracy, 4K active HDR for incredible detail,4K Ultra HD (3840x2160), Refresh Rate: 50 hertz";
	LG_Fridge.specifications = "4 Star Inverter Direct-Cool Single Door Refrigerator,Vegetable basket with 12.6 litres capacity | Tray egg | 2+3 Door basket (full size/half size)| Lock | Works without stabilizer: 90v ~ 310v";
	Moto.specifications = "6GB+128GB,6 GB RAM | 128 GB ROM | Expandable Upto 1 TB,16.94 cm (6.67 inch) Full HD+ Display,48MP + 8MP + 2MP | 16MP Front Camera,5000 mAh Li-Polymer Battery | 20Watt Charger,Qualcomm Snapdragon 750G Processor";
	Vivo.specifications = "8GB RAM, 128GB Storage,Funtouch OS 11 based on Android 11 operating system with Qualcomm Snapdragon 730 processor,4000mAH lithium-ion battery";
	OPPO.specifications = "8GB RAM, 128GB Storage,48MP + 8MP + 2MP + 2MP Quad camera with photo, video, panorama, portrait, night scenes, time-lapse photography, beauty selfies, etc. | 16MP main + 2MP depth Front Camera,4015mAH lithium-polymer massive battery with 30W VOOC Flash Charge 4.0";
	Honor.specifications = "6GB RAM, 256GB Storage,48+8+2MP AI triple rear camera | 16MP AI pop front camera,4000mAh lithium-polymer battery,EMUI 9.1 Based on Android v9 Pie operating system with 2.27GHz Kirin 810 7nm AI chipset octa core processor";
	Google.specifications = "128GB,2.4 GHz,8 GB,Cellular,13.37 Watt Hours";
	JBL.specifications = "Stealth Waterproof Portable Bluetooth Speaker with Rich Deep Bass (Black), Without Mic,10 Hours of Playtime under optimum audio settings,IPX7 Waterproof with durable fabric material,Wireless Bluetooth Streaming";
	boAt.specifications = "in-Ear Bluetooth Neckband Earphone with Mic,It has an IPX5 marked water & sweat resistance,";
	Marshall.specifications = "Bluetooth Wireless On-Ear Headphones,Bluetooth aptX gives you the freedom and convenience of a wireless headphone, Major III Bluetooth features 40 mm dynamic drivers,Major III Bluetooth keeps the music going strong with over 30 hours of wireless playtime on a single charge";
	Philips.specifications = "Bluetooth Party Speaker,Total 100 W sound output power,FM tuner for radio enjoyment";
	Mivi.specifications = "Portable Wireless Speaker with HD Sound, Punchy Bass, Clear Highs and 10Watts Peak Output,Pair two speakers wirelessly for a 2X Sound with extra powerful left and right channel,Dust and splash resistant (IPX 5) design for complete peace of mind";
	Ryzen.specifications = "6 cores up to 4.1GHz 35MB Cache AM4 Socket,3.6GHz, Max Boost Clock: up to 4.1GHz, 35MB Cache, TDP: 65W,AM4, Motherboard Compatibility: AMD 400, 500 serles chipset based motherboards,3200MHz, System";
	Panasonic.specifications = "Corded/Cordless Rechargeable Trimmer with Quick Adjust Dial,Turn dial to easily adjust comb up and down into 12 settings From 0.2-1.8 cm";
	Toshiba.specifications = "4K Ultra HD Smart LED TV,3 HDMI ports to connect set top box, gaming console etc | 2 USB ports to connect hard drives and other USB devices | Bluetooth | Screen Mirroring | Stylish Voice Remote,Dolby Vision HDR | Ultra Dimming | HDR10, HLG | CEVO 4K HDR | Super contrast Booster | 4K Resolution+ Upscaler";
	Whirpool.specifications = "Frost Free Multi-Door Refrigerator,Toughened Glass,230 Volts,Freestanding";
	Godrej.specifications = "Inverter Direct-Cool Single Door Refrigerator,4 star, Annual energy consumption: 113 Kilowatt Hours,Frost-free refrigerator with Anti-B technology";
	IFB.specifications = "Fully-Automatic Front Loading Washing Machine,1000 rpm: Higher the spin speed, faster the drying time,13 Wash Programs";
	BOSCH.specifications = "Fully-Automatic Front Loading Washing Machine,wave-droplet design provides a thorough yet gentle clean for fine textiles";
	VOLTAS.specifications = "Inverter Split AC,R-32. Environment friendly - no ozone depletion potential & low global warming potential";
	DAIKIN.specifications = "Inverter Split AC (Copper, PM 0.1 Filter, 2018 Model, JTKJ50TV White),744 units, ISEER Value: 5.2,R32 - Environmental friendly - no ozone depletion potential";
	BLUE_STAR.specifications = "Star Inverter Split AC,Split AC; 1.5 ton capacity,Auto restart with memory function,golden hydrophilic fins";
	USHA.specifications = "80-watt Goodbye Dust Ceiling Fan with Anti Dust Feature,240 cmm, Air sweep: 1200 mm; Speed: 385 rpm, Wattage: 80W";
	Orient.specifications = "High Speed Table Fan,Sweep: 400mm, Air Delivery: 5700 m3/hr, RPM: 2000,90 Degree oscillation,3-Speed Piano switch control,Extra protection against corrosion with powder-coated guard and polymer ring";
	Crompton.specifications = "100% copper motor, double ball bearings, dynamically balanced blades,Sweep Size = 1200 mm; Speed = 380 RPM; Air Delivery = 200CMM; Input Power = 70W";
	Solimo.specifications = "Tissues made from 100 percent natural virgin paper,Free from optical brightening agent (OBA),Highly absorbent tissues that soak up spills quickly";
	puma.specifications = "Sole: Rubber,Closure: Lace-Up,Shoe Width: Regular,Color: Puma White - Puma Team Gold";
	reebok.specifications = "Sole: Rubber,Closure: Lace-Up,Heel Height: 1.5 inches,Shoe Width: Regular,Outer Material: Synthetic,Closure Type: Lace-Up,Toe Style: Round Toe";
	adidas.specifications = "Sole: Rubber,Closure: Lace-Up,Heel Height: 1.5 inches,Shoe Width: Regular,Outer Material: Synthetic,Closure Type: Lace-Up,Toe Style: Round Toe";
	nike.specifications = "Sole: Rubber,Closure: Lace-Up,Heel Height: 1.5 inches,Shoe Width: Regular,Outer Material: Synthetic,Closure Type: Lace-Up,Toe Style: Round Toe";
	levis.specifications = "Care Instructions: Machine Wash,Fit Type: Regular Fit,Color name: Wine,Material: Cotton,Pattern: solid,long sleeve,machine wash";
	ck.specifications = "Care Instructions: Machine Wash,Fit Type: Slim Fit,Color name: Grey,Material: Cotton,Pattern: Printed,Long Sleeve,Machine Wash";
	AllenSolly.specifications = "Care Instructions: Machine Wash,Fit Type: Slim Fit,Color Name: Blue,100% Cotton,Long sleeve";
	USPA.specifications = "Care Instructions: Hand Wash Only,Fit Type: Regular Fit,100% Cotton,Half sleeve";
	UCB.specifications = "Care Instructions: Machine Wash,Fit Type: Slim Fit,Color Name: Black,100% Cotton,Long sleeve";
	WROGN.specifications = "Slim fit,100% cotton,Machine-wash,Long Sleeves";
	jockey.specifications = "Collection: 24 x 7 ; Style no: 2715,20 percent Polyester, 80 percent Cotton,Premium Combed Cotton Rich fabric,Modern Fit";
	Skybags.specifications = " Outer Material: Polycarbonate, Casing: Hard, Color: Blue,Not water resistant,Capacity: 60 liters; Weight: 3380 grams; Dimensions: 65 cms x 49 cms x 27 cms (LxWxH)";
	Armani.specifications = "Dial Color: Black, Case Shape: Round,Band Color: Silver, Band Material: Stainless steel,Watch Movement Type: Quartz, Watch Display Type: Analog,Water Resistence Depth: 50 meters";
	Titan.specifications = "Dial Color: Black, Case Shape: Round, Dial Glass Material: Mineral,Band Color: Brown, Band Material: Leather,Watch Movement Type: Quartz, Watch Display Type: Analog,Water Resistance Depth: 50 meters, Buckle Clasp";
	Police.specifications = "Dial Color: Black, Case Shape: Round, Dial Glass Material: Mineral,Band Color: Black, Band Material: Metal,Water Resistance Depth: 50 meters";
	fossil.specifications = "Dial Color: Blue, Case Shape: Round, Dial Glass Material: Mineral,Band Color: Black, Band Material: Metal,Water Resistance Depth: 50 meters";
	casio.specifications = "Dial color: grey, case shape: round, dial glass material: mineral,Band Color: orange, band material: resin,Case material: resin, case diameter: 48.6 millimeters,Water resistance depth: 200 meters, buckle clasp";
	Diesel.specifications = "Dial Color: Black, Case Shape: Round, Dial Glass Material: Mineral,Band Color: Black, Band Material: Stainless Steel,Case Material: Stainless Steel, Case Diameter: 59 millimeters, Stainless Steel Bezel,Water Resistance Depth: 100 meters, Deployment Clasp";
	American_Tourister.specifications = "Outer Material: ABS, Casing: Hard, Color: Black,Wear Resistant: Wear resistant, Water Resistance: Water proof,Capacity: 84 liters; Weight: 3600 grams; Dimensions: 48 cms x 30 cms x 68 cms (LxWxH)";
	VIP.specifications = "Outer Material: Polyester, Casing: Soft, Color: Red,Capacity: 75 liters; Weight: 3764 grams; Dimensions: 45 cms x 30 cms x 70 cms (LxWxH),Lock Type: Number Lock, Number of Wheels: 4";
	WildCraft.specifications = "Outer material: Nylon, color: Red,Water resistance: Water resistant,Dimensions: 34 cms x 23 cms x 50 cms (LxWxH)";
	aurelia.specifications = "Care Instructions: machine wash,Material: Synthetic with long sleeve,Straight fit,Knee length";
	biba.specifications = "Care Instructions: Machine wash in cold water,light tumble dry,use mild detergent,do not bleach,medium to hot iron,Material: Cotton,A Line,Knee length,Long sleeve";
	harpa.specifications = "Care Instructions: Hand Wash Only,Fit Type: Regular Fit,Material: Crepe,Body blouse,Half sleeve,V-neck";
	vero_moda.specifications = "Care Instructions: machine wash,100% Cotton - Organic,Plain";
	bata.specifications = "Closure: Buckle,Heel Height: 2.5 inches,Shoe Width: Medium,Material Type: Synthetic,Lifestyle: Casual,Closure Type: Buckle,Heel Type: Wedge,Heel Height: 2.5 inches";
	skechers.specifications = "Closure: Lace-Up,Shoe Width: Medium,Closure: Lace-Up";
	catwalk.specifications = "Sole: Manmade,Closure: Buckle,Heel Height: 8.5 centimeters,Shoe Width: Medium,Outer Material: Synthetic Leather,Closure Type: Buckle,Heel type: block heel,Heel Height: 8.5 centimeters,Toe Style: Round Toe";
	carlton.specifications = "Sole: Rubber,Closure: Slip-On,Shoe Width: Regular,Outer Material: Synthetic,Closure Type: Slip On,Heel type: flats,Toe Style: Round Toe";
	Giva.specifications = "With an adjustable chain, the pendant is made of 925 sterling silver along with the same chain.The necklace comes in a cute GIVA jewellery box along with GIVA jewellery kit which includes a soft cleaning cloth for jewellery care";
	DA_Milano.specifications = "L-31CM*H-22CM*W-15.5CM,Da Milano Genuine Leather Green Women Handbag";
	LINO_PERROS.specifications = "Lino Perros Womens Pink Synthetic Leather Satchel,Dimension : 23 Centimeters Height X 27 Centimeters Length X 12 Centimeters Width,Material Type : Synthetic Leather";
	Diana_Korr.specifications = "Closure: Snap,Faux leather material red colored wallet,10 centimeters height x 19 centimeters length x 2 centimeters width,Snap closure,Clean with damp cloth, do not expose to extreme heat";
	Ray_Ban.specifications = "Metal Unisex Sunglass";
	IDEE.specifications = "Size Map: Large,Frame size: Lens width - 58 mm, nose-bridge: 15 mm, temple length: 138 mm,1 year on manufacturing defects1 year on manufacturing defects,100% UV protected,Shiny Silver colored frame with Shiny Silver temple,Metal frame,Light Green Gradient FM colored Polycarbonate lens,Ideal for: Men and Women";
	Mtv.specifications = "Size Map: Medium,Frame size: Lens width - 49 mm, nose-bridge: 27 mm, temple length: 142 mm,6 Months on manufacturing defects,100% UV protected,Black colored frame with Silver temple,Plastic frame,Green colored Polycarbonate lens,Ideal for: Men and Women";
	Presto.specifications = "All purpose cleaner which kills 99.99% germs*,Cleans tough stains ranging from coffee, ketchup, soy sauce, mustard sauce, olive oil etc.Easy to use,Can be used on a variety of surfaces like ceramic, marble, granite, mosaic etc.";
	Classmate.specifications = "240 mm x 180 mm, Soft Cover, 180 Pages, Unruled,Notebooks for every subject for hassle-free note-taking during classes or lectures";
	apsara.specifications = "Extra dark Lead for good Handwriting that stays dark for long.soft wood for easy sharpening.Dark lead needs less pressure while writing.";
	parker.specifications = "Plastic Black barrel and cap in Black colors with contrasting Golden Color powder coated clip,Cap on and cap off supplied with Ball Point Refill,A multipurpose metallic knife witha convenient key holder. A perfect travel accessory";
	luxar.specifications = "21 cm X 29.7 cm | Single Line | 400 Pages,Black rust-free spiral binding with safety locks to prevent pricking & loose pages,Acid-free paper that slows shade reversal,The pup is ECF based which reduces toxic effluents,Attractive cover designs with latest technology like matte finish & spot UV shine";
	youva.specifications = "(21cm x 29.7cm), 300 Pages,Single Ruled,International quality 60 gsm paper,Soft bound cover,Activity pages for free time,Multi colour page separator";
	
	DELL.size = "15.6-Inch";
	DELL_VOSTRO.size = "14-Inch";
	DELL_Mouse.size = "180gm-1Unit";
	ZEBRONICS.size = "22.2x 51 x 8.5 cm,1.85kg";
	Lenovo.size = "15.6-Inch";
	Lenovo_IdeaPad.size = "14-Inch";
	hp.size = "15.6-Inch";
	hp_Chromebook.size = "14-Inch";
	OnePlus.size = "17.22 centimeters (6.78-inch)";
	Philips_Trimmer.size = "Lenght Settings=20";
	vero_moda_pants.size = "S,M,L,XL";
	harpa_dress.size = "S,M,L,XL";
	biba_bottom.size = "S,M,L,XL";
	Safari.size = "15 Liters,12 cms x 27 cms x 41 cms (LxWxH)";
	jockey_Pants.size = "S,M,L,XL";
	WROGN_Pant.size = "S,M,L,XL";
	UCB_Pant.size = "S,M,L,XL";
	USPA_Pant.size = "S,M,L,XL";
	AllenSolly_Pant.size = "26,30,40,42";
	ck_Pant.size = "S,M,L,XL";
	Levis_Pant.size = "28,30,38,40";
	Solimo_Box.size = "17.5 x 12.9 x 17.5 Centimeters,200 Milliliters";
	Solimo_Bedsheets.size = "Bedsheet - 90 inch x 100 inch or 228 cm x 254 cm, Pillow Cover - 18 inch x 27 inch or 46 cm x 68 cm";
	Solimo_Curtains.size = "Length x Breadth: 7 x 4 feet (213 x 123 cm)";
	Solimo_Incense.size = "5.3 x 1.5 x 22.9 Centimeters,70 sticks/pack (Pack of 4)";
	Solimo_Glove.size = "16 x 23 cm,Set of 2";
	Solimo_Oil.size = "1L";
	Solimo_Mob.size = "Bucket dimensions: 452.4X261.2X223.8mm; Pipe length: 1175 mm; Mop plate diameter: 164.1 mm,2 Refills";
	Solimo_Handwash.size = "750ml";
	Whirpool_WashingMachine.size = "8.5Kg";
	Panasonic_TV.size = "100cm(40-Inch)";
	Panasonic_Fridge.size = "584L";
	bata_flipflop.size = "4UK,5UK,6UK,7UK";
	skechers_slippers.size = "4UK,5UK,6UK,7UK";
	Giva_Earrings.size = "Item Height-8 Millimeters,Item Width-8 Millimeters,Item Length-18 Millimeters";
	Giva_Rings.size = "Free-Size";
	Classmate_pens.size = "14 x 1 x 1 Centimeters,Pack of 25 + 10 Gel Refills";
	luxar_Pen.size = "14 x 1.5 x 1.5 Centimeters,20's Box";
	FaberCastle.size = "30 x 1 x 30 Centimeters";
	Oneplus_Nord.size = "6.44-inch";
	Oneplus_TV.size = "138.8 cm(55-Inches)";
	NOKIA.size = "15.21 cm(5.99-Inches)";
	Apple.size = "5.8-inch (14.7 cm)";
	Apple_Laptop.size = "13-Inches,1.4Kg";
	Apple_Ipad.size = "11-Inch,26 x 19 x 5 Millimeters";
	Apple_Airpods.size = "AirPods (each): 16.5 x 18.0 x 40.5 mm, (0.94 x 0.86 x 1.22 inches) , Wireless Charging Case: 45.2 x 21.7 x 60.6 mm (1.78 x 0.85 x 2.39 inches)";
	Samsung.size = "16.95 cm (6.7-inch)";
	Samsung_Earphones.size = "1.5 x 1.7 x 2.7 cm; 42 Grams";
	Samsung_Fridge.size = "324L";
	acer.size = "15.6-Inch,23.8 x 36.3 x 1.8 cm; 1.7 Kilograms";
	acer_Nitro.size = "15.6-Inch";
	ASUS.size = "14-Inch,22.3 x 32.3 x 2 cm; 1.5 Kilograms";
	ASUS_Mouse.size = "6.86 x 3.81 x 11.94 cm; 122.47 Grams";
	Xiaomi.size = "16.94 centimeters (6.67-inch),16.3 x 0.9 x 7.5 cm; 208 Grams";
	MI_NoteBook.size = "14-Inch,";
	Microsoft.size = "13.5-Inch,30.8 x 22.3 x 1.5 cm; 1.26 Kilograms";
	Microsoft_Surface.size = "12.3-Inch,29.2 x 20.1 x 0.9 cm; 770 Grams";
	LG.size = "8.0Kg";
	LG_TV.size = "164Cm(65-Inches),8.8 x 146.3 x 85 cm; 28.4 Kilograms";
	LG_Fridge.size = "190L,63.3 x 53.4 x 132.6 Centimeters";
	Moto.size = "16.94 cm (6.67 inch),16.6 x 7.6 x 1 cm; 100 Grams";
	Vivo.size = "16.37 centimeters (6.44 inch),16.1 x 0.7 x 7.4 cm; 171 Grams";
	OPPO.size = "16.34 centimeters (6.43 inch),16 x 0.7 x 7.4 cm; 164 Grams";
	Honor.size = "16.73 centimeters (6.59 inch),16.3 x 0.9 x 7.7 cm; 206 Grams";
	Google.size = "6 in,14.48 x 7.11 x 0.76 cm; 151.1 Grams";
	JBL.size = "10.6 x 9.4 x 19.8 cm; 450 Grams";
	boAt.size = "4.5 x 1.1 x 0.2 cm,25 grams";
	Marshall.size = "8.64 x 16 x 16 cm; 178.04 Grams";
	Philips.size = "33.2 x 22.1 x 59.4 cm; 6.11 Kilograms";
	Mivi.size = "9.5 x 3.5 x 9.5 cm; 422 Grams";
	Ryzen.size = "5 x 5 x 2 cm; 172 Grams";
	Panasonic.size = "4.8 x 4.3 x 15.9 cm; 124 Grams";
	Toshiba.size = "139-Inches,123 x 22.7 x 75.7 cm; 12.7 Kilograms";
	Whirpool.size = "260L,68.7 x 55.9 x 177.3 Centimeters";
	Godrej.size = "190L,66.7 x 57.7 x 124.7 Centimeters";
	IFB.size = "7Kg,59.8 x 51.8 x 87.5 Centimeters";
	BOSCH.size = "7Kg,23.6 x 23.6 x 33.5 Centimeters";
	VOLTAS.size = "53.7 x 182.5 x 87 Centimeters,Capacity-1.5 Tons";
	DAIKIN.size = "88.5 x 22.9 x 29.8 Centimeters,Capacity-1.5 Tons";
	BLUE_STAR.size = "54.6 x 96.5 x 31.9 Centimeters,Capacity-1.5 Tons";
	USHA.size = "10 x 22 x 23 cm; 2.9 Kilograms,1200mm";
	Orient.size = "400mm,44.5 x 29.5 x 60 cm; 3.53 Kilograms";
	Crompton.size = "1200mm, 20.8 x 27.4 x 54.6 cm; 4.34 Kilograms";
	Solimo.size = "4 Rolls (60 Pulls Per Roll),2 Rolls (60 Pulls Per Roll)";
	puma.size = "9US,10US,11US,12US";
	reebok.size = "9US,10US,11US,12US";
	adidas.size = "9US,10US,11US,12US";
	nike.size = "9US,10US,11US,12US";
	levis.size = "S,M,L,XL";
	ck.size = "39,40,42,44";
	AllenSolly.size = "39,40,42,44";
	USPA.size = "S,M,L,XL";
	UCB.size = "S,M,L,XL";
	WROGN.size = "39,40,42,44";
	jockey.size = "S,M,L,XL";
	Skybags.size = "65CMS,3.38 Kilograms";
	Armani.size = "Band Width-13 Millimeters,Case Diameter-46 Millimeters,Case Thickness-12 Millimeters";
	Titan.size = "Band Width-22 Millimeters,Case Diameter-49.2 Millimeters";
	Police.size = "Band Width-20.5 Millimeters,Case Diameter-41 Millimeters";
	fossil.size = "Band Width-22 Millimeters,Case Diameter-44 Millimeters";
	casio.size = "Band Width-22 Millimeters,Case Thickness-15 Millimeters,Case Diameter-48.6 Millimeters";
	Diesel.size = "Band Width-26 Millimeters,Case Diameter-5.9 Centimeters";
	American_Tourister.size = "70cms,Dimensions: 48 cms x 30 cms x 68 cms (LxWxH),Capacity: 84 liters";
	VIP.size = "67cms,Dimensions: 45 cms x 30 cms x 70 cms (LxWxH)";
	WildCraft.size = "45Ltrs,Dimensions: 34 cms x 23 cms x 50 cms (LxWxH)";
	aurelia.size = "S,M,L,XL";
	biba.size = "S,M,L,XL";
	harpa.size = "S,M,L,XL";
	vero_moda.size = "S,M,L,XL";
	bata.size = "4UK,5UK,6UK,7UK";
	skechers.size = "4UK,5UK,6UK,7UK";
	catwalk.size = "4UK,5UK,6UK,7UK";
	carlton.size = "4UK,5UK,6UK,7UK";
	Giva.size = "10 x 10 x 3 cm; 3 Grams";
	DA_Milano.size = "L-31CM*H-22CM*W-15.5CM";
	LINO_PERROS.size = "Dimension : 23 Centimeters Height X 27 Centimeters Length X 12 Centimeters Width";
	Diana_Korr.size = "10 centimeters height x 19 centimeters length x 2 centimeters width";
	Ray_Ban.size = "48mm,10 x 10 x 10 cm; 20 Grams";
	IDEE.size = "18.9 x 9.8 x 5.5 cm; 100 Grams";
	Mtv.size = "Frame size: Lens width - 49 mm, nose-bridge: 27 mm, temple length: 142 mm";
	Presto.size = "2L";
	Classmate.size = "240mm x 180mm,180 Pages";
	apsara.size = "20 x 1 x 1 Centimeters,Pack of 20 Pencil";
	parker.size = "20 x 20 x 120 Millimeters";
	luxar.size = "21cm x 29.7cm,300 Pages";
	youva.size = "21 cm X 29.7 cm,400 Pages";
	
	DELL.price = 69374;
	DELL_VOSTRO.price = 49490;
	DELL_Mouse.price = 2666;
	ZEBRONICS.price = 3720;
	Lenovo.price = 59990;
	Lenovo_IdeaPad.price = 59939;
	hp.price = 62990;
	hp_Chromebook.price = 27503;
	OnePlus.price = 54999;
	Philips_Trimmer.price = 2149;
	vero_moda_pants.price = 2799;
	harpa_dress.price = 559;
	biba_bottom.price = 367;
	Safari.price = 335;
	jockey_Pants.price = 1999;
	WROGN_Pant.price = 1500;
	UCB_Pant.price = 1229;
	USPA_Pant.price = 1529;
	AllenSolly_Pant.price = 1999;
	ck_Pant.price = 4182;
	Levis_Pant.price = 2500;
	Solimo_Box.price = 1149;
	Solimo_Bedsheets.price = 799;
	Solimo_Curtains.price = 2000;
	Solimo_Incense.price = 223;
	Solimo_Glove.price = 249;
	Solimo_Oil.price = 699;
	Solimo_Mob.price = 949;
	Solimo_Handwash.price = 85;
	Whirpool_WashingMachine.price = 13230;
	Panasonic_TV.price = 27990;
	Panasonic_Fridge.price = 58990;
	bata_flipflop.price = 776;
	skechers_slippers.price = 900;
	Giva_Earrings.price = 1199;
	Giva_Rings.price = 1299;
	Classmate_pens.price = 225;
	luxar_Pen.price = 170;
	FaberCastle.price = 290;
	Oneplus_Nord.price = 35999;
	Oneplus_TV.price = 52999;
	NOKIA.price = 6999;
	Apple.price = 86900;
	Apple_Laptop.price = 122900;
	Apple_Ipad.price = 112798;
	Apple_Airpods.price = 20990;
	Samsung.price = 22990;
	Samsung_Earphones.price = 11990;
	Samsung_Fridge.price = 31990;
	acer.price = 58995;
	acer_Nitro.price = 79990;
	ASUS.price = 86481;
	ASUS_Mouse.price = 5110;
	Xiaomi.price = 54999;
	MI_NoteBook.price = 40999;
	Microsoft.price = 92990;
	Microsoft_Surface.price = 78990;
	LG.price = 33490;
	LG_TV.price = 82999;
	LG_Fridge.price = 16490;
	Moto.price = 20999;
	Vivo.price = 24990;
	OPPO.price = 21490;
	Honor.price = 17999;
	Google.price = 69800;
	JBL.price = 5499;
	boAt.price = 1499;
	Marshall.price = 7799;
	Philips.price = 7799;
	Mivi.price = 1694;
	Ryzen.price = 15330;
	Panasonic.price = 1703;
	Toshiba.price = 39990;
	Whirpool.price = 26990;
	Godrej.price = 14190;
	IFB.price = 34599;
	BOSCH.price = 32781;
	VOLTAS.price = 33490;
	DAIKIN.price = 49900;
	BLUE_STAR.price = 35990;
	USHA.price = 2499;
	Orient.price = 2081;
	Crompton.price = 1228;
	Solimo.price = 413;
	puma.price = 4999;
	reebok.price = 2699;
	adidas.price = 1588;
	nike.price = 3810;
	levis.price = 1099;
	ck.price = 3499;
	AllenSolly.price = 1500;
	USPA.price = 1499;
	UCB.price = 1319;
	WROGN.price = 2499;
	jockey.price = 318;
	Skybags.price = 5054;
	Armani.price = 11995;
	Titan.price = 5025;
	Police.price = 10395;
	fossil.price = 7899;
	casio.price = 8795;
	Diesel.price = 17995;
	American_Tourister.price = 4499;
	VIP.price = 3899;
	WildCraft.price = 1540;
	aurelia.price = 703;
	biba.price = 1680;
	harpa.price = 307;
	vero_moda.price = 1499;
	bata.price = 1181;
	skechers.price = 3456;
	catwalk.price = 999;
	carlton.price = 1285;
	Giva.price = 1499;
	DA_Milano.price = 2499;
	LINO_PERROS.price = 1398;
	Diana_Korr.price = 599;
	Ray_Ban.price = 11590;
	IDEE.price = 1785;
	Mtv.price = 495;
	Presto.price = 254;
	Classmate.price = 75;
	apsara.price = 99;
	parker.price = 213;
	luxar.price = 114;
	youva.price = 162;
	
	printf("Welcome! to the PACIFIC Online Store (One stop for all needs)\n");
	printf("\nPlease Select your Category in order to proceed :-\n");
	int N;
	printf("\nPlease select '1' for Electronics and Appliances\n");
	printf("Please select '2' for Stationary\n");
	printf("Please select '3' for SuitCases and Bagpacks\n");
	printf("Please select '4' for Clothing and Accessories\n");
	printf("Please select '5' for Home Essentials\n");
	scanf("%d",&N);
	
	for(int i=1;N<1 || N>5;++i)
	{
		if(i==2)
		{
			printf("Sorry! This Session has been Terminated\n");
			return 0;
		}
		printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
		scanf("%d",&N);
	}
	switch(N)
	{
		case 1:
			{
				int E;
				printf("Please select '1' for Laptops\n");
				printf("Please select '2' for Mobiles\n");
				printf("Please select '3' for Speakers and HeadPhones\n");
				printf("Please select '4' for Computer Appliances\n");
				printf("Please select '5' for Electronic Appliances (Fans)\n");
				printf("Please select '6' for Electronic Appliances (TV)\n");
				printf("Please select '7' for Electronic Appliances (Fridge)\n");
				printf("Please select '8' for Electronic Appliances (Washing Machine)\n");
				printf("Please select '9' for Electronic Appliances (AC)\n");
				printf("Please select '10' for Electronic Appliances (Trimmer)\n");
				scanf("%d",&E);
				
				for(int i=1;E<1 || E>10;++i)
				{
				if(i==2)
				   {
				     printf("Sorry! This Session has been Terminated\n");
				     break;
				   }
				printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				scanf("%d",&E);
			    }
			    switch(E)
			    {
			    	case 1:
			    		{
							printf("%s\n",DELL.Name);
							printf("Model = %s\n",DELL.Model);
							printf("Type = %s\n",DELL.Type);
							printf("Specifications:- %s\n",DELL.specifications);
							printf("Colour = %s\n",DELL.colour);
							printf("Size = %s\n",DELL.size);
							printf("Price = %d\n",DELL.price);
							printf("  ************  \n");
							
							printf("%s\n",DELL_VOSTRO.Name);
							printf("Model = %s\n",DELL_VOSTRO.Model);
							printf("Type = %s\n",DELL_VOSTRO.Type);
							printf("Specifications = %s\n",DELL_VOSTRO.specifications);
							printf("Colour = %s\n",DELL_VOSTRO.colour);
							printf("Size = %s\n",DELL_VOSTRO.size);
							printf("Price = %d\n",DELL_VOSTRO.price);
							printf("  ************  \n");
							
						    printf("%s\n",Lenovo.Name);
							printf("Model = %s\n",Lenovo.Model);
							printf("Type = %s\n",Lenovo.Type);
							printf("Specifications = %s\n",Lenovo.specifications);
							printf("Colour = %s\n",Lenovo.colour);
							printf("Size = %s\n",Lenovo.size);
							printf("Price = %d\n",Lenovo.price);
							printf("  ************  \n");
							
							printf("%s\n",Lenovo_IdeaPad.Name);
							printf("Model = %s\n",Lenovo_IdeaPad.Model);
							printf("Type = %s\n",Lenovo_IdeaPad.Type);
							printf("Specifications = %s\n",Lenovo_IdeaPad.specifications);
							printf("Colour = %s\n",Lenovo_IdeaPad.colour);
							printf("Size = %s\n",Lenovo_IdeaPad.size);
							printf("Price = %d\n",Lenovo_IdeaPad.price);
							printf("  ************  \n");
							
							printf("%s\n",hp.Name);
							printf("Model = %s\n",hp.Model);
							printf("Type = %s\n",hp.Type);
							printf("Specifications = %s\n",hp.specifications);
							printf("Colour = %s\n",hp.colour);
							printf("Size = %s\n",hp.size);
							printf("Price = %d\n",hp.price);
							printf("  ************  \n");
							
							printf("%s\n",hp_Chromebook.Name);
							printf("Model = %s\n",hp_Chromebook.Model);
							printf("Type = %s\n",hp_Chromebook.Type);
							printf("Specifications = %s\n",hp_Chromebook.specifications);
							printf("Colour = %s\n",hp_Chromebook.colour);
							printf("Size = %s\n",hp_Chromebook.size);
							printf("Price = %d\n",hp_Chromebook.price);
							printf("  ************  \n");
							
							printf("%s\n",Apple_Laptop.Name);
							printf("Model = %s\n",Apple_Laptop.Model);
							printf("Type = %s\n",Apple_Laptop.Type);
							printf("Specifications = %s\n",Apple_Laptop.specifications);
							printf("Colour = %s\n",Apple_Laptop.colour);
							printf("Size = %s\n",Apple_Laptop.size);
							printf("Price = %d\n",Apple_Laptop.price);
							printf("  ************  \n");
							
							printf("%s\n",acer.Name);
							printf("Model = %s\n",acer.Model);
							printf("Type = %s\n",acer.Type);
							printf("Specifications = %s\n",acer.specifications);
							printf("Colour = %s\n",acer.colour);
							printf("Size = %s\n",acer.size);
							printf("Price = %d\n",acer.price);
							printf("  ************  \n");
							
							printf("%s\n",acer_Nitro.Name);
							printf("Model = %s\n",acer_Nitro.Model);
							printf("Type = %s\n",acer_Nitro.Type);
							printf("Specifications = %s\n",acer_Nitro.specifications);
							printf("Colour = %s\n",acer_Nitro.colour);
							printf("Size = %s\n",acer_Nitro.size);
							printf("Price = %d\n",acer_Nitro.price);
							printf("  ************  \n");
							
							printf("%s\n",ASUS.Name);
							printf("Model = %s\n",ASUS.Model);
							printf("Type = %s\n",ASUS.Type);
							printf("Specifications = %s\n",ASUS.specifications);
							printf("Colour = %s\n",ASUS.colour);
							printf("Size = %s\n",ASUS.size);
							printf("Price = %d\n",ASUS.price);
							printf("  ************  \n");
							
							printf("%s\n",MI_NoteBook.Name);
							printf("Model = %s\n",MI_NoteBook.Model);
							printf("Type = %s\n",MI_NoteBook.Type);
							printf("Specifications = %s\n",MI_NoteBook.specifications);
							printf("Colour = %s\n",MI_NoteBook.colour);
							printf("Size = %s\n",MI_NoteBook.size);
							printf("Price = %d\n",MI_NoteBook.price);
							printf("  ************  \n");
							
							printf("%s\n",Microsoft.Name);
							printf("Model = %s\n",Microsoft.Model);
							printf("Type = %s\n",Microsoft.Type);
							printf("Specifications = %s\n",Microsoft.specifications);
							printf("Colour = %s\n",Microsoft.colour);
							printf("Size = %s\n",Microsoft.size);
							printf("Price = %d\n",Microsoft.price);
							printf("  ************  \n");
							
							printf("%s\n",Microsoft_Surface.Name);
							printf("Model = %s\n",Microsoft_Surface.Model);
							printf("Type = %s\n",Microsoft_Surface.Type);
							printf("Specifications = %s\n",Microsoft_Surface.specifications);
							printf("Colour = %s\n",Microsoft_Surface.colour);
							printf("Size = %s\n",Microsoft_Surface.size);
							printf("Price = %d\n",Microsoft_Surface.price);
							printf("  ************  \n");
							int L;
							printf("Select '1' for purchasing DELL Inspiron 5502\n");
							printf("Select '2' for purchasing DELL Vostro 3400\n");
							printf("Select '3' for purchasing Lenovo ThinkPad E15\n");
							printf("Select '4' for purchasing Lenovo IdeaPad slim 5\n");
							printf("Select '5' for purchasing hp Pavilion Gaming Laptop\n");
							printf("Select '6' for purchasing hp ChromeBook 14\n");
							printf("Select '7' for purchasing Apple MacBook pro\n");
							printf("Select '8' for purchasing Acer Aspire 5\n");
							printf("Select '9' for purchasing Acer Nitro 5\n");
							printf("Select '10' for purchasing ASUS ZenBook Duo\n");
							printf("Select '11' for purchasing MI NoteBook 14\n");
							printf("Select '12' for purchasing Microsoft Surface 3\n");
							printf("Select '13' for purchasing Microsoft Surface Pro 7\n");
							scanf("%d",&L);
							
							for(int i=1;L<1 || L>13;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&L);
			                }
			                switch(L)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing DELL Inspiron 5502\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing DELL Vostro 3400\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Lenovo ThinkPad E15\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing Lenovo IdeaPad Slim 5\n");
										break;
									}
								case 5:
									{
										printf("Thank you for Purchasing hp Pavilion Gaming Laptop\n");
										break;
									}
								case 6:
									{
										printf("Thank you for Purchasing hp ChromeBook 14\n");
										break;
									}
								case 7:
									{
										printf("Thank you for Purchasing Apple MacBook Pro\n");
										break;
									}
								case 8:
									{
										printf("Thank you for Purchasing Acer Aspire 5\n");
										break;
									}
								case 9:
									{
										printf("Thank you for Purchasing Acer Nitro 5\n");
										break;
									}
								case 10:
									{
										printf("Thank you for Purchasing ASUS ZenBook Duo\n");
										break;
									}
								case 11:
									{
										printf("Thank you for Purchasing MI NoteBook 14\n");
										break;
									}
								case 12:
									{
										printf("Thank you for Purchasing Microsoft Surface 3\n");
										break;
									}
								case 13:
									{
										printf("Thank you for Purchasing Microsoft Surface Pro 7\n");
										break;
									}
							}break;
						}
					case 2:
						{
							printf("%s\n",OnePlus.Name);
							printf("Model = %s\n",OnePlus.Model);
							printf("Type = %s\n",OnePlus.Type);
							printf("Specifications = %s\n",OnePlus.specifications);
							printf("Colour = %s\n",OnePlus.colour);
							printf("Size = %s\n",OnePlus.size);
							printf("Price = %d\n",OnePlus.price);
							printf("  ************  \n");
							
							printf("%s\n",Oneplus_Nord.Name);
							printf("Model = %s\n",Oneplus_Nord.Model);
							printf("Type = %s\n",Oneplus_Nord.Type);
							printf("Specifications = %s\n",Oneplus_Nord.specifications);
							printf("Colour = %s\n",Oneplus_Nord.colour);
							printf("Size = %s\n",Oneplus_Nord.size);
							printf("Price = %d\n",Oneplus_Nord.price);
							printf("  ************  \n");
							
							printf("%s\n",NOKIA.Name);
							printf("Model = %s\n",NOKIA.Model);
							printf("Type = %s\n",NOKIA.Type);
							printf("Specifications = %s\n",NOKIA.specifications);
							printf("Colour = %s\n",NOKIA.colour);
							printf("Size = %s\n",NOKIA.size);
							printf("Price = %d\n",NOKIA.price);
							printf("  ************  \n");
							
							printf("%s\n",Apple.Name);
							printf("Model = %s\n",Apple.Model);
							printf("Type = %s\n",Apple.Type);
							printf("Specifications = %s\n",Apple.specifications);
							printf("Colour = %s\n",Apple.colour);
							printf("Size = %s\n",Apple.size);
							printf("Price = %d\n",Apple.price);
							printf("  ************  \n");
							
                            printf("%s\n",Apple_Ipad.Name);
							printf("Model = %s\n",Apple_Ipad.Model);
							printf("Type = %s\n",Apple_Ipad.Type);
							printf("Specifications = %s\n",Apple_Ipad.specifications);
							printf("Colour = %s\n",Apple_Ipad.colour);
							printf("Size = %s\n",Apple_Ipad.size);
							printf("Price = %d\n",Apple_Ipad.price);
							printf("  ************  \n");
							
                            printf("%s\n",Samsung.Name);
							printf("Model = %s\n",Samsung.Model);
							printf("Type = %s\n",Samsung.Type);
							printf("Specifications = %s\n",Samsung.specifications);
							printf("Colour = %s\n",Samsung.colour);
							printf("Size = %s\n",Samsung.size);
							printf("Price = %d\n",Samsung.price);
							printf("  ************  \n");
							
							printf("%s\n",Xiaomi.Name);
							printf("Model = %s\n",Xiaomi.Model);
							printf("Type = %s\n",Xiaomi.Type);
							printf("Specifications = %s\n",Xiaomi.specifications);
							printf("Colour = %s\n",Xiaomi.colour);
							printf("Size = %s\n",Xiaomi.size);
							printf("Price = %d\n",Xiaomi.price);
							printf("  ************  \n");
							
							printf("%s\n",Moto.Name);
							printf("Model = %s\n",Moto.Model);
							printf("Type = %s\n",Moto.Type);
							printf("Specifications = %s\n",Moto.specifications);
							printf("Colour = %s\n",Moto.colour);
							printf("Size = %s\n",Moto.size);
							printf("Price = %d\n",Moto.price);
							printf("  ************  \n");
							
							printf("%s\n",Vivo.Name);
							printf("Model = %s\n",Vivo.Model);
							printf("Type = %s\n",Vivo.Type);
							printf("Specifications = %s\n",Vivo.specifications);
							printf("Colour = %s\n",Vivo.colour);
							printf("Size = %s\n",Vivo.size);
							printf("Price = %d\n",Vivo.price);
							printf("  ************  \n");
							
							printf("%s\n",OPPO.Name);
							printf("Model = %s\n",OPPO.Model);
							printf("Type = %s\n",OPPO.Type);
							printf("Specifications = %s\n",OPPO.specifications);
							printf("Colour = %s\n",OPPO.colour);
							printf("Size = %s\n",OPPO.size);
							printf("Price = %d\n",OPPO.price);
							printf("  ************  \n");
							
							printf("%s\n",Honor.Name);
							printf("Model = %s\n",Honor.Model);
							printf("Type = %s\n",Honor.Type);
							printf("Specifications = %s\n",Honor.specifications);
							printf("Colour = %s\n",Honor.colour);
							printf("Size = %s\n",Honor.size);
							printf("Price = %d\n",Honor.price);
							printf("  ************  \n");
							
							printf("%s\n",Google.Name);
							printf("Model = %s\n",Google.Model);
							printf("Type = %s\n",Google.Type);
							printf("Specifications = %s\n",Google.specifications);
							printf("Colour = %s\n",Google.colour);
							printf("Size = %s\n",Google.size);
							printf("Price = %d\n",Google.price);
							printf("  ************  \n");
							int M;
							printf("Select '1' for purchasing OnePlus 8 Pro\n");
                            printf("Select '2' for purchasing Oneplus Nord \n");
                            printf("Select '3' for purchasing NOKIA C3\n");
                            printf("Select '4' for purchasing Apple Iphone 11 Pro\n");
                            printf("Select '5' for purchasing Apple Ipad Pro\n");
                            printf("Select '6' for purchasing Samsung Galaxy M51\n");
                            printf("Select '7' for purchasing MI 10\n");
                            printf("Select '8' for purchasing MOTO G\n");
                            printf("Select '9' for purchasing Vivo V20\n");
                            printf("Select '10' for purchasing OPPO F17\n");
                            printf("Select '11' for purchasing Honor 9X\n");
                            printf("Select '12' for purchasing Google Pixel 5\n");
                            scanf("%d",&M);
                            
                            for(int i=1;M<1 || M>12;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&M);
			                }
			                switch(M)
			                {
			                	case 1:
			                		{
			                		   printf("Thank you for Purchasing OnePlus 8 Pro\n");
									   break;	
									}
								case 2:
									{
										printf("Thank you for Purchasing OnePlus Nord\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Nokia C3\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing Apple Iphone 11 Pro\n");
										break;
									}
								case 5:
									{
										printf("Thank you for Purchasing Apple Ipad Pro\n");
										break;
									}
								case 6:
									{
										printf("Thank you for Purchasing Samsung Galaxy M51\n");
										break;
									}
								case 7:
									{
										printf("Thank you for Purchasing MI 10\n");
										break;
									}
								case 8:
									{
										printf("Thank you for Purchasing MOTO G\n");
										break;
									}
								case 9:
									{
										printf("Thank you for Purchasing VIVO V20\n");
										break;
									}
								case 10:
									{
										printf("Thank you for Purchasing OPPO F17\n");
										break;
									}
								case 11:
									{
										printf("Thank you for Purchasing Honor 9X Pro\n");
										break;
									}
								case 12:
									{
										printf("Thank you for Purchasing Google Pixel 5\n");
										break;
									}
							}break;
						}
					case 3:
						{
							printf("%s\n",Apple_Airpods.Name);
							printf("Model = %s\n",Apple_Airpods.Model);
							printf("Type = %s\n",Apple_Airpods.Type);
							printf("Specifications = %s\n",Apple_Airpods.specifications);
							printf("Colour = %s\n",Apple_Airpods.colour);
							printf("Size = %s\n",Apple_Airpods.size);
							printf("Price = %d\n",Apple_Airpods.price);
							printf("  ************  \n");
							
							printf("%s\n",Samsung_Earphones.Name);
							printf("Model = %s\n",Samsung_Earphones.Model);
							printf("Type = %s\n",Samsung_Earphones.Type);
							printf("Specifications = %s\n",Samsung_Earphones.specifications);
							printf("Colour = %s\n",Samsung_Earphones.colour);
							printf("Size = %s\n",Samsung_Earphones.size);
							printf("Price = %d\n",Samsung_Earphones.price);
							printf("  ************  \n");
							
							printf("%s\n",JBL.Name);
							printf("Model = %s\n",JBL.Model);
							printf("Type = %s\n",JBL.Type);
							printf("Specifications = %s\n",JBL.specifications);
							printf("Colour = %s\n",JBL.colour);
							printf("Size = %s\n",JBL.size);
							printf("Price = %d\n",JBL.price);
							printf("  ************  \n");
							
							printf("%s\n",boAt.Name);
							printf("Model = %s\n",boAt.Model);
							printf("Type = %s\n",boAt.Type);
							printf("Specifications = %s\n",boAt.specifications);
							printf("Colour = %s\n",boAt.colour);
							printf("Size = %s\n",boAt.size);
							printf("Price = %d\n",boAt.price);
							printf("  ************  \n");
							
							printf("%s\n",Marshall.Name);
							printf("Model = %s\n",Marshall.Model);
							printf("Type = %s\n",Marshall.Type);
							printf("Specifications = %s\n",Marshall.specifications);
							printf("Colour = %s\n",Marshall.colour);
							printf("Size = %s\n",Marshall.size);
							printf("Price = %d\n",Marshall.price);
							printf("  ************  \n");
							
							printf("%s\n",Philips.Name);
							printf("Model = %s\n",Philips.Model);
							printf("Type = %s\n",Philips.Type);
							printf("Specifications = %s\n",Philips.specifications);
							printf("Colour = %s\n",Philips.colour);
							printf("Size = %s\n",Philips.size);
							printf("Price = %d\n",Philips.price);
							printf("  ************  \n");
							
							printf("%s\n",Mivi.Name);
							printf("Model = %s\n",Mivi.Model);
							printf("Type = %s\n",Mivi.Type);
							printf("Specifications = %s\n",Mivi.specifications);
							printf("Colour = %s\n",Mivi.colour);
							printf("Size = %s\n",Mivi.size);
							printf("Price = %d\n",Mivi.price);
							printf("  ************  \n");
							int S;
							printf("Select '1' for purchasing Apple AirPods Pro\n");
							printf("Select '2' for purchasing Samsung Galaxy Buds Live\n");
							printf("Select '3' for purchasing JBL Flip3 Speaker\n");
							printf("Select '4' for purchasing boAt Rockerz 225 HeadPhones\n");
							printf("Select '5' for purchasing Marshall MajorIII HeadPhones\n");
							printf("Select '6' for purchasing Philips Party Speaker\n");
							printf("Select '7' for purchasing Mivi MoonStone Speaker\n");
							scanf("%d",&S);
							
							for(int i=1;S<1 || S>7;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&S);
			                }
			                switch(S)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Apple AirPods Pro\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Samsung Galaxy Buds Live\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing JBL Flip3 Speakers\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing boAt Rockerz 225 Speakers\n");
										break;
									}
								case 5:
									{
										printf("Thank you for Purchasing Marshall MajorIII HeadPhones\n");
										break;
									}
								case 6:
									{
										printf("Thank you for Purchasing Philips Party Speakers\n");
										break;
									}
								case 7:
									{
										printf("Thank you for Purchasing Mivi MoonStone Speaker\n");
										break;
									}
							}break;
						}
					case 4:
						{
							printf("%s\n",DELL_Mouse.Name);
							printf("Model = %s\n",DELL_Mouse.Model);
							printf("Type = %s\n",DELL_Mouse.Type);
							printf("Specifications = %s\n",DELL_Mouse.specifications);
							printf("Colour = %s\n",DELL_Mouse.colour);
							printf("Size = %s\n",DELL_Mouse.size);
							printf("Price = %d\n",DELL_Mouse.price);
							printf("  ************  \n");
							
							printf("%s\n",ASUS_Mouse.Name);
							printf("Model = %s\n",ASUS_Mouse.Model);
							printf("Type = %s\n",ASUS_Mouse.Type);
							printf("Specifications = %s\n",ASUS_Mouse.specifications);
							printf("Colour = %s\n",ASUS_Mouse.colour);
							printf("Size = %s\n",ASUS_Mouse.size);
							printf("Price = %d\n",ASUS_Mouse.price);
							printf("  ************  \n");
							
							printf("%s\n",ZEBRONICS.Name);
							printf("Model = %s\n",ZEBRONICS.Model);
							printf("Type = %s\n",ZEBRONICS.Type);
							printf("Specifications = %s\n",ZEBRONICS.specifications);
							printf("Colour = %s\n",ZEBRONICS.colour);
							printf("Size = %s\n",ZEBRONICS.size);
							printf("Price = %d\n",ZEBRONICS.price);
							printf("  ************  \n");
							
							printf("%s\n",Ryzen.Name);
							printf("Model = %s\n",Ryzen.Model);
							printf("Type = %s\n",Ryzen.Type);
							printf("Specifications = %s\n",Ryzen.specifications);
							printf("Colour = %s\n",Ryzen.colour);
							printf("Size = %s\n",Ryzen.size);
							printf("Price = %d\n",Ryzen.price);
							printf("  ************  \n");
							int A;
							printf("Select '1' for purchasing DELL Mouse\n");
							printf("Select '2' for purchasing ASUS ROG PUGIO Mouse\n");
							printf("Select '3' for purchasing Zebronics Zeb-Max Pro KeyBoard\n");
							printf("Select '4' for purchasing AMD Ryzen 5 3500X Processor\n");
							scanf("%d",&A);
							
							for(int i=1;A<1 || A>4;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&A);
			                }
			                switch(A)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing DELL Mouse\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing ASUS ROG PUGIO Mouse\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Zebronics Zeb-Max Pro KeyBoard\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing AMD Ryzen 5 3500X Processor\n");
										break;
									}
							}break;
						}
				    case 5:
				    	{
				    		printf("%s\n",USHA.Name);
							printf("Model = %s\n",USHA.Model);
							printf("Type = %s\n",USHA.Type);
							printf("Specifications = %s\n",USHA.specifications);
							printf("Colour = %s\n",USHA.colour);
							printf("Size = %s\n",USHA.size);
							printf("Price = %d\n",USHA.price);
							printf("  ************  \n");
							
							printf("%s\n",Orient.Name);
							printf("Model = %s\n",Orient.Model);
							printf("Type = %s\n",Orient.Type);
							printf("Specifications = %s\n",Orient.specifications);
							printf("Colour = %s\n",Orient.colour);
							printf("Size = %s\n",Orient.size);
							printf("Price = %d\n",Orient.price);
							printf("  ************  \n");
							
							printf("%s\n",Crompton.Name);
							printf("Model = %s\n",Crompton.Model);
							printf("Type = %s\n",Crompton.Type);
							printf("Specifications = %s\n",Crompton.specifications);
							printf("Colour = %s\n",Crompton.colour);
							printf("Size = %s\n",Crompton.size);
							printf("Price = %d\n",Crompton.price);
							printf("  ************  \n");
							int C;
							printf("Select '1' for purchasing USHA Striker Galaxy Fan\n");
							printf("Select '2' for purchasing Orient Electric Table-27 Fan\n");
							printf("Select '3' for purchasing Crompton Sea Wind Fan\n");
							scanf("%d",&C);
							
							for(int i=1;C<1 || C>3;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&C);
			                }
			                switch(C)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing USHA Striker Galaxy Fan\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Orient Electric Table-27 Fan\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Crompton Sea Wind Fan\n");
										break;
									}
							}break;
						}		
				   case 6:
						{
							printf("%s\n",Panasonic_TV.Name);
							printf("Model = %s\n",Panasonic_TV.Model);
							printf("Type = %s\n",Panasonic_TV.Type);
							printf("Specifications = %s\n",Panasonic_TV.specifications);
							printf("Colour = %s\n",Panasonic_TV.colour);
							printf("Size = %s\n",Panasonic_TV.size);
							printf("Price = %d\n",Panasonic_TV.price);
							printf("  ************  \n");
							
							printf("%s\n",Oneplus_TV.Name);
							printf("Model = %s\n",Oneplus_TV.Model);
							printf("Type = %s\n",Oneplus_TV.Type);
							printf("Specifications = %s\n",Oneplus_TV.specifications);
							printf("Colour = %s\n",Oneplus_TV.colour);
							printf("Size = %s\n",Oneplus_TV.size);
							printf("Price = %d\n",Oneplus_TV.price);
							printf("  ************  \n");
							
							printf("%s\n",LG_TV.Name);
							printf("Model = %s\n",LG_TV.Model);
							printf("Type = %s\n",LG_TV.Type);
							printf("Specifications = %s\n",LG_TV.specifications);
							printf("Colour = %s\n",LG_TV.colour);
							printf("Size = %s\n",LG_TV.size);
							printf("Price = %d\n",LG_TV.price);
							printf("  ************  \n");
							
							printf("%s\n",Toshiba.Name);
							printf("Model = %s\n",Toshiba.Model);
							printf("Type = %s\n",Toshiba.Type);
							printf("Specifications = %s\n",Toshiba.specifications);
							printf("Colour = %s\n",Toshiba.colour);
							printf("Size = %s\n",Toshiba.size);
							printf("Price = %d\n",Toshiba.price);
							printf("  ************  \n");
							int V;
							printf("Select '1' for purchasing Panasonic TV\n");
							printf("Select '2' for purchasing OnePlus TV\n");
							printf("Select '3' for purchasing LG TV\n");
							printf("Select '4' for purchasing Toshiba TV\n");
							scanf("%d",&V);
							
							for(int i=1;V<1 || V>4;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&V);
			                }
			                switch(V)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Panasonic TV\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing OnePlus TV\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing LG TV\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing Toshiba TV\n");
										break;
									}
							}break;
						}
		            case 7:
		        	    {
		        	    	printf("%s\n",Panasonic_Fridge.Name);
							printf("Model = %s\n",Panasonic_Fridge.Model);
							printf("Type = %s\n",Panasonic_Fridge.Type);
							printf("Specifications = %s\n",Panasonic_Fridge.specifications);
							printf("Colour = %s\n",Panasonic_Fridge.colour);
							printf("Size = %s\n",Panasonic_Fridge.size);
							printf("Price = %d\n",Panasonic_Fridge.price);
							printf("  ************  \n");
							
							printf("%s\n",Samsung_Fridge.Name);
							printf("Model = %s\n",Samsung_Fridge.Model);
							printf("Type = %s\n",Samsung_Fridge.Type);
							printf("Specifications = %s\n",Samsung_Fridge.specifications);
							printf("Colour = %s\n",Samsung_Fridge.colour);
							printf("Size = %s\n",Samsung_Fridge.size);
							printf("Price = %d\n",Samsung_Fridge.price);
							printf("  ************  \n");
							
							printf("%s\n",LG_Fridge.Name);
							printf("Model = %s\n",LG_Fridge.Model);
							printf("Type = %s\n",LG_Fridge.Type);
							printf("Specifications = %s\n",LG_Fridge.specifications);
							printf("Colour = %s\n",LG_Fridge.colour);
							printf("Size = %s\n",LG_Fridge.size);
							printf("Price = %d\n",LG_Fridge.price);
							printf("  ************  \n");
							
							printf("%s\n",Godrej.Name);
							printf("Model = %s\n",Godrej.Model);
							printf("Type = %s\n",Godrej.Type);
							printf("Specifications = %s\n",Godrej.specifications);
							printf("Colour = %s\n",Godrej.colour);
							printf("Size = %s\n",Godrej.size);
							printf("Price = %d\n",Godrej.price);
							printf("  ************  \n");
							
							printf("%s\n",Whirpool.Name);
							printf("Model = %s\n",Whirpool.Model);
							printf("Type = %s\n",Whirpool.Type);
							printf("Specifications = %s\n",Whirpool.specifications);
							printf("Colour = %s\n",Whirpool.colour);
							printf("Size = %s\n",Whirpool.size);
							printf("Price = %d\n",Whirpool.price);
							printf("  ************  \n");
							int F;
							printf("Select '1' for purchasing Panasonic Fridge\n");
							printf("Select '2' for purchasing Samsung Fridge\n");
							printf("Select '3' for purchasing LG Fridge\n");
							printf("Select '4' for purchasing Godrej Fridge\n");
							printf("Select '5' for purchasing Whirpool Fridge\n");
							scanf("%d",&F);
							
							for(int i=1;F<1 || F>5;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&F);
			                }
			                switch(F)
			                {
							    case 1:
			                	    {
			                		   printf("Thank you for Purchasing Panasonic Fridge\n");
			                		   break;
								    }
							    case 2:
								    {
									   printf("Thank you for Purchasing Samsung_Fridge\n");
									   break;
								    }
							    case 3:
								    {
									   printf("Thank you for Purchasing LG_Fridge\n");
									   break;
								    }
							    case 4:
								    {
									   printf("Thank you for Purchasing Godrej Fridge\n");
									   break;
								    }
							    case 5:
								    {
									   printf("Thank you for Purchasing Whirpool Fridge\n");
									   break;
								    }
							}
							  
		        		}break;
			        case 8:
				        {
				            printf("%s\n",Whirpool_WashingMachine.Name);
							printf("Model = %s\n",Whirpool_WashingMachine.Model);
							printf("Type = %s\n",Whirpool_WashingMachine.Type);
							printf("Specifications = %s\n",Whirpool_WashingMachine.specifications);
							printf("Colour = %s\n",Whirpool_WashingMachine.colour);
							printf("Size = %s\n",Whirpool_WashingMachine.size);
							printf("Price = %d\n",Whirpool_WashingMachine.price);
							printf("  ************  \n");
							
							printf("%s\n",LG.Name);
							printf("Model = %s\n",LG.Model);
							printf("Type = %s\n",LG.Type);
							printf("Specifications = %s\n",LG.specifications);
							printf("Colour = %s\n",LG.colour);
							printf("Size = %s\n",LG.size);
							printf("Price = %d\n",LG.price);
							printf("  ************  \n");
							
							printf("%s\n",IFB.Name);
							printf("Model = %s\n",IFB.Model);
							printf("Type = %s\n",IFB.Type);
							printf("Specifications = %s\n",IFB.specifications);
							printf("Colour = %s\n",IFB.colour);
							printf("Size = %s\n",IFB.size);
							printf("Price = %d\n",IFB.price);
							printf("  ************  \n");
							
							printf("%s\n",BOSCH.Name);
							printf("Model = %s\n",BOSCH.Model);
							printf("Type = %s\n",BOSCH.Type);
							printf("Specifications = %s\n",BOSCH.specifications);
							printf("Colour = %s\n",BOSCH.colour);
							printf("Size = %s\n",BOSCH.size);
							printf("Price = %d\n",BOSCH.price);
							printf("  ************  \n");
							int G;
							printf("Select '1' for purchasing Whirpool Washing Machine\n");
							printf("Select '2' for purchasing LG Washing Machine\n");
							printf("Select '3' for purchasing IFB Washing Machine\n");
							printf("Select '4' for purchasing BOSCH Washing Machine\n");
							scanf("%d",&G);
							
							for(int i=1;G<1 || G>4;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&G);
			                }
			                switch(G)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Whirpool Washing Machine\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing LG Washing Machine\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing IFB Washing Machine\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing BOSCH Washing Machine\n");
										break;
									}
							}break;
						} 
			        case 9:
					    {
						    printf("%s\n",VOLTAS.Name);
							printf("Model = %s\n",VOLTAS.Model);
							printf("Type = %s\n",VOLTAS.Type);
							printf("Specifications = %s\n",VOLTAS.specifications);
							printf("Colour = %s\n",VOLTAS.colour);
							printf("Size = %s\n",VOLTAS.size);
							printf("Price = %d\n",VOLTAS.price);
							printf("  ************  \n");
							
							printf("%s\n",DAIKIN.Name);
							printf("Model = %s\n",DAIKIN.Model);
							printf("Type = %s\n",DAIKIN.Type);
							printf("Specifications = %s\n",DAIKIN.specifications);
							printf("Colour = %s\n",DAIKIN.colour);
							printf("Size = %s\n",DAIKIN.size);
							printf("Price = %d\n",DAIKIN.price);
							printf("  ************  \n");
							
							printf("%s\n",BLUE_STAR.Name);
							printf("Model = %s\n",BLUE_STAR.Model);
							printf("Type = %s\n",BLUE_STAR.Type);
							printf("Specifications = %s\n",BLUE_STAR.specifications);
							printf("Colour = %s\n",BLUE_STAR.colour);
							printf("Size = %s\n",BLUE_STAR.size);
							printf("Price = %d\n",BLUE_STAR.price);
							printf("  ************  \n");
							int Q;
							printf("Select '1' for purchasing VOLTAS AC\n");
							printf("Select '2' for purchasing DAIKIN AC\n");
							printf("Select '3' for purchasing BLUE STAR AC\n");
							scanf("%d",&Q);
							
							for(int i=1;Q<1 || Q>3;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&Q);
			                }
							switch(Q)
							{
								case 1:
									{
										printf("Thank you for Purchasing VOLTAS AC\n");
										break;
									}
								case 2:
									{
										printf("Thank you for Purchasing DAIKIN AC\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing BLUE STAR AC\n");
										break;
									}
							}	
						}break;
			        case 10:
			        	{
			        		printf("%s\n",Philips_Trimmer.Name);
							printf("Model = %s\n",Philips_Trimmer.Model);
							printf("Type = %s\n",Philips_Trimmer.Type);
							printf("Specifications = %s\n",Philips_Trimmer.specifications);
							printf("Colour = %s\n",Philips_Trimmer.colour);
							printf("Size = %s\n",Philips_Trimmer.size);
							printf("Price = %d\n",Philips_Trimmer.price);
							printf("  ************  \n");
							
							printf("%s\n",Panasonic.Name);
							printf("Model = %s\n",Panasonic.Model);
							printf("Type = %s\n",Panasonic.Type);
							printf("Specifications = %s\n",Panasonic.specifications);
							printf("Colour = %s\n",Panasonic.colour);
							printf("Size = %s\n",Panasonic.size);
							printf("Price = %d\n",Panasonic.price);
							printf("  ************  \n");
							int T;
							printf("Select '1' for purchasing Philips Trimmer\n");
							printf("Select '2' for purchasing Panasonic Trimmer\n");
							scanf("%d",&T);
							
							for(int i=1;T<1 || T>2;++i)
				            {
				              if(i==2)
				            {
				              printf("Sorry! This Session has been Terminated\n");
				              break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&T);
			                }
			                switch(T)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Philips Trimmer\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Panasonic Trimmer\n");
										break;
									}
							}
						}break;
				}  
		    }break;
	    case 2:
	    	{
			    int X;
	    		printf("Please select '1' for Pens and Pencils\n");
	    		printf("Please select '2' for Note Books and Drawing Kit\n");
	    	    scanf("%d",&X);
	    		
	    		for(int i=1;X<1 || X>2;++i)
				{
				 if(i==2)
				{
				    printf("Sorry! This Session has been Terminated\n");
				    break;
				}
				printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				scanf("%d",&X);
			    }
				switch(X)
			    {
			        case 1:
			        	{
			        		printf("%s\n",apsara.Name);
							printf("Model = %s\n",apsara.Model);
							printf("Type = %s\n",apsara.Type);
							printf("Specifications = %s\n",apsara.specifications);
							printf("Colour = %s\n",apsara.colour);
							printf("Size and Quantity= %s\n",apsara.size);
							printf("Price = %d\n",apsara.price);
							printf("  ************  \n");
							
							printf("%s\n",parker.Name);
							printf("Model = %s\n",parker.Model);
							printf("Type = %s\n",parker.Type);
						    printf("Specifications = %s\n",parker.specifications);
							printf("Colour = %s\n",parker.colour);
							printf("Size and Quantity= %s\n",parker.size);
							printf("Price = %d\n",parker.price);
							printf("  ************  \n");
							
							printf("%s\n",Classmate_pens.Name);
							printf("Model = %s\n",Classmate_pens.Model);
							printf("Type = %s\n",Classmate_pens.Type);
							printf("Specifications = %s\n",Classmate_pens.specifications);
							printf("Colour = %s\n",Classmate_pens.colour);
							printf("Size and Quantity= %s\n",Classmate_pens.size);
							printf("Price = %d\n",Classmate_pens.price);
							printf("  ************  \n");
							
							printf("%s\n",luxar_Pen.Name);
							printf("Model = %s\n",luxar_Pen.Model);
							printf("Type = %s\n",luxar_Pen.Type);
							printf("Specifications = %s\n",luxar_Pen.specifications);
							printf("Colour = %s\n",luxar_Pen.colour);
							printf("Size and Quantity= %s\n",luxar_Pen.size);
							printf("Price = %d\n",luxar_Pen.price);
							printf("  ************  \n");
							int PEN;
							printf("Select '1' for purchasing Apsara Pencils\n");
							printf("Select '2' for purchasing Parker Pen\n");
							printf("Select '3' for purchasing Classmate Pens\n");
							printf("Select '4' for purchasing Luxar Pens\n");
							scanf("%d",&PEN);
							
							for(int i=1;PEN<1 || PEN>4;++i)
				            {
				             if(i==2)
				            {
				               printf("Sorry! This Session has been Terminated\n");
				               break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&PEN);
			                }
			                switch(PEN)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Apsara Pencils\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Parker Pen\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Classmate Pens\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing Luxar Pens\n");
										break;
									}
							}
						}break;
				    case 2:
				    	{
				    		printf("%s\n",luxar.Name);
							printf("Model = %s\n",luxar.Model);
							printf("Type = %s\n",luxar.Type);
							printf("Specifications = %s\n",luxar.specifications);
							printf("Colour = %s\n",luxar.colour);
							printf("Size and Quantity= %s\n",luxar.size);
							printf("Price = %d\n",luxar.price);
							printf("  ************  \n");
							
							printf("%s\n",youva.Name);
							printf("Model = %s\n",youva.Model);
							printf("Type = %s\n",youva.Type);
							printf("Specifications = %s\n",youva.specifications);
							printf("Colour = %s\n",youva.colour);
							printf("Size and Quantity= %s\n",youva.size);
							printf("Price = %d\n",youva.price);
							printf("  ************  \n");
							
							printf("%s\n",Classmate.Name);
							printf("Model = %s\n",Classmate.Model);
							printf("Type = %s\n",Classmate.Type);
							printf("Specifications = %s\n",Classmate.specifications);
							printf("Colour = %s\n",Classmate.colour);
							printf("Size and Quantity= %s\n",Classmate.size);
							printf("Price = %d\n",Classmate.price);
							printf("  ************  \n");
							
							printf("%s\n",FaberCastle.Name);
							printf("Model = %s\n",FaberCastle.Model);
							printf("Type = %s\n",FaberCastle.Type);
							printf("Specifications = %s\n",FaberCastle.specifications);
							printf("Colour = %s\n",FaberCastle.colour);
							printf("Size and Quantity= %s\n",FaberCastle.size);
							printf("Price = %d\n",FaberCastle.price);
							printf("  ************  \n");
							int KIT;
							printf("Select '1' for purchasing Luxar NoteBook\n");
							printf("Select '2' for purchasing Youva NoteBook\n");
							printf("Select '3' for purchasing Classmate NoteBook\n");
							printf("Select '4' for purchasing FaberCastle Drawing Kit\n");
							scanf("%d",&KIT);
							
							for(int i=1;KIT<1 || KIT>4;++i)
				            {
				             if(i==2)
				            {
				               printf("Sorry! This Session has been Terminated\n");
				               break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&KIT);
			                }
			                switch(KIT)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Luxar NoteBook\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Youva NoteBook\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Classmate NoteBook\n");
										break;
									}
								case 4:
									{
										printf("Thank you for Purchasing FaberCastle Drawing Kit\n");
										break;
									}
							}
						}break;
				}
			}break;
	    case 3:
	    	{
	    		int Z;
	    		printf("Please select '1' for SuitCase\n");
	    		printf("Please select '2' for Bag Packs\n");
	    		scanf("%d",&Z);
	    		
	    		for(int i=1;Z<1 || Z>2;++i)
				{
				  if(i==2)
				{
				    printf("Sorry! This Session has been Terminated\n");
				    break;
				}
				printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				scanf("%d",&Z);
			    }
			    switch(Z)
			    {
			    	case 1:
			    		{
			    			printf("%s\n",American_Tourister.Name);
							printf("Model = %s\n",American_Tourister.Model);
							printf("Type = %s\n",American_Tourister.Type);
							printf("Specifications = %s\n",American_Tourister.specifications);
							printf("Colour = %s\n",American_Tourister.colour);
							printf("Size = %s\n",American_Tourister.size);
							printf("Price = %d\n",American_Tourister.price);
							printf("  ************  \n");
							
							printf("%s\n",VIP.Name);
							printf("Model = %s\n",VIP.Model);
							printf("Type = %s\n",VIP.Type);
							printf("Specifications = %s\n",VIP.specifications);
							printf("Colour = %s\n",VIP.colour);
							printf("Size = %s\n",VIP.size);
							printf("Price = %d\n",VIP.price);
							printf("  ************  \n");
							
							printf("%s\n",Skybags.Name);
							printf("Model = %s\n",Skybags.Model);
							printf("Type = %s\n",Skybags.Type);
							printf("Specifications = %s\n",Skybags.specifications);
							printf("Colour = %s\n",Skybags.colour);
							printf("Size = %s\n",Skybags.size);
							printf("Price = %d\n",Skybags.price);
							printf("  ************  \n");
							int CAS;
							printf("Select '1' for purchasing American Tourister SuitCase\n");
							printf("Select '2' for purchasing VIP SuitCase\n");
							printf("Select '3' for purchasing Skybags SuitCase\n");
							scanf("%d",&CAS);
							
							for(int i=1;CAS<1 || CAS>3;++i)
				            {
				             if(i==2)
				            {
				               printf("Sorry! This Session has been Terminated\n");
				               break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&CAS);
			                }
			                switch(CAS)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing American Torister SuitCase\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing VIP SuitCase\n");
										break;
									}
								case 3:
									{
										printf("Thank you for Purchasing Skybags SuitCase\n");
										break;
									}
							}
						}break;
				    case 2:
				    	{
				    		printf("%s\n",Safari.Name);
							printf("Model = %s\n",Safari.Model);
							printf("Type = %s\n",Safari.Type);
							printf("Specifications = %s\n",Safari.specifications);
							printf("Colour = %s\n",Safari.colour);
							printf("Size = %s\n",Safari.size);
							printf("Price = %d\n",Safari.price);
							printf("  ************  \n");
							
							printf("%s\n",WildCraft.Name);
							printf("Model = %s\n",WildCraft.Model);
							printf("Type = %s\n",WildCraft.Type);
							printf("Specifications = %s\n",WildCraft.specifications);
							printf("Colour = %s\n",WildCraft.colour);
							printf("Size = %s\n",WildCraft.size);
							printf("Price = %d\n",WildCraft.price);
							printf("  ************  \n");
							int BAG;
							printf("Select '1' for purchasing Safari Bag Pack\n");
							printf("Select '2' for purchasing Wildcraft Bag Pack\n");
							scanf("%d",&BAG);
							
							for(int i=1;BAG<1 || BAG>2;++i)
				            {
				             if(i==2)
				            {
				               printf("Sorry! This Session has been Terminated\n");
				               break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&BAG);
			                }
			                switch(BAG)
			                {
			                	case 1:
			                		{
			                			printf("Thank you for Purchasing Safari Bag Pack\n");
			                			break;
									}
								case 2:
									{
										printf("Thank you for Purchasing Wildcraft Bag Pack\n");
										break;
									}
							}
						}break;
				}
			}break;
	    case 4:
	    	{
	    		int D;
	    		printf("Please select '1' for MEN'S Clothing and Accessories\n");
	    		printf("Please select '2' for WOMEN'S Clothing and Accessories\n");
	    		scanf("%d",&D);
	    		
	    		for(int i=1;D<1 || D>2;++i)
				{
				 if(i==2)
				{
				    printf("Sorry! This Session has been Terminated\n");
				    break;
				}
				printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				scanf("%d",&D);
			    }
			    switch(D)
			    {
			    	case 1:
			    		{
			    			int MEN;
			    			printf("Please select '1' for MEN'S Shirts\n");
			    			printf("Please select '2' for MEN'S Pants\n");
			    			printf("Please select '3' for MEN'S Watches\n");
			    			printf("Please select '4' for MEN'S SunGlasses\n");
			    			printf("Please select '5' for MEN'S FootWear\n");
			    			scanf("%d",&MEN);
			    			
			    			for(int i=1;MEN<1 || MEN>5;++i)
				            {
				               if(i==2)
				            {
				               printf("Sorry! This Session has been Terminated\n");
				               break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&MEN);
			                }
			                switch(MEN)
			                {
			                	case 1:
			                		{
			                			printf("%s\n",jockey.Name);
							            printf("Model = %s\n",jockey.Model);
							            printf("Type = %s\n",jockey.Type);
							            printf("Specifications = %s\n",jockey.specifications);
							            printf("Colour = %s\n",jockey.colour);
							            printf("Available Sizes = %s\n",jockey.size);
							            printf("Price = %d\n",jockey.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",WROGN.Name);
							            printf("Model = %s\n",WROGN.Model);
							            printf("Type = %s\n",WROGN.Type);
							            printf("Specifications = %s\n",WROGN.specifications);
							            printf("Colour = %s\n",WROGN.colour);
							            printf("Available Sizes = %s\n",WROGN.size);
							            printf("Price = %d\n",WROGN.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",UCB.Name);
							            printf("Model = %s\n",UCB.Model);
							            printf("Type = %s\n",UCB.Type);
							            printf("Specifications = %s\n",UCB.specifications);
							            printf("Colour = %s\n",UCB.colour);
							            printf("Available Sizes = %s\n",UCB.size);
							            printf("Price = %d\n",UCB.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",USPA.Name);
							            printf("Model = %s\n",USPA.Model);
							            printf("Type = %s\n",USPA.Type);
							            printf("Specifications = %s\n",USPA.specifications);
							            printf("Colour = %s\n",USPA.colour);
							            printf("Available Sizes = %s\n",USPA.size);
							            printf("Price = %d\n",USPA.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",AllenSolly.Name);
							            printf("Model = %s\n",AllenSolly.Model);
							            printf("Type = %s\n",AllenSolly.Type);
							            printf("Specifications = %s\n",AllenSolly.specifications);
							            printf("Colour = %s\n",AllenSolly.colour);
							            printf("Available Sizes = %s\n",AllenSolly.size);
							            printf("Price = %d\n",AllenSolly.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",ck.Name);
							            printf("Model = %s\n",ck.Model);
							            printf("Type = %s\n",ck.Type);
							            printf("Specifications = %s\n",ck.specifications);
							            printf("Colour = %s\n",ck.colour);
							            printf("Available Sizes = %s\n",ck.size);
							            printf("Price = %d\n",ck.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",levis.Name);
							            printf("Model = %s\n",levis.Model);
							            printf("Type = %s\n",levis.Type);
							            printf("Specifications = %s\n",levis.specifications);
							            printf("Colour = %s\n",levis.colour);
							            printf("Available Sizes = %s\n",levis.size);
							            printf("Price = %d\n",levis.price);
							            printf("  ************  \n");
							            int R;
							            printf("Select '1' for purchasing Jockey T-Shirt\n");
							            printf("Select '2' for purchasing WROGN Shirt\n");
							            printf("Select '3' for purchasing UCB Shirt\n");
							            printf("Select '4' for purchasing USPA T-Shirt\n");
							            printf("Select '5' for purchasing AllenSolly Shirt\n");
							            printf("Select '6' for purchasing CK Shirt\n");
							            printf("Select '7' for purchasing Levis Shirt\n");
							            scanf("%d",&R);
							            
							            for(int i=1;R<1 || R>7;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&R);
			                            }
			                            switch(R)
			                            {
			                            	case 1:
			                            		{
			                            			int JOC;
			                            			printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&JOC);
			                            			
			                            			for(int i=1;JOC<1 || JOC>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&JOC);
			                                        }
			                                        switch(JOC)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing Jockey S Size T-Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing Jockey M Size T-Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing Jockey L Size T-Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing Jockey XL Size T-Shirt\n");
																break;
															}
													}
												}break;
										    case 2:
										    	{
										    		int WRO;
										    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 39\n");
			                            			printf("Please select '2' for 40\n");
			                            			printf("Please select '3' for 42\n");
			                            			printf("Please select '4' for 44\n");
			                            			scanf("%d",&WRO);
			                            			
			                            			for(int i=1;WRO<1 || WRO>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&WRO);
			                                        }
			                                        switch(WRO)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  WROGN 38 Size Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  WROGN 40 Size Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  WROGN 42 Size Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  WROGN 44 Size Shirt\n");
																break;
															}
													}
												}break;
										    case 3:
										    	{
										    		int UCB;
										    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&UCB);
			                            			
			                            			for(int i=1;UCB<1 || UCB>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&UCB);
			                                        }
			                                        switch(UCB)
			                                        {
			                                            case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  UCB S Size Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  UCB M Size Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  UCB L Size Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  UCB XL Size Shirt\n");
																break;
															}
													}
												}break;
										    case 4:
										    	{
										    		int USPA;
										    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&USPA);
			                            			
			                            			for(int i=1;USPA<1 || USPA>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&USPA);
			                                        }
			                                        switch(USPA)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  USPA S Size T-Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  USPA M Size T-Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  USPA L Size T-Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  USPA XL Size T-Shirt\n");
																break;
															}
													}
												}break;
										    case 5:
										    	{
										    		int ALE;
										    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 39\n");
			                            			printf("Please select '2' for 40\n");
			                            			printf("Please select '3' for 42\n");
			                            			printf("Please select '4' for 44\n");
			                            			scanf("%d",&ALE);
			                            			
			                            			for(int i=1;ALE<1 || ALE>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&ALE);
			                                        }
			                                        switch(ALE)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing AllenSolly 39 Size Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing AllenSolly 40 Size Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing AllenSolly 42 Size Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing AllenSolly 44 Size Shirt\n");
																break;
															}
													}
												}break;
										    case 6:
										    	{
										    		int CAL;
										    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 39\n");
			                            			printf("Please select '2' for 40\n");
			                            			printf("Please select '3' for 42\n");
			                            			printf("Please select '4' for 44\n");
			                            			scanf("%d",&CAL);
			                            			
			                            			for(int i=1;CAL<1 || CAL>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&CAL);
			                                        }
			                                        switch(CAL)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing CK 39 Size Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing CK 40 Size Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing CK 42 Size Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing CK 44 Size Shirt\n");
																break;
													        }       
												    }
										        }break;
									        case 7:
									        	{
									        		int LEV;
									        		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&LEV);
			                            			
			                            			for(int i=1;LEV<1 || LEV>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&LEV);
			                                        }
			                                        switch(LEV)
			                                        {
													    case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  Levis S Size Shirt\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  Levis M Size Shirt\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  Levis L Size Shirt\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  Levis XL Size Shirt\n");
																break;
															}	
													}
												}break;
										}    
									}break;
							    case 2:
							    	{
							    		printf("%s\n",jockey_Pants.Name);
							            printf("Model = %s\n",jockey_Pants.Model);
							            printf("Type = %s\n",jockey_Pants.Type);
							            printf("Specifications = %s\n",jockey_Pants.specifications);
							            printf("Colour = %s\n",jockey_Pants.colour);
							            printf("Available Sizes = %s\n",jockey_Pants.size);
							            printf("Price = %d\n",jockey_Pants.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",WROGN_Pant.Name);
							            printf("Model = %s\n",WROGN_Pant.Model);
							            printf("Type = %s\n",WROGN_Pant.Type);
							            printf("Specifications = %s\n",WROGN_Pant.specifications);
							            printf("Colour = %s\n",WROGN_Pant.colour);
							            printf("Available Sizes = %s\n",WROGN_Pant.size);
							            printf("Price = %d\n",WROGN_Pant.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",UCB_Pant.Name);
							            printf("Model = %s\n",UCB_Pant.Model);
							            printf("Type = %s\n",UCB_Pant.Type);
							            printf("Specifications = %s\n",UCB_Pant.specifications);
							            printf("Colour = %s\n",UCB_Pant.colour);
							            printf("Available Sizes = %s\n",UCB_Pant.size);
							            printf("Price = %d\n",UCB_Pant.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",USPA_Pant.Name);
							            printf("Model = %s\n",USPA_Pant.Model);
							            printf("Type = %s\n",USPA_Pant.Type);
							            printf("Specifications = %s\n",USPA_Pant.specifications);
							            printf("Colour = %s\n",USPA_Pant.colour);
							            printf("Available Sizes = %s\n",USPA_Pant.size);
							            printf("Price = %d\n",USPA_Pant.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",AllenSolly_Pant.Name);
							            printf("Model = %s\n",AllenSolly_Pant.Model);
							            printf("Type = %s\n",AllenSolly_Pant.Type);
							            printf("Specifications = %s\n",AllenSolly_Pant.specifications);
							            printf("Colour = %s\n",AllenSolly_Pant.colour);
							            printf("Available Sizes = %s\n",AllenSolly_Pant.size);
							            printf("Price = %d\n",AllenSolly_Pant.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",ck_Pant.Name);
							            printf("Model = %s\n",ck_Pant.Model);
							            printf("Type = %s\n",ck_Pant.Type);
							            printf("Specifications = %s\n",ck_Pant.specifications);
							            printf("Colour = %s\n",ck_Pant.colour);
							            printf("Available Sizes = %s\n",ck_Pant.size);
							            printf("Price = %d\n",ck_Pant.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",Levis_Pant.Name);
							            printf("Model = %s\n",Levis_Pant.Model);
							            printf("Type = %s\n",Levis_Pant.Type);
							            printf("Specifications = %s\n",Levis_Pant.specifications);
							            printf("Colour = %s\n",Levis_Pant.colour);
							            printf("Available Sizes = %s\n",Levis_Pant.size);
							            printf("Price = %d\n",Levis_Pant.price);
							            printf("  ************  \n");
							            int P;
							            printf("Select '1' for purchasing Jockey TrackPants\n");
							            printf("Select '2' for purchasing WROGN Joggers Pant\n");
							            printf("Select '3' for purchasing UCB Pant\n");
							            printf("Select '4' for purchasing USPA Jeans Pant\n");
							            printf("Select '5' for purchasing AllenSolly Pant\n");
							            printf("Select '6' for purchasing CK TrackPants\n");
							            printf("Select '7' for purchasing Levis Jeans Pant\n");
							            scanf("%d",&P);
							            
							            for(int i=1;P<1 || P>7;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&P);
			                            }
			                            switch(P)
			                            {
			                            	case 1:
			                            		{
			                            			int JOC;
                                                    printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&JOC);
			                            			
			                            			for(int i=1;JOC<1 || JOC>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&JOC);
			                                        }
			                                        switch(JOC)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing Jockey S Size Track Pants\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing Jockey M Size Track Pants\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing Jockey L Size Track Pants\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing Jockey XL Size Track Pants\n");
																break;
															}
												    }
										        }break;
									        case 2:
									        	{
									        		int WRO;
									        		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&WRO);
			                            			
			                            			for(int i=1;WRO<1 || WRO>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&WRO);
			                                        }
			                                        switch(WRO)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  WROGN S Size Pant\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  WROGN M Size Pant\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  WROGN L Size Pant\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  WROGN XL Size Pant\n");
																break;
															}
												    }
										        }break;
							                case 3:
							                	{
							                		int UCB;
							                		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&UCB);
			                            			
			                            			for(int i=1;UCB<1 || UCB>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&UCB);
			                                        }
			                                        switch(UCB)
			                                        {
			                                            case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  UCB S Size Pant\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  UCB M Size Pant\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  UCB L Size Pant\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  UCB XL Size Pant\n");
																break;
															}
												    }
										        }break; 
						                    case 4:
						                    	{
						                    		int USPA;
						                    		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&USPA);
			                            			
			                            			for(int i=1;USPA<1 || USPA>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&USPA);
			                                        }
			                                        switch(USPA)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  USPA S Size Pant\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  USPA M Size Pant\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  USPA L Size Pant\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  USPA XL Size Pant\n");
																break;
															}
												    }
										        }break;
				                            case 5:
				                            	{
				                            		int ALE;
				                            	    printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 26\n");
			                            			printf("Please select '2' for 30\n");
			                            			printf("Please select '3' for 40\n");
			                            			printf("Please select '4' for 42\n");
			                            			scanf("%d",&ALE);
													
													for(int i=1;ALE<1 || ALE>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&ALE);
			                                        }
			                                        switch(ALE)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing AllenSolly 26 Size Pant\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing AllenSolly 30 Size Pant\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing AllenSolly 40 Size Pant\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing AllenSolly 42 Size Pant\n");
																break;
															}	
												    }
										        }break;
			                                case 6:
			                                	{
			                                		int CAL;
			                                		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for S\n");
			                            			printf("Please select '2' for M\n");
			                            			printf("Please select '3' for L\n");
			                            			printf("Please select '4' for XL\n");
			                            			scanf("%d",&CAL);
			                            			
			                            			for(int i=1;CAL<1 || CAL>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&CAL);
			                                        }
			                                        switch(CAL)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing CK S Size Track Pants\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing CK M Size Track Pants\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing CK L Size Track Pants\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing CK XL Size Track Pants\n");
																break;
													        }
												    }
										        }break;
	                                        case 7:
	                                        	{
	                                        		int LEV;
	                                        		printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 28\n");
			                            			printf("Please select '2' for 30\n");
			                            			printf("Please select '3' for 38\n");
			                            			printf("Please select '4' for 40\n");
			                            			scanf("%d",&LEV);
			                            			
			                            			for(int i=1;LEV<1 || LEV>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&LEV);
			                                        }
			                                        switch(LEV)
			                                        {
													    case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing  Levis 28 Size Pant\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing  Levis 30 Size Pant\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing  Levis 38 Size Pant\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing  Levis 40 Size Pant\n");
																break;
															}
												    }
										        }break;   
                                        }
                                    }break;
                                case 3:
                                	{
                                		printf("%s\n",Armani.Name);
							            printf("Model = %s\n",Armani.Model);
							            printf("Type = %s\n",Armani.Type);
							            printf("Specifications = %s\n",Armani.specifications);
							            printf("Colour = %s\n",Armani.colour);
							            printf("Size = %s\n",Armani.size);
							            printf("Price = %d\n",Armani.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",Titan.Name);
							            printf("Model = %s\n",Titan.Model);
							            printf("Type = %s\n",Titan.Type);
							            printf("Specifications = %s\n",Titan.specifications);
							            printf("Colour = %s\n",Titan.colour);
							            printf("Size = %s\n",Titan.size);
							            printf("Price = %d\n",Titan.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",Police.Name);
							            printf("Model = %s\n",Police.Model);
							            printf("Type = %s\n",Police.Type);
							            printf("Specifications = %s\n",Police.specifications);
							            printf("Colour = %s\n",Police.colour);
							            printf("Size = %s\n",Police.size);
							            printf("Price = %d\n",Police.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",fossil.Name);
							            printf("Model = %s\n",fossil.Model);
							            printf("Type = %s\n",fossil.Type);
							            printf("Specifications = %s\n",fossil.specifications);
							            printf("Colour = %s\n",fossil.colour);
							            printf("Size = %s\n",fossil.size);
							            printf("Price = %d\n",fossil.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",casio.Name);
							            printf("Model = %s\n",casio.Model);
							            printf("Type = %s\n",casio.Type);
							            printf("Specifications = %s\n",casio.specifications);
							            printf("Colour = %s\n",casio.colour);
							            printf("Size = %s\n",casio.size);
							            printf("Price = %d\n",casio.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",Diesel.Name);
							            printf("Model = %s\n",Diesel.Model);
							            printf("Type = %s\n",Diesel.Type);
							            printf("Specifications = %s\n",Diesel.specifications);
							            printf("Colour = %s\n",Diesel.colour);
							            printf("Size = %s\n",Diesel.size);
							            printf("Price = %d\n",Diesel.price);
							            printf("  ************  \n");
							            int W;
							            printf("Select '1' for purchasing Armani Chain Watch\n");
							            printf("Select '2' for purchasing Titan Leather Watch\n");
							            printf("Select '3' for purchasing Police Chain Watch\n");
							            printf("Select '4' for purchasing Fossil Leather Watch\n");
							            printf("Select '5' for purchasing Casio G-Shock Watch\n");
							            printf("Select '6' for purchasing Diesel Chain Watch\n");
							            scanf("%d",&W);
							            
							            for(int i=1;W<1 || W>6;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&W);
			                            }
			                            switch(W)
			                            {
			                            	case 1:
			                            		{
			                            			printf("Thank you for Purchasing Armani Chain Watch\n");
			                            			break;
												}
											case 2:
												{
													printf("Thank you for Purchasing Titan Leather Watch\n");
													break;
												}
											case 3:
												{
													printf("Thank you for Purchasing Police Chain Watch\n");
													break;
												}
											case 4:
												{
													printf("Thank you for Purchasing Fossil Leather Watch\n");
													break;
												}
											case 5:
												{
													printf("Thank you for Purchasing Casio G-Shock Watch\n");
													break;
												}
											case 6:
												{
													printf("Thank you for Purchasing Diesel Chain Watch\n");
													break;
												}
										}
									}break;
							    case 4:
							    	{
							    		printf("%s\n",Ray_Ban.Name);
							            printf("Model = %s\n",Ray_Ban.Model);
							            printf("Type = %s\n",Ray_Ban.Type);
							            printf("Specifications = %s\n",Ray_Ban.specifications);
							            printf("Colour = %s\n",Ray_Ban.colour);
							            printf("Size = %s\n",Ray_Ban.size);
							            printf("Price = %d\n",Ray_Ban.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",IDEE.Name);
							            printf("Model = %s\n",IDEE.Model);
							            printf("Type = %s\n",IDEE.Type);
							            printf("Specifications = %s\n",IDEE.specifications);
							            printf("Colour = %s\n",IDEE.colour);
							            printf("Size = %s\n",IDEE.size);
							            printf("Price = %d\n",IDEE.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",Mtv.Name);
							            printf("Model = %s\n",Mtv.Model);
							            printf("Type = %s\n",Mtv.Type);
							            printf("Specifications = %s\n",Mtv.specifications);
							            printf("Colour = %s\n",Mtv.colour);
							            printf("Size = %s\n",Mtv.size);
							            printf("Price = %d\n",Mtv.price);
							            printf("  ************  \n");
							            int U;
							            printf("Select '1' for purchasing RayBan SunGlasses\n");
							            printf("Select '2' for purchasing IDEE SunGlasses\n");
							            printf("Select '3' for purchasing Mtv Sunglasses\n");
							            scanf("%d",&U);
							            
							            for(int i=1;U<1 || U>3;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&U);
			                            }
			                            switch(U)
			                            {
			                            	case 1:
			                            		{
			                            			printf("Thank you for Purchasing RayBan SunGlasses\n");
			                            			break;
												}
											case 2:
												{
													printf("Thank you for Purchasing IDEE SunGlasses\n");
													break;
												}
											case 3:
												{
													printf("Thank you for Purchasing Mtv SunGlasses\n");
													break;
												}
										}
									}break;
							    case 5:
							    	{
							    		printf("%s\n",puma.Name);
							            printf("Model = %s\n",puma.Model);
							            printf("Type = %s\n",puma.Type);
							            printf("Specifications = %s\n",puma.specifications);
							            printf("Colour = %s\n",puma.colour);
							            printf("Available Sizes = %s\n",puma.size);
							            printf("Price = %d\n",puma.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",reebok.Name);
							            printf("Model = %s\n",reebok.Model);
							            printf("Type = %s\n",reebok.Type);
							            printf("Specifications = %s\n",reebok.specifications);
							            printf("Colour = %s\n",reebok.colour);
							            printf("Available Sizes = %s\n",reebok.size);
							            printf("Price = %d\n",reebok.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",adidas.Name);
							            printf("Model = %s\n",adidas.Model);
							            printf("Type = %s\n",adidas.Type);
							            printf("Specifications = %s\n",adidas.specifications);
							            printf("Colour = %s\n",adidas.colour);
							            printf("Available Sizes = %s\n",adidas.size);
							            printf("Price = %d\n",adidas.price);
							            printf("  ************  \n");
							            
							            printf("%s\n",nike.Name);
							            printf("Model = %s\n",nike.Model);
							            printf("Type = %s\n",nike.Type);
							            printf("Specifications = %s\n",nike.specifications);
							            printf("Colour = %s\n",nike.colour);
							            printf("Available Sizes = %s\n",nike.size);
							            printf("Price = %d\n",nike.price);
							            printf("  ************  \n");
							            int O;
							            printf("Select '1' for purchasing Puma Sneakers\n");
							            printf("Select '2' for purchasing Reebok Running Shoes\n");
							            printf("Select '3' for purchasing Adidas Running Shoes\n");
							            printf("Select '4' for purchasing Nike Sneakers\n");
							            scanf("%d",&O);
							            
							            for(int i=1;O<1 || O>4;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&O);
			                            }
			                            switch(O)
			                            {
			                            	case 1:
			                            		{
			                            			int PUM;
			                            			printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 9 US\n");
			                            			printf("Please select '2' for 10 US\n");
			                            			printf("Please select '3' for 11 US\n");
			                            			printf("Please select '4' for 12 US\n");
			                            			scanf("%d",&PUM);
			                            			
			                            			for(int i=1;PUM<1 || PUM>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&PUM);
			                                        }
			                                        switch(PUM)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 9 US size Puma Sneakers\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 10 US size Puma Sneakers\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 11 US size Puma Sneakers\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 12 US size Puma Sneakers\n");
																break;
															}
															
													}
												}break;
										    case 2:
										    	{
										    		int REE;
			                            			printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 9 US\n");
			                            			printf("Please select '2' for 10 US\n");
			                            			printf("Please select '3' for 11 US\n");
			                            			printf("Please select '4' for 12 US\n");
			                            			scanf("%d",&REE);
			                            			
			                            			for(int i=1;REE<1 || REE>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&REE);
			                                        }
			                                        switch(REE)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 9 US size Reebok Running Shoes\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 10 US size Reebok Running Shoes\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 11 US size Reebok Running Shoes\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 12 US size Reebok Running Shoes\n");
																break;
															}
													}
												}break;
										    case 3:
										    	{
										    		int ADI;
			                            			printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 9 US\n");
			                            			printf("Please select '2' for 10 US\n");
			                            			printf("Please select '3' for 11 US\n");
			                            			printf("Please select '4' for 12 US\n");
			                            			scanf("%d",&ADI);
			                            			
			                            			for(int i=1;ADI<1 || ADI>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&ADI);
			                                        }
			                                        switch(ADI)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 9 US size Adidas Running Shoes\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 10 US size Adidas Running Shoes\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 11 US size Adidas Running Shoes\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 12 US size Adidas Running Shoes\n");
																break;
															}
													}
												}break;
										    case 4:
										    	{
										    		int NIK;
			                            			printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 9 US\n");
			                            			printf("Please select '2' for 10 US\n");
			                            			printf("Please select '3' for 11 US\n");
			                            			printf("Please select '4' for 12 US\n");
			                            			scanf("%d",&NIK);
			                            			
			                            			for(int i=1;NIK<1 || NIK>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&NIK);
			                                        }
			                                        switch(NIK)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 9 US size Nike Sneakers\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 10 US size Nike Sneakers\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 11 US size Nike Sneakers\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 12 US size Nike Sneakers\n");
																break;
															}
													}
												}break;
										}
									}break;
							}
                        }break;  
                    case 2:
                    	{
                    		int WOMEN;
                    		printf("Please select '1' for WOMEN'S Dresses\n");
                    		printf("Please select '2' for WOMEN'S Jewellery\n");
                    		printf("Please select '3' for WOMEN'S Hand Bags\n");
                    		printf("Please select '4' for WOMEN'S FootWear\n");
                    		scanf("%d",&WOMEN);
                    		
                    		for(int i=1;WOMEN<1 || WOMEN>4;++i)
                    		{
                    		 if(i==2)
                    		{
                    			printf("Sorry! This Session has been Terminated\n");
				                break;
				            }
				            printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				            scanf("%d",&WOMEN);
			                }
			                switch(WOMEN)
			                {
			                	case 1:
			                		{
			                			int DRE;
			                			printf("Please select '1' for Traditional Dresses\n");
			                			printf("Please select '2' for Modern Dresses\n");
			                			scanf("%d",&DRE);
			                			
			                			for(int i=1;DRE<1 || DRE>2;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&DRE);
			                            }
			                            switch(DRE)
			                            {
			                            	case 1:
			                            		{
			                            			printf("%s\n",aurelia.Name);
			                            			printf("Model = %s\n",aurelia.Model);
                                                    printf("Type = %s\n",aurelia.Type);
                                                    printf("Specifications = %s\n",aurelia.specifications);
                                                    printf("Colour = %s\n",aurelia.colour);
                                                    printf("Available Sizes = %s\n",aurelia.size);
                                                    printf("Price = %d\n",aurelia.price);
                                                    printf("  ************  \n");
                                                    
                                                    printf("%s\n",biba.Name);
			                            			printf("Model = %s\n",biba.Model);
                                                    printf("Type = %s\n",biba.Type);
                                                    printf("Specifications = %s\n",biba.specifications);
                                                    printf("Colour = %s\n",biba.colour);
                                                    printf("Available Sizes = %s\n",biba.size);
                                                    printf("Price = %d\n",biba.price);
                                                    printf("  ************  \n");
                                                    
                                                    printf("%s\n",biba_bottom.Name);
			                            			printf("Model = %s\n",biba_bottom.Model);
                                                    printf("Type = %s\n",biba_bottom.Type);
                                                    printf("Specifications = %s\n",biba_bottom.specifications);
                                                    printf("Colour = %s\n",biba_bottom.colour);
                                                    printf("Available Sizes = %s\n",biba_bottom.size);
                                                    printf("Price = %d\n",biba_bottom.price);
                                                    printf("  ************  \n");
                                                    int TRA;
                                                    printf("Select '1' for purchasing Aurelia Kurta\n");
                                                    printf("Select '2' for purchasing BIBA Salwar Suit\n");
                                                    printf("Select '3' for purchasing BIBA Palazzo Bottom\n");
                                                    scanf("%d",&TRA);
                                                    
                                                    for(int i=1;TRA<1 || TRA>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&TRA);
			                                        }
			                                        switch(TRA)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			int AUR;
			                            			            printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&AUR);
			                            			            
			                            			            for(int i=1;AUR<1 || AUR>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&AUR);
			                                                    }
			                                                    switch(AUR)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size Aurelia Kurta\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size Aurelia Kurta\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size Aurelia Kurta\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size Aurelia Kurta\n");
																			break;
																		}
																}
															}break;
													    case 2:
													    	{
													    		int BIB;
													    		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&BIB);
			                            			            
			                            			            for(int i=1;BIB<1 || BIB>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&BIB);
			                                                    }
			                                                    switch(BIB)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size BIBA Salwar Suit\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size BIBA Salwar Suit\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size BIBA Salwar Suit\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size BIBA Salwar Suit\n");
																			break;
																		}
																}
			                                                }break;
													    case 3:
													    	{
													    		int BIBB;
													    		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&BIBB);
			                            			            
			                            			            for(int i=1;BIBB<1 || BIBB>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&BIBB);
			                                                    }
			                                                    switch(BIBB)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size BIBA Palazzo Bottom\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size BIBA Palazzo Bottom\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size BIBA Palazzo Bottom\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size BIBA Palazzo Bottom\n");
																			break;
																		}
																}
															}break;
													}
												}break;
										    case 2:
										    	{
										    		printf("%s\n",harpa.Name);
			                            			printf("Model = %s\n",harpa.Model);
                                                    printf("Type = %s\n",harpa.Type);
                                                    printf("Specifications = %s\n",harpa.specifications);
                                                    printf("Colour = %s\n",harpa.colour);
                                                    printf("Available Sizes = %s\n",harpa.size);
                                                    printf("Price = %d\n",harpa.price);
                                                    printf("  ************  \n");
                                                    
                                                    printf("%s\n",vero_moda.Name);
			                            			printf("Model = %s\n",vero_moda.Model);
                                                    printf("Type = %s\n",vero_moda.Type);
                                                    printf("Specifications = %s\n",vero_moda.specifications);
                                                    printf("Colour = %s\n",vero_moda.colour);
                                                    printf("Available Sizes = %s\n",vero_moda.size);
                                                    printf("Price = %d\n",vero_moda.price);
                                                    printf("  ************  \n");
                                                    
                                                    printf("%s\n",harpa_dress.Name);
			                            			printf("Model = %s\n",harpa_dress.Model);
                                                    printf("Type = %s\n",harpa_dress.Type);
                                                    printf("Specifications = %s\n",harpa_dress.specifications);
                                                    printf("Colour = %s\n",harpa_dress.colour);
                                                    printf("Available Sizes = %s\n",harpa_dress.size);
                                                    printf("Price = %d\n",harpa_dress.price);
                                                    printf("  ************  \n");
                                                    
                                                    printf("%s\n",vero_moda_pants.Name);
			                            			printf("Model = %s\n",vero_moda_pants.Model);
                                                    printf("Type = %s\n",vero_moda_pants.Type);
                                                    printf("Specifications = %s\n",vero_moda_pants.specifications);
                                                    printf("Colour = %s\n",vero_moda_pants.colour);
                                                    printf("Available Sizes = %s\n",vero_moda_pants.size);
                                                    printf("Price = %d\n",vero_moda_pants.price);
                                                    printf("  ************  \n");
                                                    int MOD;
                                                    printf("Select '1' for purchasing Harpa Top\n");
                                                    printf("Select '2' for purchasing Vero Moda Jacket\n");
                                                    printf("Select '3' for purchasing Harpa A-Line Dress\n");
                                                    printf("Select '4' for purchasing Vero Moda Chino Pants\n");
                                                    scanf("%d",&MOD);
                                                    
                                                    for(int i=1;MOD<1 || MOD>4;++i)
				                                    {
				                                      if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&MOD);
			                                        }
			                                        switch(MOD)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			int HAR;
													    		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&HAR);
			                            			            
			                            			            for(int i=1;HAR<1 || HAR>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&HAR);
			                                                    }
			                                                    switch(HAR)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size Harpa Top\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size Harpa Top\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size Harpa Top\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size Harpa Top\n");
																			break;
																		}
															    }
													        }break;
												        case 2:
												        	{
												        		int VER;
												        		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&VER);
			                            			            
			                            			            for(int i=1;VER<1 || VER>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&VER);
			                                                    }
			                                                    switch(VER)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size Vero Moda Jacket\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size Vero Moda Jacket\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size Vero Moda Jacket\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size Vero Moda Jacket\n");
																			break;
																		}
															    }
													        }break;
										                case 3:
										                	{
										                		int HAD;
										                		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&HAD);
			                            			            
			                            			            for(int i=1;HAD<1 || HAD>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&HAD);
			                                                    }
			                                                    switch(HAD)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size Harpa A-Line Dress\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size Harpa A-Line Dress\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size Harpa A-Line Dress\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size Harpa A-Line Dress\n");
																			break;
																		}
															    }
													        }break;
									                    case 4:
									                    	{
									                    		int VMP;
									                    		printf("Please Select Your Size Below\n");
			                            			            printf("Please select '1' for S\n");
			                            			            printf("Please select '2' for M\n");
			                            			            printf("Please select '3' for L\n");
			                            			            printf("Please select '4' for XL\n");
			                            			            scanf("%d",&VMP);
			                            			            
			                            			            for(int i=1;VMP<1 || VMP>4;++i)
				                                                {
				                                                 if(i==2)
				                                                {
				                                                    printf("Sorry! This Session has been Terminated\n");
				                                                    break;
				                                                }
				                                                printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                                scanf("%d",&VMP);
			                                                    }
			                                                    switch(VMP)
			                                                    {
			                                                    	case 1:
			                                                    		{
			                                                    			printf("Thank you for Purchasing S size Vero Moda Chino Pants\n");
			                                                    			break;
																		}
																	case 2:
																		{
																			printf("Thank you for Purchasing M size Vero Moda Chino Pants\n");
																			break;
																		}
																	case 3:
																		{
																			printf("Thank you for Purchasing L size Vero Moda Chino Pants\n");
																			break;
																		}
																	case 4:
																		{
																			printf("Thank you for Purchasing XL size Vero Moda Chino Pants\n");
																			break;
																		}
															    }
													        }break;
							                        } 
						                        }break;
				                        } 
                                    }break;
                                case 2:
                                	{
                                		printf("%s\n",Giva.Name);
			                            printf("Model = %s\n",Giva.Model);
                                        printf("Type = %s\n",Giva.Type);
                                        printf("Specifications = %s\n",Giva.specifications);
                                        printf("Colour = %s\n",Giva.colour);
                                        printf("Size = %s\n",Giva.size);
                                        printf("Price = %d\n",Giva.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",Giva_Earrings.Name);
			                            printf("Model = %s\n",Giva_Earrings.Model);
                                        printf("Type = %s\n",Giva_Earrings.Type);
                                        printf("Specifications = %s\n",Giva_Earrings.specifications);
                                        printf("Colour = %s\n",Giva_Earrings.colour);
                                        printf("Size = %s\n",Giva_Earrings.size);
                                        printf("Price = %d\n",Giva_Earrings.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",Giva_Rings.Name);
			                            printf("Model = %s\n",Giva_Rings.Model);
                                        printf("Type = %s\n",Giva_Rings.Type);
                                        printf("Specifications = %s\n",Giva_Rings.specifications);
                                        printf("Colour = %s\n",Giva_Rings.colour);
                                        printf("Size = %s\n",Giva_Rings.size);
                                        printf("Price = %d\n",Giva_Rings.price);
                                        printf("  ************  \n");
                                        int J;
                                        printf("Select '1' for purchasing Giva Silver Necklace\n");
                                        printf("Select '2' for purchasing Giva Silver EarRings\n");
                                        printf("Select '3' for purchasing Giva Silver Ring\n");
                                        scanf("%d",&J);
                                        
                                        for(int i=1;J<1 || J>3;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&J);
			                            }
			                            switch(J)
			                            {
			                            	case 1:
			                            		{
			                            			printf("Thank you for Purchasing Giva Silver Necklace\n");
			                            			break;
												}
											case 2:
												{
													printf("Thank you for Purchasing Giva Silver EarRings\n");
													break;
												}
											case 3:
												{
													printf("Thank you for Purchasing Giva Silver Rings\n");
													break;
												}
										}
									}break;
							    case 3:
							    	{
							    		printf("%s\n",DA_Milano.Name);
			                            printf("Model = %s\n",DA_Milano.Model);
                                        printf("Type = %s\n",DA_Milano.Type);
                                        printf("Specifications = %s\n",DA_Milano.specifications);
                                        printf("Colour = %s\n",DA_Milano.colour);
                                        printf("Size = %s\n",DA_Milano.size);
                                        printf("Price = %d\n",DA_Milano.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",LINO_PERROS.Name);
			                            printf("Model = %s\n",LINO_PERROS.Model);
                                        printf("Type = %s\n",LINO_PERROS.Type);
                                        printf("Specifications = %s\n",LINO_PERROS.specifications);
                                        printf("Colour = %s\n",LINO_PERROS.colour);
                                        printf("Size = %s\n",LINO_PERROS.size);
                                        printf("Price = %d\n",LINO_PERROS.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",Diana_Korr.Name);
			                            printf("Model = %s\n",Diana_Korr.Model);
                                        printf("Type = %s\n",Diana_Korr.Type);
                                        printf("Specifications = %s\n",Diana_Korr.specifications);
                                        printf("Colour = %s\n",Diana_Korr.colour);
                                        printf("Size = %s\n",Diana_Korr.size);
                                        printf("Price = %d\n",Diana_Korr.price);
                                        printf("  ************  \n");
                                        int H;
                                        printf("Select '1' for purchasing DA Milano HandBag\n");
                                        printf("Select '2' for purchasing LINO PERROS Satchel\n");
                                        printf("Select '3' for purchasing Dianna Korr Wallet\n");
                                        scanf("%d",&H);
                                        
                                        for(int i=1;H<1 || H>3;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&H);
			                            }
			                            switch(H)
			                            {
			                            	case 1:
			                            		{
			                            			printf("Thank you for Purchasing DA Milano HandBag\n");
			                            			break;
												}
											case 2:
												{
													printf("Thank you for Purchasing LINO PERROS Satchel\n");
													break;
												}
											case 3:
												{
													printf("Thank you for Purchasing Dianna Korr Wallet\n");
													break;
												}
										}
									}break;
							    case 4:
							    	{
							    		printf("%s\n",bata.Name);
			                            printf("Model = %s\n",bata.Model);
                                        printf("Type = %s\n",bata.Type);
                                        printf("Specifications = %s\n",bata.specifications);
                                        printf("Colour = %s\n",bata.colour);
                                        printf("Available Sizes = %s\n",bata.size);
                                        printf("Price = %d\n",bata.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",skechers.Name);
			                            printf("Model = %s\n",skechers.Model);
                                        printf("Type = %s\n",skechers.Type);
                                        printf("Specifications = %s\n",skechers.specifications);
                                        printf("Colour = %s\n",skechers.colour);
                                        printf("Available Sizes = %s\n",skechers.size);
                                        printf("Price = %d\n",skechers.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",catwalk.Name);
			                            printf("Model = %s\n",catwalk.Model);
                                        printf("Type = %s\n",catwalk.Type);
                                        printf("Specifications = %s\n",catwalk.specifications);
                                        printf("Colour = %s\n",catwalk.colour);
                                        printf("Available Sizes = %s\n",catwalk.size);
                                        printf("Price = %d\n",catwalk.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",carlton.Name);
			                            printf("Model = %s\n",carlton.Model);
                                        printf("Type = %s\n",carlton.Type);
                                        printf("Specifications = %s\n",carlton.specifications);
                                        printf("Colour = %s\n",carlton.colour);
                                        printf("Available Sizes = %s\n",carlton.size);
                                        printf("Price = %d\n",carlton.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",bata_flipflop.Name);
			                            printf("Model = %s\n",bata_flipflop.Model);
                                        printf("Type = %s\n",bata_flipflop.Type);
                                        printf("Specifications = %s\n",bata_flipflop.specifications);
                                        printf("Colour = %s\n",bata_flipflop.colour);
                                        printf("Available Sizes = %s\n",bata_flipflop.size);
                                        printf("Price = %d\n",bata_flipflop.price);
                                        printf("  ************  \n");
                                        
                                        printf("%s\n",skechers_slippers.Name);
			                            printf("Model = %s\n",skechers_slippers.Model);
                                        printf("Type = %s\n",skechers_slippers.Type);
                                        printf("Specifications = %s\n",skechers_slippers.specifications);
                                        printf("Colour = %s\n",skechers_slippers.colour);
                                        printf("Available Sizes = %s\n",skechers_slippers.size);
                                        printf("Price = %d\n",skechers_slippers.price);
                                        printf("  ************  \n");
                                        int I;
                                        printf("Select '1' for purchasing Bata Sandals\n");
                                        printf("Select '2' for purchasing Skechers Sneakers\n");
                                        printf("Select '3' for purchasing CatWalk Sandals\n");
                                        printf("Select '4' for purchasing Carlton London Loafers\n");
                                        printf("Select '5' for purchasing Bata DiaMonte Flip-Flops\n");
                                        printf("Select '6' for purchasing Skechers Glossy Slippers\n");
                                        scanf("%d",&I);
                                        
                                        for(int i=1;I<1 || I>3;++i)
				                        {
				                          if(i==2)
				                        {
				                            printf("Sorry! This Session has been Terminated\n");
				                            break;
				                        }
				                        printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                        scanf("%d",&I);
			                            }
			                            switch(I)
			                            {
			                            	case 1:
			                            		{
			                            			int BAT;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&BAT);
			                            			
			                            			
			                            			for(int i=1;BAT<1 || BAT>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&BAT);
			                                        }
			                                        switch(BAT)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size Bata Snadals\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size Bata Sandals\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size Bata Sandals\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size Bata Sandals\n");
																break;
															}
													}
												}break;
										    case 2:
										    	{
										    		int SKE;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&SKE);
			                            			
			                            			
			                            			for(int i=1;SKE<1 || SKE>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&SKE);
			                                        }
			                                        switch(SKE)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size Skechers Sneakers\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size Skechers Sneakers\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size Skechers Sneakers\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size Skechers Sneakers\n");
																break;
															}
												    }
										        }break;
									        case 3:
									        	{
									        		int CAT;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&CAT);
			                            			
			                            			
			                            			for(int i=1;CAT<1 || CAT>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&CAT);
			                                        }
			                                        switch(CAT)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size CatWalk Sandals\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size CatWalk Sandals\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size CatWalk Sandals\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size CatWalk Sandals\n");
																break;
															}
												    }
										        }break;
							                case 4:
							                	{
							                		int CAR;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&CAR);
			                            			
			                            			
			                            			for(int i=1;CAR<1 || CAR>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&CAR);
			                                        }
			                                        switch(CAR)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size Carlton London Loafers\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size Carlton London Loafers\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size Carlton London Loafers\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size Carlton London Loafers\n");
																break;
															}
												    }
										        }break;
                                            case 5:
                                            	{
                                            		int BAF;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&BAF);
			                            			
			                            			
			                            			for(int i=1;BAF<1 || BAF>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&BAF);
			                                        }
			                                        switch(BAF)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size Bata DiaMonte Flip-Flops\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size Bata DiaMonte Flip-Flops\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size Bata DiaMonte Flip-Flops\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size Bata DiaMonte Flip-Flops\n");
																break;
															}
												    }
										        }break;
                                            case 6:
                                            	{
                                            		int SKS;
									                printf("Please Select Your Size Below\n");
			                            			printf("Please select '1' for 4 UK\n");
			                            			printf("Please select '2' for 5 UK\n");
			                            			printf("Please select '3' for 6 UK\n");
			                            			printf("Please select '4' for 7 UK\n");
			                            			scanf("%d",&SKS);
			                            			
			                            			
			                            			for(int i=1;SKS<1 || SKS>4;++i)
				                                    {
				                                     if(i==2)
				                                    {
				                                        printf("Sorry! This Session has been Terminated\n");
				                                        break;
				                                    }
				                                    printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				                                    scanf("%d",&SKS);
			                                        }
			                                        switch(SKS)
			                                        {
			                                        	case 1:
			                                        		{
			                                        			printf("Thank you for Purchasing 4 UK Size Skechers Glossy Slippers\n");
			                                        			break;
															}
														case 2:
															{
																printf("Thank you for Purchasing 5 UK Size Skechers Glossy Slippers\n");
																break;
															}
														case 3:
															{
																printf("Thank you for Purchasing 6 UK Size Skechers Glossy Slippers\n");
																break;
															}
														case 4:
															{
																printf("Thank you for Purchasing 7 UK Size Skechers Glossy Slippers\n");
																break;
															}
												    }
										        }break;
                                        }
                                    }break;
                            }
                        }break;
                }
            }break;
        case 5:
        	{
        		printf("%s\n",Solimo_Box.Name);
				printf("Model = %s\n",Solimo_Box.Model);
				printf("Type = %s\n",Solimo_Box.Type);
				printf("Specifications = %s\n",Solimo_Box.specifications);
				printf("Colour = %s\n",Solimo_Box.colour);
				printf("Size and Quantity= %s\n",Solimo_Box.size);
				printf("Price = %d\n",Solimo_Box.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Bedsheets.Name);
				printf("Model = %s\n",Solimo_Bedsheets.Model);
				printf("Type = %s\n",Solimo_Bedsheets.Type);
				printf("Specifications = %s\n",Solimo_Bedsheets.specifications);
				printf("Colour = %s\n",Solimo_Bedsheets.colour);
				printf("Size and Quantity= %s\n",Solimo_Bedsheets.size);
				printf("Price = %d\n",Solimo_Bedsheets.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Curtains.Name);
				printf("Model = %s\n",Solimo_Curtains.Model);
				printf("Type = %s\n",Solimo_Curtains.Type);
				printf("Specifications = %s\n",Solimo_Curtains.specifications);
				printf("Colour = %s\n",Solimo_Curtains.colour);
				printf("Size and Quantity= %s\n",Solimo_Curtains.size);
				printf("Price = %d\n",Solimo_Curtains.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Incense.Name);
				printf("Model = %s\n",Solimo_Incense.Model);
				printf("Type = %s\n",Solimo_Incense.Type);
				printf("Specifications = %s\n",Solimo_Incense.specifications);
				printf("Colour = %s\n",Solimo_Incense.colour);
				printf("Size and Quantity= %s\n",Solimo_Incense.size);
				printf("Price = %d\n",Solimo_Incense.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Glove.Name);
				printf("Model = %s\n",Solimo_Glove.Model);
				printf("Type = %s\n",Solimo_Glove.Type);
				printf("Specifications = %s\n",Solimo_Glove.specifications);
				printf("Colour = %s\n",Solimo_Glove.colour);
				printf("Size and Quantity= %s\n",Solimo_Glove.size);
				printf("Price = %d\n",Solimo_Glove.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Oil.Name);
				printf("Model = %s\n",Solimo_Oil.Model);
				printf("Type = %s\n",Solimo_Oil.Type);
				printf("Specifications = %s\n",Solimo_Oil.specifications);
				printf("Colour = %s\n",Solimo_Oil.colour);
				printf("Size and Quantity= %s\n",Solimo_Oil.size);
				printf("Price = %d\n",Solimo_Oil.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Mob.Name);
				printf("Model = %s\n",Solimo_Mob.Model);
				printf("Type = %s\n",Solimo_Mob.Type);
				printf("Specifications = %s\n",Solimo_Mob.specifications);
				printf("Colour = %s\n",Solimo_Mob.colour);
				printf("Size and Quantity= %s\n",Solimo_Mob.size);
				printf("Price = %d\n",Solimo_Mob.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo_Handwash.Name);
				printf("Model = %s\n",Solimo_Handwash.Model);
				printf("Type = %s\n",Solimo_Handwash.Type);
				printf("Specifications = %s\n",Solimo_Handwash.specifications);
				printf("Colour = %s\n",Solimo_Handwash.colour);
				printf("Size and Quantity= %s\n",Solimo_Handwash.size);
				printf("Price = %d\n",Solimo_Handwash.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Presto.Name);
				printf("Model = %s\n",Presto.Model);
				printf("Type = %s\n",Presto.Type);
				printf("Specifications = %s\n",Presto.specifications);
				printf("Colour = %s\n",Presto.colour);
				printf("Size and Quantity= %s\n",Presto.size);
				printf("Price = %d\n",Presto.price);
			    printf("  ************  \n");
			    
			    printf("%s\n",Solimo.Name);
				printf("Model = %s\n",Solimo.Model);
				printf("Type = %s\n",Solimo.Type);
				printf("Specifications = %s\n",Solimo.specifications);
				printf("Colour = %s\n",Solimo.colour);
				printf("Size and Quantity= %s\n",Solimo.size);
				printf("Price = %d\n",Solimo.price);
			    printf("  ************  \n");
			    int K;
			    printf("Select '1' for purchasing Solimo Plastic Boxes\n");
			    printf("Select '2' for purchasing Solimo Floral BedSheets\n");
			    printf("Select '3' for purchasing Solimo Window Curtains\n");
			    printf("Select '4' for purchasing Solimo Incense Sticks\n");
			    printf("Select '5' for purchasing Solimo Glove\n");
			    printf("Select '6' for purchasing Solimo Extra Virgin Olive Oil\n");
			    printf("Select '7' for purchasing Solimo Cleaning Mob\n");
			    printf("Select '8' for purchasing Solimo Anti-Bacterial HandWash\n");
			    printf("Select '9' for purchasing Presto DisInfectant Surface Cleaner\n");
			    printf("Select '10' for purchasing Solimo Kitchen Tissues\n");
			    scanf("%d",&K);
			    
			    for(int i=1;K<1 || K>10;++i)
				{
				  if(i==2)
				{
				    printf("Sorry! This Session has been Terminated\n");
				    break;
				}
				printf("Please Enter Correct Option (or) This Session Will Be Terminated\n");
				scanf("%d",&K);
			    }
			    switch(K)
			    {
			    	case 1:
			    		{
			    			printf("Thank you for Purchasing Solimo Plastic Boxes\n");
			    			break;
						}
					case 2:
						{
							printf("Thank you for Purchasing Solimo Floral BedSheets\n");
							break;
						}
					case 3:
						{
							printf("Thank you for Purchasing Solimo Window Curtains\n");
							break;
						}
					case 4:
						{
							printf("Thank you for Purchasing Solimo Incense Sticks\n");
							break;
						}
					case 5:
						{
							printf("Thank you for Purchasing Solimo Glove\n");
							break;
						}
					case 6:
						{
							printf("Thank you for Purchasing Solimo Extra Virgin Olive Oil\n");
							break;
						}
					case 7:
						{
							printf("Thank you for Purchasing Solimo Cleaning Mob\n");
							break;
						}
					case 8:
						{
							printf("Thank you for Purchasing Solimo Anti-Bacterial HandWash\n");
							break;
						}
					case 9:
						{
							printf("Thank you for Purchasing Presto DisInfectant Surface Cleaner\n");
							break;
						}
					case 10:
						{
							printf("Thank you for Purchasing Solimo Kitchen Tissues\n");
							break;
						}
				}
			}break;
	}printf("\n ******** Thank You for Choosing Us, Please Visit Again ********\n");
	return 0;
}
