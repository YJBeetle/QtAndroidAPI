#pragma once

#ifndef JAVA_LANG_CHARACTER_UNICODESCRIPT
#define JAVA_LANG_CHARACTER_UNICODESCRIPT

#include "../../__JniBaseClass.hpp"
#include "Enum.hpp"

namespace __jni_impl::java::util
{
	class HashMap;
}

namespace __jni_impl::java::lang
{
	class Character_UnicodeScript : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject COMMON();
		static QAndroidJniObject LATIN();
		static QAndroidJniObject GREEK();
		static QAndroidJniObject CYRILLIC();
		static QAndroidJniObject ARMENIAN();
		static QAndroidJniObject HEBREW();
		static QAndroidJniObject ARABIC();
		static QAndroidJniObject SYRIAC();
		static QAndroidJniObject THAANA();
		static QAndroidJniObject DEVANAGARI();
		static QAndroidJniObject BENGALI();
		static QAndroidJniObject GURMUKHI();
		static QAndroidJniObject GUJARATI();
		static QAndroidJniObject ORIYA();
		static QAndroidJniObject TAMIL();
		static QAndroidJniObject TELUGU();
		static QAndroidJniObject KANNADA();
		static QAndroidJniObject MALAYALAM();
		static QAndroidJniObject SINHALA();
		static QAndroidJniObject THAI();
		static QAndroidJniObject LAO();
		static QAndroidJniObject TIBETAN();
		static QAndroidJniObject MYANMAR();
		static QAndroidJniObject GEORGIAN();
		static QAndroidJniObject HANGUL();
		static QAndroidJniObject ETHIOPIC();
		static QAndroidJniObject CHEROKEE();
		static QAndroidJniObject CANADIAN_ABORIGINAL();
		static QAndroidJniObject OGHAM();
		static QAndroidJniObject RUNIC();
		static QAndroidJniObject KHMER();
		static QAndroidJniObject MONGOLIAN();
		static QAndroidJniObject HIRAGANA();
		static QAndroidJniObject KATAKANA();
		static QAndroidJniObject BOPOMOFO();
		static QAndroidJniObject HAN();
		static QAndroidJniObject YI();
		static QAndroidJniObject OLD_ITALIC();
		static QAndroidJniObject GOTHIC();
		static QAndroidJniObject DESERET();
		static QAndroidJniObject INHERITED();
		static QAndroidJniObject TAGALOG();
		static QAndroidJniObject HANUNOO();
		static QAndroidJniObject BUHID();
		static QAndroidJniObject TAGBANWA();
		static QAndroidJniObject LIMBU();
		static QAndroidJniObject TAI_LE();
		static QAndroidJniObject LINEAR_B();
		static QAndroidJniObject UGARITIC();
		static QAndroidJniObject SHAVIAN();
		static QAndroidJniObject OSMANYA();
		static QAndroidJniObject CYPRIOT();
		static QAndroidJniObject BRAILLE();
		static QAndroidJniObject BUGINESE();
		static QAndroidJniObject COPTIC();
		static QAndroidJniObject NEW_TAI_LUE();
		static QAndroidJniObject GLAGOLITIC();
		static QAndroidJniObject TIFINAGH();
		static QAndroidJniObject SYLOTI_NAGRI();
		static QAndroidJniObject OLD_PERSIAN();
		static QAndroidJniObject KHAROSHTHI();
		static QAndroidJniObject BALINESE();
		static QAndroidJniObject CUNEIFORM();
		static QAndroidJniObject PHOENICIAN();
		static QAndroidJniObject PHAGS_PA();
		static QAndroidJniObject NKO();
		static QAndroidJniObject SUNDANESE();
		static QAndroidJniObject BATAK();
		static QAndroidJniObject LEPCHA();
		static QAndroidJniObject OL_CHIKI();
		static QAndroidJniObject VAI();
		static QAndroidJniObject SAURASHTRA();
		static QAndroidJniObject KAYAH_LI();
		static QAndroidJniObject REJANG();
		static QAndroidJniObject LYCIAN();
		static QAndroidJniObject CARIAN();
		static QAndroidJniObject LYDIAN();
		static QAndroidJniObject CHAM();
		static QAndroidJniObject TAI_THAM();
		static QAndroidJniObject TAI_VIET();
		static QAndroidJniObject AVESTAN();
		static QAndroidJniObject EGYPTIAN_HIEROGLYPHS();
		static QAndroidJniObject SAMARITAN();
		static QAndroidJniObject MANDAIC();
		static QAndroidJniObject LISU();
		static QAndroidJniObject BAMUM();
		static QAndroidJniObject JAVANESE();
		static QAndroidJniObject MEETEI_MAYEK();
		static QAndroidJniObject IMPERIAL_ARAMAIC();
		static QAndroidJniObject OLD_SOUTH_ARABIAN();
		static QAndroidJniObject INSCRIPTIONAL_PARTHIAN();
		static QAndroidJniObject INSCRIPTIONAL_PAHLAVI();
		static QAndroidJniObject OLD_TURKIC();
		static QAndroidJniObject BRAHMI();
		static QAndroidJniObject KAITHI();
		static QAndroidJniObject MEROITIC_HIEROGLYPHS();
		static QAndroidJniObject MEROITIC_CURSIVE();
		static QAndroidJniObject SORA_SOMPENG();
		static QAndroidJniObject CHAKMA();
		static QAndroidJniObject SHARADA();
		static QAndroidJniObject TAKRI();
		static QAndroidJniObject MIAO();
		static QAndroidJniObject CAUCASIAN_ALBANIAN();
		static QAndroidJniObject BASSA_VAH();
		static QAndroidJniObject DUPLOYAN();
		static QAndroidJniObject ELBASAN();
		static QAndroidJniObject GRANTHA();
		static QAndroidJniObject PAHAWH_HMONG();
		static QAndroidJniObject KHOJKI();
		static QAndroidJniObject LINEAR_A();
		static QAndroidJniObject MAHAJANI();
		static QAndroidJniObject MANICHAEAN();
		static QAndroidJniObject MENDE_KIKAKUI();
		static QAndroidJniObject MODI();
		static QAndroidJniObject MRO();
		static QAndroidJniObject OLD_NORTH_ARABIAN();
		static QAndroidJniObject NABATAEAN();
		static QAndroidJniObject PALMYRENE();
		static QAndroidJniObject PAU_CIN_HAU();
		static QAndroidJniObject OLD_PERMIC();
		static QAndroidJniObject PSALTER_PAHLAVI();
		static QAndroidJniObject SIDDHAM();
		static QAndroidJniObject KHUDAWADI();
		static QAndroidJniObject TIRHUTA();
		static QAndroidJniObject WARANG_CITI();
		static QAndroidJniObject AHOM();
		static QAndroidJniObject ANATOLIAN_HIEROGLYPHS();
		static QAndroidJniObject HATRAN();
		static QAndroidJniObject MULTANI();
		static QAndroidJniObject OLD_HUNGARIAN();
		static QAndroidJniObject SIGNWRITING();
		static QAndroidJniObject ADLAM();
		static QAndroidJniObject BHAIKSUKI();
		static QAndroidJniObject MARCHEN();
		static QAndroidJniObject NEWA();
		static QAndroidJniObject OSAGE();
		static QAndroidJniObject TANGUT();
		static QAndroidJniObject MASARAM_GONDI();
		static QAndroidJniObject NUSHU();
		static QAndroidJniObject SOYOMBO();
		static QAndroidJniObject ZANABAZAR_SQUARE();
		static QAndroidJniObject HANIFI_ROHINGYA();
		static QAndroidJniObject OLD_SOGDIAN();
		static QAndroidJniObject SOGDIAN();
		static QAndroidJniObject DOGRA();
		static QAndroidJniObject GUNJALA_GONDI();
		static QAndroidJniObject MAKASAR();
		static QAndroidJniObject MEDEFAIDRIN();
		static QAndroidJniObject ELYMAIC();
		static QAndroidJniObject NANDINAGARI();
		static QAndroidJniObject NYIAKENG_PUACHUE_HMONG();
		static QAndroidJniObject WANCHO();
		static QAndroidJniObject UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject forName(jstring arg0);
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject of(jint arg0);
	};
} // namespace __jni_impl::java::lang

#include "../util/HashMap.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject Character_UnicodeScript::COMMON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"COMMON",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LATIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LATIN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GREEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GREEK",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CYRILLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CYRILLIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ARMENIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ARMENIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HEBREW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HEBREW",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ARABIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ARABIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SYRIAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SYRIAC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::THAANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"THAANA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::DEVANAGARI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"DEVANAGARI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BENGALI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BENGALI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GURMUKHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GURMUKHI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GUJARATI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GUJARATI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ORIYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ORIYA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAMIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAMIL",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TELUGU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TELUGU",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KANNADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KANNADA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MALAYALAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MALAYALAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SINHALA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SINHALA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::THAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"THAI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LAO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LAO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TIBETAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TIBETAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MYANMAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MYANMAR",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GEORGIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GEORGIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HANGUL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HANGUL",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ETHIOPIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ETHIOPIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CHEROKEE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CHEROKEE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CANADIAN_ABORIGINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CANADIAN_ABORIGINAL",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OGHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OGHAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::RUNIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"RUNIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KHMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KHMER",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MONGOLIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MONGOLIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HIRAGANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HIRAGANA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KATAKANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KATAKANA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BOPOMOFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BOPOMOFO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::YI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"YI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_ITALIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_ITALIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GOTHIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GOTHIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::DESERET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"DESERET",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::INHERITED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"INHERITED",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAGALOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAGALOG",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HANUNOO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HANUNOO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BUHID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BUHID",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAGBANWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAGBANWA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LIMBU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LIMBU",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAI_LE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAI_LE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LINEAR_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LINEAR_B",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::UGARITIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"UGARITIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SHAVIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SHAVIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OSMANYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OSMANYA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CYPRIOT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CYPRIOT",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BRAILLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BRAILLE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BUGINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BUGINESE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::COPTIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"COPTIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NEW_TAI_LUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NEW_TAI_LUE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GLAGOLITIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GLAGOLITIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TIFINAGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TIFINAGH",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SYLOTI_NAGRI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SYLOTI_NAGRI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_PERSIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_PERSIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KHAROSHTHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KHAROSHTHI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BALINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BALINESE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CUNEIFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CUNEIFORM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PHOENICIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PHOENICIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PHAGS_PA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PHAGS_PA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NKO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NKO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SUNDANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SUNDANESE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BATAK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BATAK",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LEPCHA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LEPCHA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OL_CHIKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OL_CHIKI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::VAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"VAI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SAURASHTRA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SAURASHTRA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KAYAH_LI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KAYAH_LI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::REJANG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"REJANG",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LYCIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LYCIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CARIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CARIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LYDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LYDIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CHAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAI_THAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAI_THAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAI_VIET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAI_VIET",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::AVESTAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"AVESTAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::EGYPTIAN_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"EGYPTIAN_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SAMARITAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SAMARITAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MANDAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MANDAIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LISU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LISU",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BAMUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BAMUM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::JAVANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"JAVANESE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MEETEI_MAYEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MEETEI_MAYEK",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::IMPERIAL_ARAMAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"IMPERIAL_ARAMAIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_SOUTH_ARABIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_SOUTH_ARABIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::INSCRIPTIONAL_PARTHIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"INSCRIPTIONAL_PARTHIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::INSCRIPTIONAL_PAHLAVI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"INSCRIPTIONAL_PAHLAVI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_TURKIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_TURKIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BRAHMI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BRAHMI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KAITHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KAITHI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MEROITIC_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MEROITIC_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MEROITIC_CURSIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MEROITIC_CURSIVE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SORA_SOMPENG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SORA_SOMPENG",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CHAKMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CHAKMA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SHARADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SHARADA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TAKRI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TAKRI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MIAO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MIAO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::CAUCASIAN_ALBANIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"CAUCASIAN_ALBANIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BASSA_VAH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BASSA_VAH",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::DUPLOYAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"DUPLOYAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ELBASAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ELBASAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GRANTHA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GRANTHA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PAHAWH_HMONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PAHAWH_HMONG",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KHOJKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KHOJKI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::LINEAR_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"LINEAR_A",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MAHAJANI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MAHAJANI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MANICHAEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MANICHAEAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MENDE_KIKAKUI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MENDE_KIKAKUI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MODI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MODI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MRO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MRO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_NORTH_ARABIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_NORTH_ARABIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NABATAEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NABATAEAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PALMYRENE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PALMYRENE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PAU_CIN_HAU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PAU_CIN_HAU",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_PERMIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_PERMIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::PSALTER_PAHLAVI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"PSALTER_PAHLAVI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SIDDHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SIDDHAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::KHUDAWADI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"KHUDAWADI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TIRHUTA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TIRHUTA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::WARANG_CITI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"WARANG_CITI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::AHOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"AHOM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ANATOLIAN_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ANATOLIAN_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HATRAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HATRAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MULTANI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MULTANI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_HUNGARIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_HUNGARIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SIGNWRITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SIGNWRITING",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ADLAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ADLAM",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::BHAIKSUKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"BHAIKSUKI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MARCHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MARCHEN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NEWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NEWA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OSAGE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::TANGUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"TANGUT",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MASARAM_GONDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MASARAM_GONDI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NUSHU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NUSHU",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SOYOMBO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SOYOMBO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ZANABAZAR_SQUARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ZANABAZAR_SQUARE",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::HANIFI_ROHINGYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"HANIFI_ROHINGYA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::OLD_SOGDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"OLD_SOGDIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::SOGDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"SOGDIAN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::DOGRA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"DOGRA",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::GUNJALA_GONDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"GUNJALA_GONDI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MAKASAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MAKASAR",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::MEDEFAIDRIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"MEDEFAIDRIN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::ELYMAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"ELYMAIC",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NANDINAGARI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NANDINAGARI",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::NYIAKENG_PUACHUE_HMONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"NYIAKENG_PUACHUE_HMONG",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::WANCHO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"WANCHO",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	QAndroidJniObject Character_UnicodeScript::UNKNOWN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeScript",
			"UNKNOWN",
			"Ljava/lang/Character$UnicodeScript;"
		);
	}
	
	// Constructors
	void Character_UnicodeScript::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Character$UnicodeScript",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Character_UnicodeScript::forName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeScript",
			"forName",
			"(Ljava/lang/String;)Ljava/lang/Character$UnicodeScript;",
			arg0
		);
	}
	jarray Character_UnicodeScript::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeScript",
			"values",
			"()[Ljava/lang/Character$UnicodeScript;"
		).object<jarray>();
	}
	QAndroidJniObject Character_UnicodeScript::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeScript",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/Character$UnicodeScript;",
			arg0
		);
	}
	QAndroidJniObject Character_UnicodeScript::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeScript",
			"of",
			"(I)Ljava/lang/Character$UnicodeScript;",
			arg0
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Character_UnicodeScript : public __jni_impl::java::lang::Character_UnicodeScript
	{
	public:
		Character_UnicodeScript(QAndroidJniObject obj) { __thiz = obj; }
		Character_UnicodeScript()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CHARACTER_UNICODESCRIPT

