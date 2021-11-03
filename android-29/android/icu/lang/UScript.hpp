#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::icu::lang
{
	class UScript_ScriptUsage;
}
namespace android::icu::util
{
	class ULocale;
}
class JString;
namespace java::util
{
	class BitSet;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::lang
{
	class UScript : public JObject
	{
	public:
		// Fields
		static jint ADLAM();
		static jint AFAKA();
		static jint AHOM();
		static jint ANATOLIAN_HIEROGLYPHS();
		static jint ARABIC();
		static jint ARMENIAN();
		static jint AVESTAN();
		static jint BALINESE();
		static jint BAMUM();
		static jint BASSA_VAH();
		static jint BATAK();
		static jint BENGALI();
		static jint BHAIKSUKI();
		static jint BLISSYMBOLS();
		static jint BOOK_PAHLAVI();
		static jint BOPOMOFO();
		static jint BRAHMI();
		static jint BRAILLE();
		static jint BUGINESE();
		static jint BUHID();
		static jint CANADIAN_ABORIGINAL();
		static jint CARIAN();
		static jint CAUCASIAN_ALBANIAN();
		static jint CHAKMA();
		static jint CHAM();
		static jint CHEROKEE();
		static jint CIRTH();
		static jint COMMON();
		static jint COPTIC();
		static jint CUNEIFORM();
		static jint CYPRIOT();
		static jint CYRILLIC();
		static jint DEMOTIC_EGYPTIAN();
		static jint DESERET();
		static jint DEVANAGARI();
		static jint DOGRA();
		static jint DUPLOYAN();
		static jint EASTERN_SYRIAC();
		static jint EGYPTIAN_HIEROGLYPHS();
		static jint ELBASAN();
		static jint ESTRANGELO_SYRIAC();
		static jint ETHIOPIC();
		static jint GEORGIAN();
		static jint GLAGOLITIC();
		static jint GOTHIC();
		static jint GRANTHA();
		static jint GREEK();
		static jint GUJARATI();
		static jint GUNJALA_GONDI();
		static jint GURMUKHI();
		static jint HAN();
		static jint HANGUL();
		static jint HANIFI_ROHINGYA();
		static jint HANUNOO();
		static jint HAN_WITH_BOPOMOFO();
		static jint HARAPPAN_INDUS();
		static jint HATRAN();
		static jint HEBREW();
		static jint HIERATIC_EGYPTIAN();
		static jint HIRAGANA();
		static jint IMPERIAL_ARAMAIC();
		static jint INHERITED();
		static jint INSCRIPTIONAL_PAHLAVI();
		static jint INSCRIPTIONAL_PARTHIAN();
		static jint INVALID_CODE();
		static jint JAMO();
		static jint JAPANESE();
		static jint JAVANESE();
		static jint JURCHEN();
		static jint KAITHI();
		static jint KANNADA();
		static jint KATAKANA();
		static jint KATAKANA_OR_HIRAGANA();
		static jint KAYAH_LI();
		static jint KHAROSHTHI();
		static jint KHMER();
		static jint KHOJKI();
		static jint KHUDAWADI();
		static jint KHUTSURI();
		static jint KOREAN();
		static jint KPELLE();
		static jint LANNA();
		static jint LAO();
		static jint LATIN();
		static jint LATIN_FRAKTUR();
		static jint LATIN_GAELIC();
		static jint LEPCHA();
		static jint LIMBU();
		static jint LINEAR_A();
		static jint LINEAR_B();
		static jint LISU();
		static jint LOMA();
		static jint LYCIAN();
		static jint LYDIAN();
		static jint MAHAJANI();
		static jint MAKASAR();
		static jint MALAYALAM();
		static jint MANDAEAN();
		static jint MANDAIC();
		static jint MANICHAEAN();
		static jint MARCHEN();
		static jint MASARAM_GONDI();
		static jint MATHEMATICAL_NOTATION();
		static jint MAYAN_HIEROGLYPHS();
		static jint MEDEFAIDRIN();
		static jint MEITEI_MAYEK();
		static jint MENDE();
		static jint MEROITIC();
		static jint MEROITIC_CURSIVE();
		static jint MEROITIC_HIEROGLYPHS();
		static jint MIAO();
		static jint MODI();
		static jint MONGOLIAN();
		static jint MOON();
		static jint MRO();
		static jint MULTANI();
		static jint MYANMAR();
		static jint NABATAEAN();
		static jint NAKHI_GEBA();
		static jint NEWA();
		static jint NEW_TAI_LUE();
		static jint NKO();
		static jint NUSHU();
		static jint OGHAM();
		static jint OLD_CHURCH_SLAVONIC_CYRILLIC();
		static jint OLD_HUNGARIAN();
		static jint OLD_ITALIC();
		static jint OLD_NORTH_ARABIAN();
		static jint OLD_PERMIC();
		static jint OLD_PERSIAN();
		static jint OLD_SOGDIAN();
		static jint OLD_SOUTH_ARABIAN();
		static jint OL_CHIKI();
		static jint ORIYA();
		static jint ORKHON();
		static jint OSAGE();
		static jint OSMANYA();
		static jint PAHAWH_HMONG();
		static jint PALMYRENE();
		static jint PAU_CIN_HAU();
		static jint PHAGS_PA();
		static jint PHOENICIAN();
		static jint PHONETIC_POLLARD();
		static jint PSALTER_PAHLAVI();
		static jint REJANG();
		static jint RONGORONGO();
		static jint RUNIC();
		static jint SAMARITAN();
		static jint SARATI();
		static jint SAURASHTRA();
		static jint SHARADA();
		static jint SHAVIAN();
		static jint SIDDHAM();
		static jint SIGN_WRITING();
		static jint SIMPLIFIED_HAN();
		static jint SINDHI();
		static jint SINHALA();
		static jint SOGDIAN();
		static jint SORA_SOMPENG();
		static jint SOYOMBO();
		static jint SUNDANESE();
		static jint SYLOTI_NAGRI();
		static jint SYMBOLS();
		static jint SYMBOLS_EMOJI();
		static jint SYRIAC();
		static jint TAGALOG();
		static jint TAGBANWA();
		static jint TAI_LE();
		static jint TAI_VIET();
		static jint TAKRI();
		static jint TAMIL();
		static jint TANGUT();
		static jint TELUGU();
		static jint TENGWAR();
		static jint THAANA();
		static jint THAI();
		static jint TIBETAN();
		static jint TIFINAGH();
		static jint TIRHUTA();
		static jint TRADITIONAL_HAN();
		static jint UCAS();
		static jint UGARITIC();
		static jint UNKNOWN();
		static jint UNWRITTEN_LANGUAGES();
		static jint VAI();
		static jint VISIBLE_SPEECH();
		static jint WARANG_CITI();
		static jint WESTERN_SYRIAC();
		static jint WOLEAI();
		static jint YI();
		static jint ZANABAZAR_SQUARE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UScript(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UScript(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean breaksBetweenLetters(jint arg0);
		static JIntArray getCode(android::icu::util::ULocale arg0);
		static JIntArray getCode(JString arg0);
		static JIntArray getCode(java::util::Locale arg0);
		static jint getCodeFromName(JString arg0);
		static JString getName(jint arg0);
		static JString getSampleString(jint arg0);
		static jint getScript(jint arg0);
		static jint getScriptExtensions(jint arg0, java::util::BitSet arg1);
		static JString getShortName(jint arg0);
		static android::icu::lang::UScript_ScriptUsage getUsage(jint arg0);
		static jboolean hasScript(jint arg0, jint arg1);
		static jboolean isCased(jint arg0);
		static jboolean isRightToLeft(jint arg0);
	};
} // namespace android::icu::lang

