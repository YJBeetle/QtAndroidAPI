#pragma once

#include "./Enum.def.hpp"

class JIntArray;
class JArray;
class JString;
namespace java::util
{
	class HashMap;
}

namespace java::lang
{
	class Character_UnicodeScript : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::Character_UnicodeScript ADLAM();
		static java::lang::Character_UnicodeScript AHOM();
		static java::lang::Character_UnicodeScript ANATOLIAN_HIEROGLYPHS();
		static java::lang::Character_UnicodeScript ARABIC();
		static java::lang::Character_UnicodeScript ARMENIAN();
		static java::lang::Character_UnicodeScript AVESTAN();
		static java::lang::Character_UnicodeScript BALINESE();
		static java::lang::Character_UnicodeScript BAMUM();
		static java::lang::Character_UnicodeScript BASSA_VAH();
		static java::lang::Character_UnicodeScript BATAK();
		static java::lang::Character_UnicodeScript BENGALI();
		static java::lang::Character_UnicodeScript BHAIKSUKI();
		static java::lang::Character_UnicodeScript BOPOMOFO();
		static java::lang::Character_UnicodeScript BRAHMI();
		static java::lang::Character_UnicodeScript BRAILLE();
		static java::lang::Character_UnicodeScript BUGINESE();
		static java::lang::Character_UnicodeScript BUHID();
		static java::lang::Character_UnicodeScript CANADIAN_ABORIGINAL();
		static java::lang::Character_UnicodeScript CARIAN();
		static java::lang::Character_UnicodeScript CAUCASIAN_ALBANIAN();
		static java::lang::Character_UnicodeScript CHAKMA();
		static java::lang::Character_UnicodeScript CHAM();
		static java::lang::Character_UnicodeScript CHEROKEE();
		static java::lang::Character_UnicodeScript CHORASMIAN();
		static java::lang::Character_UnicodeScript COMMON();
		static java::lang::Character_UnicodeScript COPTIC();
		static java::lang::Character_UnicodeScript CUNEIFORM();
		static java::lang::Character_UnicodeScript CYPRIOT();
		static java::lang::Character_UnicodeScript CYPRO_MINOAN();
		static java::lang::Character_UnicodeScript CYRILLIC();
		static java::lang::Character_UnicodeScript DESERET();
		static java::lang::Character_UnicodeScript DEVANAGARI();
		static java::lang::Character_UnicodeScript DIVES_AKURU();
		static java::lang::Character_UnicodeScript DOGRA();
		static java::lang::Character_UnicodeScript DUPLOYAN();
		static java::lang::Character_UnicodeScript EGYPTIAN_HIEROGLYPHS();
		static java::lang::Character_UnicodeScript ELBASAN();
		static java::lang::Character_UnicodeScript ELYMAIC();
		static java::lang::Character_UnicodeScript ETHIOPIC();
		static java::lang::Character_UnicodeScript GEORGIAN();
		static java::lang::Character_UnicodeScript GLAGOLITIC();
		static java::lang::Character_UnicodeScript GOTHIC();
		static java::lang::Character_UnicodeScript GRANTHA();
		static java::lang::Character_UnicodeScript GREEK();
		static java::lang::Character_UnicodeScript GUJARATI();
		static java::lang::Character_UnicodeScript GUNJALA_GONDI();
		static java::lang::Character_UnicodeScript GURMUKHI();
		static java::lang::Character_UnicodeScript HAN();
		static java::lang::Character_UnicodeScript HANGUL();
		static java::lang::Character_UnicodeScript HANIFI_ROHINGYA();
		static java::lang::Character_UnicodeScript HANUNOO();
		static java::lang::Character_UnicodeScript HATRAN();
		static java::lang::Character_UnicodeScript HEBREW();
		static java::lang::Character_UnicodeScript HIRAGANA();
		static java::lang::Character_UnicodeScript IMPERIAL_ARAMAIC();
		static java::lang::Character_UnicodeScript INHERITED();
		static java::lang::Character_UnicodeScript INSCRIPTIONAL_PAHLAVI();
		static java::lang::Character_UnicodeScript INSCRIPTIONAL_PARTHIAN();
		static java::lang::Character_UnicodeScript JAVANESE();
		static java::lang::Character_UnicodeScript KAITHI();
		static java::lang::Character_UnicodeScript KANNADA();
		static java::lang::Character_UnicodeScript KATAKANA();
		static java::lang::Character_UnicodeScript KAWI();
		static java::lang::Character_UnicodeScript KAYAH_LI();
		static java::lang::Character_UnicodeScript KHAROSHTHI();
		static java::lang::Character_UnicodeScript KHITAN_SMALL_SCRIPT();
		static java::lang::Character_UnicodeScript KHMER();
		static java::lang::Character_UnicodeScript KHOJKI();
		static java::lang::Character_UnicodeScript KHUDAWADI();
		static java::lang::Character_UnicodeScript LAO();
		static java::lang::Character_UnicodeScript LATIN();
		static java::lang::Character_UnicodeScript LEPCHA();
		static java::lang::Character_UnicodeScript LIMBU();
		static java::lang::Character_UnicodeScript LINEAR_A();
		static java::lang::Character_UnicodeScript LINEAR_B();
		static java::lang::Character_UnicodeScript LISU();
		static java::lang::Character_UnicodeScript LYCIAN();
		static java::lang::Character_UnicodeScript LYDIAN();
		static java::lang::Character_UnicodeScript MAHAJANI();
		static java::lang::Character_UnicodeScript MAKASAR();
		static java::lang::Character_UnicodeScript MALAYALAM();
		static java::lang::Character_UnicodeScript MANDAIC();
		static java::lang::Character_UnicodeScript MANICHAEAN();
		static java::lang::Character_UnicodeScript MARCHEN();
		static java::lang::Character_UnicodeScript MASARAM_GONDI();
		static java::lang::Character_UnicodeScript MEDEFAIDRIN();
		static java::lang::Character_UnicodeScript MEETEI_MAYEK();
		static java::lang::Character_UnicodeScript MENDE_KIKAKUI();
		static java::lang::Character_UnicodeScript MEROITIC_CURSIVE();
		static java::lang::Character_UnicodeScript MEROITIC_HIEROGLYPHS();
		static java::lang::Character_UnicodeScript MIAO();
		static java::lang::Character_UnicodeScript MODI();
		static java::lang::Character_UnicodeScript MONGOLIAN();
		static java::lang::Character_UnicodeScript MRO();
		static java::lang::Character_UnicodeScript MULTANI();
		static java::lang::Character_UnicodeScript MYANMAR();
		static java::lang::Character_UnicodeScript NABATAEAN();
		static java::lang::Character_UnicodeScript NAG_MUNDARI();
		static java::lang::Character_UnicodeScript NANDINAGARI();
		static java::lang::Character_UnicodeScript NEWA();
		static java::lang::Character_UnicodeScript NEW_TAI_LUE();
		static java::lang::Character_UnicodeScript NKO();
		static java::lang::Character_UnicodeScript NUSHU();
		static java::lang::Character_UnicodeScript NYIAKENG_PUACHUE_HMONG();
		static java::lang::Character_UnicodeScript OGHAM();
		static java::lang::Character_UnicodeScript OLD_HUNGARIAN();
		static java::lang::Character_UnicodeScript OLD_ITALIC();
		static java::lang::Character_UnicodeScript OLD_NORTH_ARABIAN();
		static java::lang::Character_UnicodeScript OLD_PERMIC();
		static java::lang::Character_UnicodeScript OLD_PERSIAN();
		static java::lang::Character_UnicodeScript OLD_SOGDIAN();
		static java::lang::Character_UnicodeScript OLD_SOUTH_ARABIAN();
		static java::lang::Character_UnicodeScript OLD_TURKIC();
		static java::lang::Character_UnicodeScript OLD_UYGHUR();
		static java::lang::Character_UnicodeScript OL_CHIKI();
		static java::lang::Character_UnicodeScript ORIYA();
		static java::lang::Character_UnicodeScript OSAGE();
		static java::lang::Character_UnicodeScript OSMANYA();
		static java::lang::Character_UnicodeScript PAHAWH_HMONG();
		static java::lang::Character_UnicodeScript PALMYRENE();
		static java::lang::Character_UnicodeScript PAU_CIN_HAU();
		static java::lang::Character_UnicodeScript PHAGS_PA();
		static java::lang::Character_UnicodeScript PHOENICIAN();
		static java::lang::Character_UnicodeScript PSALTER_PAHLAVI();
		static java::lang::Character_UnicodeScript REJANG();
		static java::lang::Character_UnicodeScript RUNIC();
		static java::lang::Character_UnicodeScript SAMARITAN();
		static java::lang::Character_UnicodeScript SAURASHTRA();
		static java::lang::Character_UnicodeScript SHARADA();
		static java::lang::Character_UnicodeScript SHAVIAN();
		static java::lang::Character_UnicodeScript SIDDHAM();
		static java::lang::Character_UnicodeScript SIGNWRITING();
		static java::lang::Character_UnicodeScript SINHALA();
		static java::lang::Character_UnicodeScript SOGDIAN();
		static java::lang::Character_UnicodeScript SORA_SOMPENG();
		static java::lang::Character_UnicodeScript SOYOMBO();
		static java::lang::Character_UnicodeScript SUNDANESE();
		static java::lang::Character_UnicodeScript SYLOTI_NAGRI();
		static java::lang::Character_UnicodeScript SYRIAC();
		static java::lang::Character_UnicodeScript TAGALOG();
		static java::lang::Character_UnicodeScript TAGBANWA();
		static java::lang::Character_UnicodeScript TAI_LE();
		static java::lang::Character_UnicodeScript TAI_THAM();
		static java::lang::Character_UnicodeScript TAI_VIET();
		static java::lang::Character_UnicodeScript TAKRI();
		static java::lang::Character_UnicodeScript TAMIL();
		static java::lang::Character_UnicodeScript TANGSA();
		static java::lang::Character_UnicodeScript TANGUT();
		static java::lang::Character_UnicodeScript TELUGU();
		static java::lang::Character_UnicodeScript THAANA();
		static java::lang::Character_UnicodeScript THAI();
		static java::lang::Character_UnicodeScript TIBETAN();
		static java::lang::Character_UnicodeScript TIFINAGH();
		static java::lang::Character_UnicodeScript TIRHUTA();
		static java::lang::Character_UnicodeScript TOTO();
		static java::lang::Character_UnicodeScript UGARITIC();
		static java::lang::Character_UnicodeScript UNKNOWN();
		static java::lang::Character_UnicodeScript VAI();
		static java::lang::Character_UnicodeScript VITHKUQI();
		static java::lang::Character_UnicodeScript WANCHO();
		static java::lang::Character_UnicodeScript WARANG_CITI();
		static java::lang::Character_UnicodeScript YEZIDI();
		static java::lang::Character_UnicodeScript YI();
		static java::lang::Character_UnicodeScript ZANABAZAR_SQUARE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Character_UnicodeScript(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Character_UnicodeScript(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::Character_UnicodeScript forName(JString arg0);
		static java::lang::Character_UnicodeScript of(jint arg0);
		static java::lang::Character_UnicodeScript valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::lang

