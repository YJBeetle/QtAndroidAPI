#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Enum.hpp"

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
		static QAndroidJniObject ADLAM();
		static QAndroidJniObject AHOM();
		static QAndroidJniObject ANATOLIAN_HIEROGLYPHS();
		static QAndroidJniObject ARABIC();
		static QAndroidJniObject ARMENIAN();
		static QAndroidJniObject AVESTAN();
		static QAndroidJniObject BALINESE();
		static QAndroidJniObject BAMUM();
		static QAndroidJniObject BASSA_VAH();
		static QAndroidJniObject BATAK();
		static QAndroidJniObject BENGALI();
		static QAndroidJniObject BHAIKSUKI();
		static QAndroidJniObject BOPOMOFO();
		static QAndroidJniObject BRAHMI();
		static QAndroidJniObject BRAILLE();
		static QAndroidJniObject BUGINESE();
		static QAndroidJniObject BUHID();
		static QAndroidJniObject CANADIAN_ABORIGINAL();
		static QAndroidJniObject CARIAN();
		static QAndroidJniObject CAUCASIAN_ALBANIAN();
		static QAndroidJniObject CHAKMA();
		static QAndroidJniObject CHAM();
		static QAndroidJniObject CHEROKEE();
		static QAndroidJniObject CHORASMIAN();
		static QAndroidJniObject COMMON();
		static QAndroidJniObject COPTIC();
		static QAndroidJniObject CUNEIFORM();
		static QAndroidJniObject CYPRIOT();
		static QAndroidJniObject CYRILLIC();
		static QAndroidJniObject DESERET();
		static QAndroidJniObject DEVANAGARI();
		static QAndroidJniObject DIVES_AKURU();
		static QAndroidJniObject DOGRA();
		static QAndroidJniObject DUPLOYAN();
		static QAndroidJniObject EGYPTIAN_HIEROGLYPHS();
		static QAndroidJniObject ELBASAN();
		static QAndroidJniObject ELYMAIC();
		static QAndroidJniObject ETHIOPIC();
		static QAndroidJniObject GEORGIAN();
		static QAndroidJniObject GLAGOLITIC();
		static QAndroidJniObject GOTHIC();
		static QAndroidJniObject GRANTHA();
		static QAndroidJniObject GREEK();
		static QAndroidJniObject GUJARATI();
		static QAndroidJniObject GUNJALA_GONDI();
		static QAndroidJniObject GURMUKHI();
		static QAndroidJniObject HAN();
		static QAndroidJniObject HANGUL();
		static QAndroidJniObject HANIFI_ROHINGYA();
		static QAndroidJniObject HANUNOO();
		static QAndroidJniObject HATRAN();
		static QAndroidJniObject HEBREW();
		static QAndroidJniObject HIRAGANA();
		static QAndroidJniObject IMPERIAL_ARAMAIC();
		static QAndroidJniObject INHERITED();
		static QAndroidJniObject INSCRIPTIONAL_PAHLAVI();
		static QAndroidJniObject INSCRIPTIONAL_PARTHIAN();
		static QAndroidJniObject JAVANESE();
		static QAndroidJniObject KAITHI();
		static QAndroidJniObject KANNADA();
		static QAndroidJniObject KATAKANA();
		static QAndroidJniObject KAYAH_LI();
		static QAndroidJniObject KHAROSHTHI();
		static QAndroidJniObject KHITAN_SMALL_SCRIPT();
		static QAndroidJniObject KHMER();
		static QAndroidJniObject KHOJKI();
		static QAndroidJniObject KHUDAWADI();
		static QAndroidJniObject LAO();
		static QAndroidJniObject LATIN();
		static QAndroidJniObject LEPCHA();
		static QAndroidJniObject LIMBU();
		static QAndroidJniObject LINEAR_A();
		static QAndroidJniObject LINEAR_B();
		static QAndroidJniObject LISU();
		static QAndroidJniObject LYCIAN();
		static QAndroidJniObject LYDIAN();
		static QAndroidJniObject MAHAJANI();
		static QAndroidJniObject MAKASAR();
		static QAndroidJniObject MALAYALAM();
		static QAndroidJniObject MANDAIC();
		static QAndroidJniObject MANICHAEAN();
		static QAndroidJniObject MARCHEN();
		static QAndroidJniObject MASARAM_GONDI();
		static QAndroidJniObject MEDEFAIDRIN();
		static QAndroidJniObject MEETEI_MAYEK();
		static QAndroidJniObject MENDE_KIKAKUI();
		static QAndroidJniObject MEROITIC_CURSIVE();
		static QAndroidJniObject MEROITIC_HIEROGLYPHS();
		static QAndroidJniObject MIAO();
		static QAndroidJniObject MODI();
		static QAndroidJniObject MONGOLIAN();
		static QAndroidJniObject MRO();
		static QAndroidJniObject MULTANI();
		static QAndroidJniObject MYANMAR();
		static QAndroidJniObject NABATAEAN();
		static QAndroidJniObject NANDINAGARI();
		static QAndroidJniObject NEWA();
		static QAndroidJniObject NEW_TAI_LUE();
		static QAndroidJniObject NKO();
		static QAndroidJniObject NUSHU();
		static QAndroidJniObject NYIAKENG_PUACHUE_HMONG();
		static QAndroidJniObject OGHAM();
		static QAndroidJniObject OLD_HUNGARIAN();
		static QAndroidJniObject OLD_ITALIC();
		static QAndroidJniObject OLD_NORTH_ARABIAN();
		static QAndroidJniObject OLD_PERMIC();
		static QAndroidJniObject OLD_PERSIAN();
		static QAndroidJniObject OLD_SOGDIAN();
		static QAndroidJniObject OLD_SOUTH_ARABIAN();
		static QAndroidJniObject OLD_TURKIC();
		static QAndroidJniObject OL_CHIKI();
		static QAndroidJniObject ORIYA();
		static QAndroidJniObject OSAGE();
		static QAndroidJniObject OSMANYA();
		static QAndroidJniObject PAHAWH_HMONG();
		static QAndroidJniObject PALMYRENE();
		static QAndroidJniObject PAU_CIN_HAU();
		static QAndroidJniObject PHAGS_PA();
		static QAndroidJniObject PHOENICIAN();
		static QAndroidJniObject PSALTER_PAHLAVI();
		static QAndroidJniObject REJANG();
		static QAndroidJniObject RUNIC();
		static QAndroidJniObject SAMARITAN();
		static QAndroidJniObject SAURASHTRA();
		static QAndroidJniObject SHARADA();
		static QAndroidJniObject SHAVIAN();
		static QAndroidJniObject SIDDHAM();
		static QAndroidJniObject SIGNWRITING();
		static QAndroidJniObject SINHALA();
		static QAndroidJniObject SOGDIAN();
		static QAndroidJniObject SORA_SOMPENG();
		static QAndroidJniObject SOYOMBO();
		static QAndroidJniObject SUNDANESE();
		static QAndroidJniObject SYLOTI_NAGRI();
		static QAndroidJniObject SYRIAC();
		static QAndroidJniObject TAGALOG();
		static QAndroidJniObject TAGBANWA();
		static QAndroidJniObject TAI_LE();
		static QAndroidJniObject TAI_THAM();
		static QAndroidJniObject TAI_VIET();
		static QAndroidJniObject TAKRI();
		static QAndroidJniObject TAMIL();
		static QAndroidJniObject TANGUT();
		static QAndroidJniObject TELUGU();
		static QAndroidJniObject THAANA();
		static QAndroidJniObject THAI();
		static QAndroidJniObject TIBETAN();
		static QAndroidJniObject TIFINAGH();
		static QAndroidJniObject TIRHUTA();
		static QAndroidJniObject UGARITIC();
		static QAndroidJniObject UNKNOWN();
		static QAndroidJniObject VAI();
		static QAndroidJniObject WANCHO();
		static QAndroidJniObject WARANG_CITI();
		static QAndroidJniObject YEZIDI();
		static QAndroidJniObject YI();
		static QAndroidJniObject ZANABAZAR_SQUARE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Character_UnicodeScript(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Character_UnicodeScript(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject forName(jstring arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang

