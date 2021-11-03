#include "./UScript_ScriptUsage.hpp"
#include "../util/ULocale.hpp"
#include "../../../java/util/BitSet.hpp"
#include "../../../java/util/Locale.hpp"
#include "./UScript.hpp"

namespace android::icu::lang
{
	// Fields
	jint UScript::ADLAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ADLAM"
		);
	}
	jint UScript::AFAKA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AFAKA"
		);
	}
	jint UScript::AHOM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AHOM"
		);
	}
	jint UScript::ANATOLIAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ANATOLIAN_HIEROGLYPHS"
		);
	}
	jint UScript::ARABIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ARABIC"
		);
	}
	jint UScript::ARMENIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ARMENIAN"
		);
	}
	jint UScript::AVESTAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AVESTAN"
		);
	}
	jint UScript::BALINESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BALINESE"
		);
	}
	jint UScript::BAMUM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BAMUM"
		);
	}
	jint UScript::BASSA_VAH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BASSA_VAH"
		);
	}
	jint UScript::BATAK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BATAK"
		);
	}
	jint UScript::BENGALI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BENGALI"
		);
	}
	jint UScript::BHAIKSUKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BHAIKSUKI"
		);
	}
	jint UScript::BLISSYMBOLS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BLISSYMBOLS"
		);
	}
	jint UScript::BOOK_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BOOK_PAHLAVI"
		);
	}
	jint UScript::BOPOMOFO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BOPOMOFO"
		);
	}
	jint UScript::BRAHMI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BRAHMI"
		);
	}
	jint UScript::BRAILLE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BRAILLE"
		);
	}
	jint UScript::BUGINESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BUGINESE"
		);
	}
	jint UScript::BUHID()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BUHID"
		);
	}
	jint UScript::CANADIAN_ABORIGINAL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CANADIAN_ABORIGINAL"
		);
	}
	jint UScript::CARIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CARIAN"
		);
	}
	jint UScript::CAUCASIAN_ALBANIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CAUCASIAN_ALBANIAN"
		);
	}
	jint UScript::CHAKMA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHAKMA"
		);
	}
	jint UScript::CHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHAM"
		);
	}
	jint UScript::CHEROKEE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHEROKEE"
		);
	}
	jint UScript::CIRTH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CIRTH"
		);
	}
	jint UScript::COMMON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"COMMON"
		);
	}
	jint UScript::COPTIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"COPTIC"
		);
	}
	jint UScript::CUNEIFORM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CUNEIFORM"
		);
	}
	jint UScript::CYPRIOT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CYPRIOT"
		);
	}
	jint UScript::CYRILLIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CYRILLIC"
		);
	}
	jint UScript::DEMOTIC_EGYPTIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DEMOTIC_EGYPTIAN"
		);
	}
	jint UScript::DESERET()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DESERET"
		);
	}
	jint UScript::DEVANAGARI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DEVANAGARI"
		);
	}
	jint UScript::DUPLOYAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DUPLOYAN"
		);
	}
	jint UScript::EASTERN_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"EASTERN_SYRIAC"
		);
	}
	jint UScript::EGYPTIAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"EGYPTIAN_HIEROGLYPHS"
		);
	}
	jint UScript::ELBASAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ELBASAN"
		);
	}
	jint UScript::ESTRANGELO_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ESTRANGELO_SYRIAC"
		);
	}
	jint UScript::ETHIOPIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ETHIOPIC"
		);
	}
	jint UScript::GEORGIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GEORGIAN"
		);
	}
	jint UScript::GLAGOLITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GLAGOLITIC"
		);
	}
	jint UScript::GOTHIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GOTHIC"
		);
	}
	jint UScript::GRANTHA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GRANTHA"
		);
	}
	jint UScript::GREEK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GREEK"
		);
	}
	jint UScript::GUJARATI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GUJARATI"
		);
	}
	jint UScript::GURMUKHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GURMUKHI"
		);
	}
	jint UScript::HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HAN"
		);
	}
	jint UScript::HANGUL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HANGUL"
		);
	}
	jint UScript::HANUNOO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HANUNOO"
		);
	}
	jint UScript::HAN_WITH_BOPOMOFO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HAN_WITH_BOPOMOFO"
		);
	}
	jint UScript::HARAPPAN_INDUS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HARAPPAN_INDUS"
		);
	}
	jint UScript::HATRAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HATRAN"
		);
	}
	jint UScript::HEBREW()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HEBREW"
		);
	}
	jint UScript::HIERATIC_EGYPTIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HIERATIC_EGYPTIAN"
		);
	}
	jint UScript::HIRAGANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HIRAGANA"
		);
	}
	jint UScript::IMPERIAL_ARAMAIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"IMPERIAL_ARAMAIC"
		);
	}
	jint UScript::INHERITED()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INHERITED"
		);
	}
	jint UScript::INSCRIPTIONAL_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INSCRIPTIONAL_PAHLAVI"
		);
	}
	jint UScript::INSCRIPTIONAL_PARTHIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INSCRIPTIONAL_PARTHIAN"
		);
	}
	jint UScript::INVALID_CODE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INVALID_CODE"
		);
	}
	jint UScript::JAMO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAMO"
		);
	}
	jint UScript::JAPANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAPANESE"
		);
	}
	jint UScript::JAVANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAVANESE"
		);
	}
	jint UScript::JURCHEN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JURCHEN"
		);
	}
	jint UScript::KAITHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KAITHI"
		);
	}
	jint UScript::KANNADA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KANNADA"
		);
	}
	jint UScript::KATAKANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KATAKANA"
		);
	}
	jint UScript::KATAKANA_OR_HIRAGANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KATAKANA_OR_HIRAGANA"
		);
	}
	jint UScript::KAYAH_LI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KAYAH_LI"
		);
	}
	jint UScript::KHAROSHTHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHAROSHTHI"
		);
	}
	jint UScript::KHMER()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHMER"
		);
	}
	jint UScript::KHOJKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHOJKI"
		);
	}
	jint UScript::KHUDAWADI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHUDAWADI"
		);
	}
	jint UScript::KHUTSURI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHUTSURI"
		);
	}
	jint UScript::KOREAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KOREAN"
		);
	}
	jint UScript::KPELLE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KPELLE"
		);
	}
	jint UScript::LANNA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LANNA"
		);
	}
	jint UScript::LAO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LAO"
		);
	}
	jint UScript::LATIN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN"
		);
	}
	jint UScript::LATIN_FRAKTUR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN_FRAKTUR"
		);
	}
	jint UScript::LATIN_GAELIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN_GAELIC"
		);
	}
	jint UScript::LEPCHA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LEPCHA"
		);
	}
	jint UScript::LIMBU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LIMBU"
		);
	}
	jint UScript::LINEAR_A()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LINEAR_A"
		);
	}
	jint UScript::LINEAR_B()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LINEAR_B"
		);
	}
	jint UScript::LISU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LISU"
		);
	}
	jint UScript::LOMA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LOMA"
		);
	}
	jint UScript::LYCIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LYCIAN"
		);
	}
	jint UScript::LYDIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LYDIAN"
		);
	}
	jint UScript::MAHAJANI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MAHAJANI"
		);
	}
	jint UScript::MALAYALAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MALAYALAM"
		);
	}
	jint UScript::MANDAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANDAEAN"
		);
	}
	jint UScript::MANDAIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANDAIC"
		);
	}
	jint UScript::MANICHAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANICHAEAN"
		);
	}
	jint UScript::MARCHEN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MARCHEN"
		);
	}
	jint UScript::MASARAM_GONDI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MASARAM_GONDI"
		);
	}
	jint UScript::MATHEMATICAL_NOTATION()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MATHEMATICAL_NOTATION"
		);
	}
	jint UScript::MAYAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MAYAN_HIEROGLYPHS"
		);
	}
	jint UScript::MEITEI_MAYEK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEITEI_MAYEK"
		);
	}
	jint UScript::MENDE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MENDE"
		);
	}
	jint UScript::MEROITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC"
		);
	}
	jint UScript::MEROITIC_CURSIVE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC_CURSIVE"
		);
	}
	jint UScript::MEROITIC_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC_HIEROGLYPHS"
		);
	}
	jint UScript::MIAO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MIAO"
		);
	}
	jint UScript::MODI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MODI"
		);
	}
	jint UScript::MONGOLIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MONGOLIAN"
		);
	}
	jint UScript::MOON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MOON"
		);
	}
	jint UScript::MRO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MRO"
		);
	}
	jint UScript::MULTANI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MULTANI"
		);
	}
	jint UScript::MYANMAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MYANMAR"
		);
	}
	jint UScript::NABATAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NABATAEAN"
		);
	}
	jint UScript::NAKHI_GEBA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NAKHI_GEBA"
		);
	}
	jint UScript::NEWA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NEWA"
		);
	}
	jint UScript::NEW_TAI_LUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NEW_TAI_LUE"
		);
	}
	jint UScript::NKO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NKO"
		);
	}
	jint UScript::NUSHU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NUSHU"
		);
	}
	jint UScript::OGHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OGHAM"
		);
	}
	jint UScript::OLD_CHURCH_SLAVONIC_CYRILLIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_CHURCH_SLAVONIC_CYRILLIC"
		);
	}
	jint UScript::OLD_HUNGARIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_HUNGARIAN"
		);
	}
	jint UScript::OLD_ITALIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_ITALIC"
		);
	}
	jint UScript::OLD_NORTH_ARABIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_NORTH_ARABIAN"
		);
	}
	jint UScript::OLD_PERMIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_PERMIC"
		);
	}
	jint UScript::OLD_PERSIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_PERSIAN"
		);
	}
	jint UScript::OLD_SOUTH_ARABIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_SOUTH_ARABIAN"
		);
	}
	jint UScript::OL_CHIKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OL_CHIKI"
		);
	}
	jint UScript::ORIYA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ORIYA"
		);
	}
	jint UScript::ORKHON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ORKHON"
		);
	}
	jint UScript::OSAGE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OSAGE"
		);
	}
	jint UScript::OSMANYA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OSMANYA"
		);
	}
	jint UScript::PAHAWH_HMONG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PAHAWH_HMONG"
		);
	}
	jint UScript::PALMYRENE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PALMYRENE"
		);
	}
	jint UScript::PAU_CIN_HAU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PAU_CIN_HAU"
		);
	}
	jint UScript::PHAGS_PA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHAGS_PA"
		);
	}
	jint UScript::PHOENICIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHOENICIAN"
		);
	}
	jint UScript::PHONETIC_POLLARD()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHONETIC_POLLARD"
		);
	}
	jint UScript::PSALTER_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PSALTER_PAHLAVI"
		);
	}
	jint UScript::REJANG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"REJANG"
		);
	}
	jint UScript::RONGORONGO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"RONGORONGO"
		);
	}
	jint UScript::RUNIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"RUNIC"
		);
	}
	jint UScript::SAMARITAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SAMARITAN"
		);
	}
	jint UScript::SARATI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SARATI"
		);
	}
	jint UScript::SAURASHTRA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SAURASHTRA"
		);
	}
	jint UScript::SHARADA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SHARADA"
		);
	}
	jint UScript::SHAVIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SHAVIAN"
		);
	}
	jint UScript::SIDDHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIDDHAM"
		);
	}
	jint UScript::SIGN_WRITING()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIGN_WRITING"
		);
	}
	jint UScript::SIMPLIFIED_HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIMPLIFIED_HAN"
		);
	}
	jint UScript::SINDHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SINDHI"
		);
	}
	jint UScript::SINHALA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SINHALA"
		);
	}
	jint UScript::SORA_SOMPENG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SORA_SOMPENG"
		);
	}
	jint UScript::SOYOMBO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SOYOMBO"
		);
	}
	jint UScript::SUNDANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SUNDANESE"
		);
	}
	jint UScript::SYLOTI_NAGRI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYLOTI_NAGRI"
		);
	}
	jint UScript::SYMBOLS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYMBOLS"
		);
	}
	jint UScript::SYMBOLS_EMOJI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYMBOLS_EMOJI"
		);
	}
	jint UScript::SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYRIAC"
		);
	}
	jint UScript::TAGALOG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAGALOG"
		);
	}
	jint UScript::TAGBANWA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAGBANWA"
		);
	}
	jint UScript::TAI_LE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAI_LE"
		);
	}
	jint UScript::TAI_VIET()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAI_VIET"
		);
	}
	jint UScript::TAKRI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAKRI"
		);
	}
	jint UScript::TAMIL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAMIL"
		);
	}
	jint UScript::TANGUT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TANGUT"
		);
	}
	jint UScript::TELUGU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TELUGU"
		);
	}
	jint UScript::TENGWAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TENGWAR"
		);
	}
	jint UScript::THAANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"THAANA"
		);
	}
	jint UScript::THAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"THAI"
		);
	}
	jint UScript::TIBETAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIBETAN"
		);
	}
	jint UScript::TIFINAGH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIFINAGH"
		);
	}
	jint UScript::TIRHUTA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIRHUTA"
		);
	}
	jint UScript::TRADITIONAL_HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TRADITIONAL_HAN"
		);
	}
	jint UScript::UCAS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UCAS"
		);
	}
	jint UScript::UGARITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UGARITIC"
		);
	}
	jint UScript::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UNKNOWN"
		);
	}
	jint UScript::UNWRITTEN_LANGUAGES()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UNWRITTEN_LANGUAGES"
		);
	}
	jint UScript::VAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"VAI"
		);
	}
	jint UScript::VISIBLE_SPEECH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"VISIBLE_SPEECH"
		);
	}
	jint UScript::WARANG_CITI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WARANG_CITI"
		);
	}
	jint UScript::WESTERN_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WESTERN_SYRIAC"
		);
	}
	jint UScript::WOLEAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WOLEAI"
		);
	}
	jint UScript::YI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"YI"
		);
	}
	jint UScript::ZANABAZAR_SQUARE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ZANABAZAR_SQUARE"
		);
	}
	
	// QAndroidJniObject forward
	UScript::UScript(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean UScript::breaksBetweenLetters(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"breaksBetweenLetters",
			"(I)Z",
			arg0
		);
	}
	jintArray UScript::getCode(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Landroid/icu/util/ULocale;)[I",
			arg0.object()
		).object<jintArray>();
	}
	jintArray UScript::getCode(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Ljava/lang/String;)[I",
			arg0
		).object<jintArray>();
	}
	jintArray UScript::getCode(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Ljava/util/Locale;)[I",
			arg0.object()
		).object<jintArray>();
	}
	jint UScript::getCodeFromName(jstring arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getCodeFromName",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jstring UScript::getName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UScript::getSampleString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getSampleString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint UScript::getScript(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getScript",
			"(I)I",
			arg0
		);
	}
	jint UScript::getScriptExtensions(jint arg0, java::util::BitSet arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getScriptExtensions",
			"(ILjava/util/BitSet;)I",
			arg0,
			arg1.object()
		);
	}
	jstring UScript::getShortName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getShortName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	android::icu::lang::UScript_ScriptUsage UScript::getUsage(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getUsage",
			"(I)Landroid/icu/lang/UScript$ScriptUsage;",
			arg0
		);
	}
	jboolean UScript::hasScript(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"hasScript",
			"(II)Z",
			arg0,
			arg1
		);
	}
	jboolean UScript::isCased(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"isCased",
			"(I)Z",
			arg0
		);
	}
	jboolean UScript::isRightToLeft(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"isRightToLeft",
			"(I)Z",
			arg0
		);
	}
} // namespace android::icu::lang

