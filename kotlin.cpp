
import SqlLiteconnector
private con = baglant�(yemekadi, malzemeler, yapilis)

db=(select*from yemekadi,malzemler,yapilis)

if (con == null)
{
	mesaj = "baglant�n�z� kontrol edin";
}
else
mesaj = "baglant� dogru"



class YemekTarifi {
	var yemekAdi = ""
		var malzemeler = ""
		var yapilis = ""
}

fun main() {
	val tarif = YemekTarifi()

		println("L�tfen tarifini vermek istedi�iniz yeme�in ad�n� giriniz :")
		tarif.yemekAdi = readLine()!!
		println("�imdi malzemeleri tek sat�rda giriniz :")
		tarif.malzemeler = readLine()!!
		println("Nas�l yap�l�yor? : ")
		tarif.yapilis = readLine()!!

		println(tarif.yemekAdi)
		println(tarif.malzemeler)
		println(tarif.yapilis)
}

