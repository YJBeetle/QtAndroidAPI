#pragma once

#include "../../../JIntArray.hpp"
#include "./UScript_ScriptUsage.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/BitSet.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./UScript.def.hpp"

namespace android::icu::lang
{
	// Fields
	inline jint UScript::ADLAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ADLAM"
		);
	}
	inline jint UScript::AFAKA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AFAKA"
		);
	}
	inline jint UScript::AHOM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AHOM"
		);
	}
	inline jint UScript::ANATOLIAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ANATOLIAN_HIEROGLYPHS"
		);
	}
	inline jint UScript::ARABIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ARABIC"
		);
	}
	inline jint UScript::ARMENIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ARMENIAN"
		);
	}
	inline jint UScript::AVESTAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"AVESTAN"
		);
	}
	inline jint UScript::BALINESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BALINESE"
		);
	}
	inline jint UScript::BAMUM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BAMUM"
		);
	}
	inline jint UScript::BASSA_VAH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BASSA_VAH"
		);
	}
	inline jint UScript::BATAK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BATAK"
		);
	}
	inline jint UScript::BENGALI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BENGALI"
		);
	}
	inline jint UScript::BHAIKSUKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BHAIKSUKI"
		);
	}
	inline jint UScript::BLISSYMBOLS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BLISSYMBOLS"
		);
	}
	inline jint UScript::BOOK_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BOOK_PAHLAVI"
		);
	}
	inline jint UScript::BOPOMOFO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BOPOMOFO"
		);
	}
	inline jint UScript::BRAHMI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BRAHMI"
		);
	}
	inline jint UScript::BRAILLE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BRAILLE"
		);
	}
	inline jint UScript::BUGINESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BUGINESE"
		);
	}
	inline jint UScript::BUHID()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"BUHID"
		);
	}
	inline jint UScript::CANADIAN_ABORIGINAL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CANADIAN_ABORIGINAL"
		);
	}
	inline jint UScript::CARIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CARIAN"
		);
	}
	inline jint UScript::CAUCASIAN_ALBANIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CAUCASIAN_ALBANIAN"
		);
	}
	inline jint UScript::CHAKMA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHAKMA"
		);
	}
	inline jint UScript::CHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHAM"
		);
	}
	inline jint UScript::CHEROKEE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHEROKEE"
		);
	}
	inline jint UScript::CHORASMIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CHORASMIAN"
		);
	}
	inline jint UScript::CIRTH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CIRTH"
		);
	}
	inline jint UScript::COMMON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"COMMON"
		);
	}
	inline jint UScript::COPTIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"COPTIC"
		);
	}
	inline jint UScript::CUNEIFORM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CUNEIFORM"
		);
	}
	inline jint UScript::CYPRIOT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CYPRIOT"
		);
	}
	inline jint UScript::CYRILLIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"CYRILLIC"
		);
	}
	inline jint UScript::DEMOTIC_EGYPTIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DEMOTIC_EGYPTIAN"
		);
	}
	inline jint UScript::DESERET()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DESERET"
		);
	}
	inline jint UScript::DEVANAGARI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DEVANAGARI"
		);
	}
	inline jint UScript::DIVES_AKURU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DIVES_AKURU"
		);
	}
	inline jint UScript::DOGRA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DOGRA"
		);
	}
	inline jint UScript::DUPLOYAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"DUPLOYAN"
		);
	}
	inline jint UScript::EASTERN_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"EASTERN_SYRIAC"
		);
	}
	inline jint UScript::EGYPTIAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"EGYPTIAN_HIEROGLYPHS"
		);
	}
	inline jint UScript::ELBASAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ELBASAN"
		);
	}
	inline jint UScript::ELYMAIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ELYMAIC"
		);
	}
	inline jint UScript::ESTRANGELO_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ESTRANGELO_SYRIAC"
		);
	}
	inline jint UScript::ETHIOPIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ETHIOPIC"
		);
	}
	inline jint UScript::GEORGIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GEORGIAN"
		);
	}
	inline jint UScript::GLAGOLITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GLAGOLITIC"
		);
	}
	inline jint UScript::GOTHIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GOTHIC"
		);
	}
	inline jint UScript::GRANTHA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GRANTHA"
		);
	}
	inline jint UScript::GREEK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GREEK"
		);
	}
	inline jint UScript::GUJARATI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GUJARATI"
		);
	}
	inline jint UScript::GUNJALA_GONDI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GUNJALA_GONDI"
		);
	}
	inline jint UScript::GURMUKHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"GURMUKHI"
		);
	}
	inline jint UScript::HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HAN"
		);
	}
	inline jint UScript::HANGUL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HANGUL"
		);
	}
	inline jint UScript::HANIFI_ROHINGYA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HANIFI_ROHINGYA"
		);
	}
	inline jint UScript::HANUNOO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HANUNOO"
		);
	}
	inline jint UScript::HAN_WITH_BOPOMOFO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HAN_WITH_BOPOMOFO"
		);
	}
	inline jint UScript::HARAPPAN_INDUS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HARAPPAN_INDUS"
		);
	}
	inline jint UScript::HATRAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HATRAN"
		);
	}
	inline jint UScript::HEBREW()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HEBREW"
		);
	}
	inline jint UScript::HIERATIC_EGYPTIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HIERATIC_EGYPTIAN"
		);
	}
	inline jint UScript::HIRAGANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"HIRAGANA"
		);
	}
	inline jint UScript::IMPERIAL_ARAMAIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"IMPERIAL_ARAMAIC"
		);
	}
	inline jint UScript::INHERITED()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INHERITED"
		);
	}
	inline jint UScript::INSCRIPTIONAL_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INSCRIPTIONAL_PAHLAVI"
		);
	}
	inline jint UScript::INSCRIPTIONAL_PARTHIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INSCRIPTIONAL_PARTHIAN"
		);
	}
	inline jint UScript::INVALID_CODE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"INVALID_CODE"
		);
	}
	inline jint UScript::JAMO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAMO"
		);
	}
	inline jint UScript::JAPANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAPANESE"
		);
	}
	inline jint UScript::JAVANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JAVANESE"
		);
	}
	inline jint UScript::JURCHEN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"JURCHEN"
		);
	}
	inline jint UScript::KAITHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KAITHI"
		);
	}
	inline jint UScript::KANNADA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KANNADA"
		);
	}
	inline jint UScript::KATAKANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KATAKANA"
		);
	}
	inline jint UScript::KATAKANA_OR_HIRAGANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KATAKANA_OR_HIRAGANA"
		);
	}
	inline jint UScript::KAYAH_LI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KAYAH_LI"
		);
	}
	inline jint UScript::KHAROSHTHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHAROSHTHI"
		);
	}
	inline jint UScript::KHITAN_SMALL_SCRIPT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHITAN_SMALL_SCRIPT"
		);
	}
	inline jint UScript::KHMER()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHMER"
		);
	}
	inline jint UScript::KHOJKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHOJKI"
		);
	}
	inline jint UScript::KHUDAWADI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHUDAWADI"
		);
	}
	inline jint UScript::KHUTSURI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KHUTSURI"
		);
	}
	inline jint UScript::KOREAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KOREAN"
		);
	}
	inline jint UScript::KPELLE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"KPELLE"
		);
	}
	inline jint UScript::LANNA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LANNA"
		);
	}
	inline jint UScript::LAO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LAO"
		);
	}
	inline jint UScript::LATIN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN"
		);
	}
	inline jint UScript::LATIN_FRAKTUR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN_FRAKTUR"
		);
	}
	inline jint UScript::LATIN_GAELIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LATIN_GAELIC"
		);
	}
	inline jint UScript::LEPCHA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LEPCHA"
		);
	}
	inline jint UScript::LIMBU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LIMBU"
		);
	}
	inline jint UScript::LINEAR_A()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LINEAR_A"
		);
	}
	inline jint UScript::LINEAR_B()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LINEAR_B"
		);
	}
	inline jint UScript::LISU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LISU"
		);
	}
	inline jint UScript::LOMA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LOMA"
		);
	}
	inline jint UScript::LYCIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LYCIAN"
		);
	}
	inline jint UScript::LYDIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"LYDIAN"
		);
	}
	inline jint UScript::MAHAJANI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MAHAJANI"
		);
	}
	inline jint UScript::MAKASAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MAKASAR"
		);
	}
	inline jint UScript::MALAYALAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MALAYALAM"
		);
	}
	inline jint UScript::MANDAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANDAEAN"
		);
	}
	inline jint UScript::MANDAIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANDAIC"
		);
	}
	inline jint UScript::MANICHAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MANICHAEAN"
		);
	}
	inline jint UScript::MARCHEN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MARCHEN"
		);
	}
	inline jint UScript::MASARAM_GONDI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MASARAM_GONDI"
		);
	}
	inline jint UScript::MATHEMATICAL_NOTATION()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MATHEMATICAL_NOTATION"
		);
	}
	inline jint UScript::MAYAN_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MAYAN_HIEROGLYPHS"
		);
	}
	inline jint UScript::MEDEFAIDRIN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEDEFAIDRIN"
		);
	}
	inline jint UScript::MEITEI_MAYEK()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEITEI_MAYEK"
		);
	}
	inline jint UScript::MENDE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MENDE"
		);
	}
	inline jint UScript::MEROITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC"
		);
	}
	inline jint UScript::MEROITIC_CURSIVE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC_CURSIVE"
		);
	}
	inline jint UScript::MEROITIC_HIEROGLYPHS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MEROITIC_HIEROGLYPHS"
		);
	}
	inline jint UScript::MIAO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MIAO"
		);
	}
	inline jint UScript::MODI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MODI"
		);
	}
	inline jint UScript::MONGOLIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MONGOLIAN"
		);
	}
	inline jint UScript::MOON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MOON"
		);
	}
	inline jint UScript::MRO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MRO"
		);
	}
	inline jint UScript::MULTANI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MULTANI"
		);
	}
	inline jint UScript::MYANMAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"MYANMAR"
		);
	}
	inline jint UScript::NABATAEAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NABATAEAN"
		);
	}
	inline jint UScript::NAKHI_GEBA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NAKHI_GEBA"
		);
	}
	inline jint UScript::NANDINAGARI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NANDINAGARI"
		);
	}
	inline jint UScript::NEWA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NEWA"
		);
	}
	inline jint UScript::NEW_TAI_LUE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NEW_TAI_LUE"
		);
	}
	inline jint UScript::NKO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NKO"
		);
	}
	inline jint UScript::NUSHU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NUSHU"
		);
	}
	inline jint UScript::NYIAKENG_PUACHUE_HMONG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"NYIAKENG_PUACHUE_HMONG"
		);
	}
	inline jint UScript::OGHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OGHAM"
		);
	}
	inline jint UScript::OLD_CHURCH_SLAVONIC_CYRILLIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_CHURCH_SLAVONIC_CYRILLIC"
		);
	}
	inline jint UScript::OLD_HUNGARIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_HUNGARIAN"
		);
	}
	inline jint UScript::OLD_ITALIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_ITALIC"
		);
	}
	inline jint UScript::OLD_NORTH_ARABIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_NORTH_ARABIAN"
		);
	}
	inline jint UScript::OLD_PERMIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_PERMIC"
		);
	}
	inline jint UScript::OLD_PERSIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_PERSIAN"
		);
	}
	inline jint UScript::OLD_SOGDIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_SOGDIAN"
		);
	}
	inline jint UScript::OLD_SOUTH_ARABIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OLD_SOUTH_ARABIAN"
		);
	}
	inline jint UScript::OL_CHIKI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OL_CHIKI"
		);
	}
	inline jint UScript::ORIYA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ORIYA"
		);
	}
	inline jint UScript::ORKHON()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ORKHON"
		);
	}
	inline jint UScript::OSAGE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OSAGE"
		);
	}
	inline jint UScript::OSMANYA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"OSMANYA"
		);
	}
	inline jint UScript::PAHAWH_HMONG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PAHAWH_HMONG"
		);
	}
	inline jint UScript::PALMYRENE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PALMYRENE"
		);
	}
	inline jint UScript::PAU_CIN_HAU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PAU_CIN_HAU"
		);
	}
	inline jint UScript::PHAGS_PA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHAGS_PA"
		);
	}
	inline jint UScript::PHOENICIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHOENICIAN"
		);
	}
	inline jint UScript::PHONETIC_POLLARD()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PHONETIC_POLLARD"
		);
	}
	inline jint UScript::PSALTER_PAHLAVI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"PSALTER_PAHLAVI"
		);
	}
	inline jint UScript::REJANG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"REJANG"
		);
	}
	inline jint UScript::RONGORONGO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"RONGORONGO"
		);
	}
	inline jint UScript::RUNIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"RUNIC"
		);
	}
	inline jint UScript::SAMARITAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SAMARITAN"
		);
	}
	inline jint UScript::SARATI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SARATI"
		);
	}
	inline jint UScript::SAURASHTRA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SAURASHTRA"
		);
	}
	inline jint UScript::SHARADA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SHARADA"
		);
	}
	inline jint UScript::SHAVIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SHAVIAN"
		);
	}
	inline jint UScript::SIDDHAM()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIDDHAM"
		);
	}
	inline jint UScript::SIGN_WRITING()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIGN_WRITING"
		);
	}
	inline jint UScript::SIMPLIFIED_HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SIMPLIFIED_HAN"
		);
	}
	inline jint UScript::SINDHI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SINDHI"
		);
	}
	inline jint UScript::SINHALA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SINHALA"
		);
	}
	inline jint UScript::SOGDIAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SOGDIAN"
		);
	}
	inline jint UScript::SORA_SOMPENG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SORA_SOMPENG"
		);
	}
	inline jint UScript::SOYOMBO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SOYOMBO"
		);
	}
	inline jint UScript::SUNDANESE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SUNDANESE"
		);
	}
	inline jint UScript::SYLOTI_NAGRI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYLOTI_NAGRI"
		);
	}
	inline jint UScript::SYMBOLS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYMBOLS"
		);
	}
	inline jint UScript::SYMBOLS_EMOJI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYMBOLS_EMOJI"
		);
	}
	inline jint UScript::SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"SYRIAC"
		);
	}
	inline jint UScript::TAGALOG()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAGALOG"
		);
	}
	inline jint UScript::TAGBANWA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAGBANWA"
		);
	}
	inline jint UScript::TAI_LE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAI_LE"
		);
	}
	inline jint UScript::TAI_VIET()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAI_VIET"
		);
	}
	inline jint UScript::TAKRI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAKRI"
		);
	}
	inline jint UScript::TAMIL()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TAMIL"
		);
	}
	inline jint UScript::TANGUT()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TANGUT"
		);
	}
	inline jint UScript::TELUGU()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TELUGU"
		);
	}
	inline jint UScript::TENGWAR()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TENGWAR"
		);
	}
	inline jint UScript::THAANA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"THAANA"
		);
	}
	inline jint UScript::THAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"THAI"
		);
	}
	inline jint UScript::TIBETAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIBETAN"
		);
	}
	inline jint UScript::TIFINAGH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIFINAGH"
		);
	}
	inline jint UScript::TIRHUTA()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TIRHUTA"
		);
	}
	inline jint UScript::TRADITIONAL_HAN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"TRADITIONAL_HAN"
		);
	}
	inline jint UScript::UCAS()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UCAS"
		);
	}
	inline jint UScript::UGARITIC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UGARITIC"
		);
	}
	inline jint UScript::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UNKNOWN"
		);
	}
	inline jint UScript::UNWRITTEN_LANGUAGES()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"UNWRITTEN_LANGUAGES"
		);
	}
	inline jint UScript::VAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"VAI"
		);
	}
	inline jint UScript::VISIBLE_SPEECH()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"VISIBLE_SPEECH"
		);
	}
	inline jint UScript::WANCHO()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WANCHO"
		);
	}
	inline jint UScript::WARANG_CITI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WARANG_CITI"
		);
	}
	inline jint UScript::WESTERN_SYRIAC()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WESTERN_SYRIAC"
		);
	}
	inline jint UScript::WOLEAI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"WOLEAI"
		);
	}
	inline jint UScript::YEZIDI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"YEZIDI"
		);
	}
	inline jint UScript::YI()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"YI"
		);
	}
	inline jint UScript::ZANABAZAR_SQUARE()
	{
		return getStaticField<jint>(
			"android.icu.lang.UScript",
			"ZANABAZAR_SQUARE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean UScript::breaksBetweenLetters(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"breaksBetweenLetters",
			"(I)Z",
			arg0
		);
	}
	inline JIntArray UScript::getCode(android::icu::util::ULocale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Landroid/icu/util/ULocale;)[I",
			arg0.object()
		);
	}
	inline JIntArray UScript::getCode(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Ljava/lang/String;)[I",
			arg0.object<jstring>()
		);
	}
	inline JIntArray UScript::getCode(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getCode",
			"(Ljava/util/Locale;)[I",
			arg0.object()
		);
	}
	inline jint UScript::getCodeFromName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getCodeFromName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString UScript::getName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline JString UScript::getSampleString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getSampleString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint UScript::getScript(jint arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getScript",
			"(I)I",
			arg0
		);
	}
	inline jint UScript::getScriptExtensions(jint arg0, java::util::BitSet arg1)
	{
		return callStaticMethod<jint>(
			"android.icu.lang.UScript",
			"getScriptExtensions",
			"(ILjava/util/BitSet;)I",
			arg0,
			arg1.object()
		);
	}
	inline JString UScript::getShortName(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getShortName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline android::icu::lang::UScript_ScriptUsage UScript::getUsage(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UScript",
			"getUsage",
			"(I)Landroid/icu/lang/UScript$ScriptUsage;",
			arg0
		);
	}
	inline jboolean UScript::hasScript(jint arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"hasScript",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jboolean UScript::isCased(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"isCased",
			"(I)Z",
			arg0
		);
	}
	inline jboolean UScript::isRightToLeft(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.icu.lang.UScript",
			"isRightToLeft",
			"(I)Z",
			arg0
		);
	}
} // namespace android::icu::lang

// Base class headers

