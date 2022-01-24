
import SqlLiteconnector
private con = baglantý(yemekadi, malzemeler, yapilis)

db=(select*from yemekadi,malzemler,yapilis)

if (con == null)
{
	mesaj = "baglantýnýzý kontrol edin";
}
else
mesaj = "baglantý dogru"



class YemekTarifi {
	var yemekAdi = ""
		var malzemeler = ""
		var yapilis = ""
}

fun main() {
	val tarif = YemekTarifi()

		println("Lütfen tarifini vermek istediðiniz yemeðin adýný giriniz :")
		tarif.yemekAdi = readLine()!!
		println("Þimdi malzemeleri tek satýrda giriniz :")
		tarif.malzemeler = readLine()!!
		println("Nasýl yapýlýyor? : ")
		tarif.yapilis = readLine()!!

		println(tarif.yemekAdi)
		println(tarif.malzemeler)
		println(tarif.yapilis)
}

