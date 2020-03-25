#pragma once

#ifndef JAVA_LANG_CHARACTER_UNICODEBLOCK
#define JAVA_LANG_CHARACTER_UNICODEBLOCK

#include "../../__JniBaseClass.hpp"
#include "Character_Subset.hpp"


namespace __jni_impl::java::lang
{
	class Character_UnicodeBlock : public __jni_impl::java::lang::Character_Subset
	{
	public:
		// Fields
		static QAndroidJniObject BASIC_LATIN();
		static QAndroidJniObject LATIN_1_SUPPLEMENT();
		static QAndroidJniObject LATIN_EXTENDED_A();
		static QAndroidJniObject LATIN_EXTENDED_B();
		static QAndroidJniObject IPA_EXTENSIONS();
		static QAndroidJniObject SPACING_MODIFIER_LETTERS();
		static QAndroidJniObject COMBINING_DIACRITICAL_MARKS();
		static QAndroidJniObject GREEK();
		static QAndroidJniObject CYRILLIC();
		static QAndroidJniObject ARMENIAN();
		static QAndroidJniObject HEBREW();
		static QAndroidJniObject ARABIC();
		static QAndroidJniObject DEVANAGARI();
		static QAndroidJniObject BENGALI();
		static QAndroidJniObject GURMUKHI();
		static QAndroidJniObject GUJARATI();
		static QAndroidJniObject ORIYA();
		static QAndroidJniObject TAMIL();
		static QAndroidJniObject TELUGU();
		static QAndroidJniObject KANNADA();
		static QAndroidJniObject MALAYALAM();
		static QAndroidJniObject THAI();
		static QAndroidJniObject LAO();
		static QAndroidJniObject TIBETAN();
		static QAndroidJniObject GEORGIAN();
		static QAndroidJniObject HANGUL_JAMO();
		static QAndroidJniObject LATIN_EXTENDED_ADDITIONAL();
		static QAndroidJniObject GREEK_EXTENDED();
		static QAndroidJniObject GENERAL_PUNCTUATION();
		static QAndroidJniObject SUPERSCRIPTS_AND_SUBSCRIPTS();
		static QAndroidJniObject CURRENCY_SYMBOLS();
		static QAndroidJniObject COMBINING_MARKS_FOR_SYMBOLS();
		static QAndroidJniObject LETTERLIKE_SYMBOLS();
		static QAndroidJniObject NUMBER_FORMS();
		static QAndroidJniObject ARROWS();
		static QAndroidJniObject MATHEMATICAL_OPERATORS();
		static QAndroidJniObject MISCELLANEOUS_TECHNICAL();
		static QAndroidJniObject CONTROL_PICTURES();
		static QAndroidJniObject OPTICAL_CHARACTER_RECOGNITION();
		static QAndroidJniObject ENCLOSED_ALPHANUMERICS();
		static QAndroidJniObject BOX_DRAWING();
		static QAndroidJniObject BLOCK_ELEMENTS();
		static QAndroidJniObject GEOMETRIC_SHAPES();
		static QAndroidJniObject MISCELLANEOUS_SYMBOLS();
		static QAndroidJniObject DINGBATS();
		static QAndroidJniObject CJK_SYMBOLS_AND_PUNCTUATION();
		static QAndroidJniObject HIRAGANA();
		static QAndroidJniObject KATAKANA();
		static QAndroidJniObject BOPOMOFO();
		static QAndroidJniObject HANGUL_COMPATIBILITY_JAMO();
		static QAndroidJniObject KANBUN();
		static QAndroidJniObject ENCLOSED_CJK_LETTERS_AND_MONTHS();
		static QAndroidJniObject CJK_COMPATIBILITY();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS();
		static QAndroidJniObject HANGUL_SYLLABLES();
		static QAndroidJniObject PRIVATE_USE_AREA();
		static QAndroidJniObject CJK_COMPATIBILITY_IDEOGRAPHS();
		static QAndroidJniObject ALPHABETIC_PRESENTATION_FORMS();
		static QAndroidJniObject ARABIC_PRESENTATION_FORMS_A();
		static QAndroidJniObject COMBINING_HALF_MARKS();
		static QAndroidJniObject CJK_COMPATIBILITY_FORMS();
		static QAndroidJniObject SMALL_FORM_VARIANTS();
		static QAndroidJniObject ARABIC_PRESENTATION_FORMS_B();
		static QAndroidJniObject HALFWIDTH_AND_FULLWIDTH_FORMS();
		static QAndroidJniObject SPECIALS();
		static QAndroidJniObject SURROGATES_AREA();
		static QAndroidJniObject SYRIAC();
		static QAndroidJniObject THAANA();
		static QAndroidJniObject SINHALA();
		static QAndroidJniObject MYANMAR();
		static QAndroidJniObject ETHIOPIC();
		static QAndroidJniObject CHEROKEE();
		static QAndroidJniObject UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS();
		static QAndroidJniObject OGHAM();
		static QAndroidJniObject RUNIC();
		static QAndroidJniObject KHMER();
		static QAndroidJniObject MONGOLIAN();
		static QAndroidJniObject BRAILLE_PATTERNS();
		static QAndroidJniObject CJK_RADICALS_SUPPLEMENT();
		static QAndroidJniObject KANGXI_RADICALS();
		static QAndroidJniObject IDEOGRAPHIC_DESCRIPTION_CHARACTERS();
		static QAndroidJniObject BOPOMOFO_EXTENDED();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A();
		static QAndroidJniObject YI_SYLLABLES();
		static QAndroidJniObject YI_RADICALS();
		static QAndroidJniObject CYRILLIC_SUPPLEMENTARY();
		static QAndroidJniObject TAGALOG();
		static QAndroidJniObject HANUNOO();
		static QAndroidJniObject BUHID();
		static QAndroidJniObject TAGBANWA();
		static QAndroidJniObject LIMBU();
		static QAndroidJniObject TAI_LE();
		static QAndroidJniObject KHMER_SYMBOLS();
		static QAndroidJniObject PHONETIC_EXTENSIONS();
		static QAndroidJniObject MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A();
		static QAndroidJniObject SUPPLEMENTAL_ARROWS_A();
		static QAndroidJniObject SUPPLEMENTAL_ARROWS_B();
		static QAndroidJniObject MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B();
		static QAndroidJniObject SUPPLEMENTAL_MATHEMATICAL_OPERATORS();
		static QAndroidJniObject MISCELLANEOUS_SYMBOLS_AND_ARROWS();
		static QAndroidJniObject KATAKANA_PHONETIC_EXTENSIONS();
		static QAndroidJniObject YIJING_HEXAGRAM_SYMBOLS();
		static QAndroidJniObject VARIATION_SELECTORS();
		static QAndroidJniObject LINEAR_B_SYLLABARY();
		static QAndroidJniObject LINEAR_B_IDEOGRAMS();
		static QAndroidJniObject AEGEAN_NUMBERS();
		static QAndroidJniObject OLD_ITALIC();
		static QAndroidJniObject GOTHIC();
		static QAndroidJniObject UGARITIC();
		static QAndroidJniObject DESERET();
		static QAndroidJniObject SHAVIAN();
		static QAndroidJniObject OSMANYA();
		static QAndroidJniObject CYPRIOT_SYLLABARY();
		static QAndroidJniObject BYZANTINE_MUSICAL_SYMBOLS();
		static QAndroidJniObject MUSICAL_SYMBOLS();
		static QAndroidJniObject TAI_XUAN_JING_SYMBOLS();
		static QAndroidJniObject MATHEMATICAL_ALPHANUMERIC_SYMBOLS();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B();
		static QAndroidJniObject CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT();
		static QAndroidJniObject TAGS();
		static QAndroidJniObject VARIATION_SELECTORS_SUPPLEMENT();
		static QAndroidJniObject SUPPLEMENTARY_PRIVATE_USE_AREA_A();
		static QAndroidJniObject SUPPLEMENTARY_PRIVATE_USE_AREA_B();
		static QAndroidJniObject HIGH_SURROGATES();
		static QAndroidJniObject HIGH_PRIVATE_USE_SURROGATES();
		static QAndroidJniObject LOW_SURROGATES();
		static QAndroidJniObject ARABIC_SUPPLEMENT();
		static QAndroidJniObject NKO();
		static QAndroidJniObject SAMARITAN();
		static QAndroidJniObject MANDAIC();
		static QAndroidJniObject ETHIOPIC_SUPPLEMENT();
		static QAndroidJniObject UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED();
		static QAndroidJniObject NEW_TAI_LUE();
		static QAndroidJniObject BUGINESE();
		static QAndroidJniObject TAI_THAM();
		static QAndroidJniObject BALINESE();
		static QAndroidJniObject SUNDANESE();
		static QAndroidJniObject BATAK();
		static QAndroidJniObject LEPCHA();
		static QAndroidJniObject OL_CHIKI();
		static QAndroidJniObject VEDIC_EXTENSIONS();
		static QAndroidJniObject PHONETIC_EXTENSIONS_SUPPLEMENT();
		static QAndroidJniObject COMBINING_DIACRITICAL_MARKS_SUPPLEMENT();
		static QAndroidJniObject GLAGOLITIC();
		static QAndroidJniObject LATIN_EXTENDED_C();
		static QAndroidJniObject COPTIC();
		static QAndroidJniObject GEORGIAN_SUPPLEMENT();
		static QAndroidJniObject TIFINAGH();
		static QAndroidJniObject ETHIOPIC_EXTENDED();
		static QAndroidJniObject CYRILLIC_EXTENDED_A();
		static QAndroidJniObject SUPPLEMENTAL_PUNCTUATION();
		static QAndroidJniObject CJK_STROKES();
		static QAndroidJniObject LISU();
		static QAndroidJniObject VAI();
		static QAndroidJniObject CYRILLIC_EXTENDED_B();
		static QAndroidJniObject BAMUM();
		static QAndroidJniObject MODIFIER_TONE_LETTERS();
		static QAndroidJniObject LATIN_EXTENDED_D();
		static QAndroidJniObject SYLOTI_NAGRI();
		static QAndroidJniObject COMMON_INDIC_NUMBER_FORMS();
		static QAndroidJniObject PHAGS_PA();
		static QAndroidJniObject SAURASHTRA();
		static QAndroidJniObject DEVANAGARI_EXTENDED();
		static QAndroidJniObject KAYAH_LI();
		static QAndroidJniObject REJANG();
		static QAndroidJniObject HANGUL_JAMO_EXTENDED_A();
		static QAndroidJniObject JAVANESE();
		static QAndroidJniObject CHAM();
		static QAndroidJniObject MYANMAR_EXTENDED_A();
		static QAndroidJniObject TAI_VIET();
		static QAndroidJniObject ETHIOPIC_EXTENDED_A();
		static QAndroidJniObject MEETEI_MAYEK();
		static QAndroidJniObject HANGUL_JAMO_EXTENDED_B();
		static QAndroidJniObject VERTICAL_FORMS();
		static QAndroidJniObject ANCIENT_GREEK_NUMBERS();
		static QAndroidJniObject ANCIENT_SYMBOLS();
		static QAndroidJniObject PHAISTOS_DISC();
		static QAndroidJniObject LYCIAN();
		static QAndroidJniObject CARIAN();
		static QAndroidJniObject OLD_PERSIAN();
		static QAndroidJniObject IMPERIAL_ARAMAIC();
		static QAndroidJniObject PHOENICIAN();
		static QAndroidJniObject LYDIAN();
		static QAndroidJniObject KHAROSHTHI();
		static QAndroidJniObject OLD_SOUTH_ARABIAN();
		static QAndroidJniObject AVESTAN();
		static QAndroidJniObject INSCRIPTIONAL_PARTHIAN();
		static QAndroidJniObject INSCRIPTIONAL_PAHLAVI();
		static QAndroidJniObject OLD_TURKIC();
		static QAndroidJniObject RUMI_NUMERAL_SYMBOLS();
		static QAndroidJniObject BRAHMI();
		static QAndroidJniObject KAITHI();
		static QAndroidJniObject CUNEIFORM();
		static QAndroidJniObject CUNEIFORM_NUMBERS_AND_PUNCTUATION();
		static QAndroidJniObject EGYPTIAN_HIEROGLYPHS();
		static QAndroidJniObject BAMUM_SUPPLEMENT();
		static QAndroidJniObject KANA_SUPPLEMENT();
		static QAndroidJniObject ANCIENT_GREEK_MUSICAL_NOTATION();
		static QAndroidJniObject COUNTING_ROD_NUMERALS();
		static QAndroidJniObject MAHJONG_TILES();
		static QAndroidJniObject DOMINO_TILES();
		static QAndroidJniObject PLAYING_CARDS();
		static QAndroidJniObject ENCLOSED_ALPHANUMERIC_SUPPLEMENT();
		static QAndroidJniObject ENCLOSED_IDEOGRAPHIC_SUPPLEMENT();
		static QAndroidJniObject MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS();
		static QAndroidJniObject EMOTICONS();
		static QAndroidJniObject TRANSPORT_AND_MAP_SYMBOLS();
		static QAndroidJniObject ALCHEMICAL_SYMBOLS();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D();
		static QAndroidJniObject ARABIC_EXTENDED_A();
		static QAndroidJniObject SUNDANESE_SUPPLEMENT();
		static QAndroidJniObject MEETEI_MAYEK_EXTENSIONS();
		static QAndroidJniObject MEROITIC_HIEROGLYPHS();
		static QAndroidJniObject MEROITIC_CURSIVE();
		static QAndroidJniObject SORA_SOMPENG();
		static QAndroidJniObject CHAKMA();
		static QAndroidJniObject SHARADA();
		static QAndroidJniObject TAKRI();
		static QAndroidJniObject MIAO();
		static QAndroidJniObject ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS();
		static QAndroidJniObject COMBINING_DIACRITICAL_MARKS_EXTENDED();
		static QAndroidJniObject MYANMAR_EXTENDED_B();
		static QAndroidJniObject LATIN_EXTENDED_E();
		static QAndroidJniObject COPTIC_EPACT_NUMBERS();
		static QAndroidJniObject OLD_PERMIC();
		static QAndroidJniObject ELBASAN();
		static QAndroidJniObject CAUCASIAN_ALBANIAN();
		static QAndroidJniObject LINEAR_A();
		static QAndroidJniObject PALMYRENE();
		static QAndroidJniObject NABATAEAN();
		static QAndroidJniObject OLD_NORTH_ARABIAN();
		static QAndroidJniObject MANICHAEAN();
		static QAndroidJniObject PSALTER_PAHLAVI();
		static QAndroidJniObject MAHAJANI();
		static QAndroidJniObject SINHALA_ARCHAIC_NUMBERS();
		static QAndroidJniObject KHOJKI();
		static QAndroidJniObject KHUDAWADI();
		static QAndroidJniObject GRANTHA();
		static QAndroidJniObject TIRHUTA();
		static QAndroidJniObject SIDDHAM();
		static QAndroidJniObject MODI();
		static QAndroidJniObject WARANG_CITI();
		static QAndroidJniObject PAU_CIN_HAU();
		static QAndroidJniObject MRO();
		static QAndroidJniObject BASSA_VAH();
		static QAndroidJniObject PAHAWH_HMONG();
		static QAndroidJniObject DUPLOYAN();
		static QAndroidJniObject SHORTHAND_FORMAT_CONTROLS();
		static QAndroidJniObject MENDE_KIKAKUI();
		static QAndroidJniObject ORNAMENTAL_DINGBATS();
		static QAndroidJniObject GEOMETRIC_SHAPES_EXTENDED();
		static QAndroidJniObject SUPPLEMENTAL_ARROWS_C();
		static QAndroidJniObject CHEROKEE_SUPPLEMENT();
		static QAndroidJniObject HATRAN();
		static QAndroidJniObject OLD_HUNGARIAN();
		static QAndroidJniObject MULTANI();
		static QAndroidJniObject AHOM();
		static QAndroidJniObject EARLY_DYNASTIC_CUNEIFORM();
		static QAndroidJniObject ANATOLIAN_HIEROGLYPHS();
		static QAndroidJniObject SUTTON_SIGNWRITING();
		static QAndroidJniObject SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E();
		static QAndroidJniObject SYRIAC_SUPPLEMENT();
		static QAndroidJniObject CYRILLIC_EXTENDED_C();
		static QAndroidJniObject OSAGE();
		static QAndroidJniObject NEWA();
		static QAndroidJniObject MONGOLIAN_SUPPLEMENT();
		static QAndroidJniObject MARCHEN();
		static QAndroidJniObject IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION();
		static QAndroidJniObject TANGUT();
		static QAndroidJniObject TANGUT_COMPONENTS();
		static QAndroidJniObject KANA_EXTENDED_A();
		static QAndroidJniObject GLAGOLITIC_SUPPLEMENT();
		static QAndroidJniObject ADLAM();
		static QAndroidJniObject MASARAM_GONDI();
		static QAndroidJniObject ZANABAZAR_SQUARE();
		static QAndroidJniObject NUSHU();
		static QAndroidJniObject SOYOMBO();
		static QAndroidJniObject BHAIKSUKI();
		static QAndroidJniObject CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F();
		static QAndroidJniObject GEORGIAN_EXTENDED();
		static QAndroidJniObject HANIFI_ROHINGYA();
		static QAndroidJniObject OLD_SOGDIAN();
		static QAndroidJniObject SOGDIAN();
		static QAndroidJniObject DOGRA();
		static QAndroidJniObject GUNJALA_GONDI();
		static QAndroidJniObject MAKASAR();
		static QAndroidJniObject MEDEFAIDRIN();
		static QAndroidJniObject MAYAN_NUMERALS();
		static QAndroidJniObject INDIC_SIYAQ_NUMBERS();
		static QAndroidJniObject CHESS_SYMBOLS();
		static QAndroidJniObject ELYMAIC();
		static QAndroidJniObject NANDINAGARI();
		static QAndroidJniObject TAMIL_SUPPLEMENT();
		static QAndroidJniObject EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS();
		static QAndroidJniObject SMALL_KANA_EXTENSION();
		static QAndroidJniObject NYIAKENG_PUACHUE_HMONG();
		static QAndroidJniObject WANCHO();
		static QAndroidJniObject OTTOMAN_SIYAQ_NUMBERS();
		static QAndroidJniObject SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject forName(jstring arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject of(jchar arg0);
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject Character_UnicodeBlock::BASIC_LATIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BASIC_LATIN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_1_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_1_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::IPA_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"IPA_EXTENSIONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SPACING_MODIFIER_LETTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SPACING_MODIFIER_LETTERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMBINING_DIACRITICAL_MARKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMBINING_DIACRITICAL_MARKS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GREEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GREEK",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYRILLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYRILLIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARMENIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARMENIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HEBREW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HEBREW",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DEVANAGARI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DEVANAGARI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BENGALI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BENGALI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GURMUKHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GURMUKHI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GUJARATI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GUJARATI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ORIYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ORIYA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAMIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAMIL",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TELUGU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TELUGU",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KANNADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KANNADA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MALAYALAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MALAYALAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::THAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"THAI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LAO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LAO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TIBETAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TIBETAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GEORGIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GEORGIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANGUL_JAMO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANGUL_JAMO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_ADDITIONAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_ADDITIONAL",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GREEK_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GREEK_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GENERAL_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GENERAL_PUNCTUATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPERSCRIPTS_AND_SUBSCRIPTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPERSCRIPTS_AND_SUBSCRIPTS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CURRENCY_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CURRENCY_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMBINING_MARKS_FOR_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMBINING_MARKS_FOR_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LETTERLIKE_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LETTERLIKE_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NUMBER_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NUMBER_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARROWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARROWS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MATHEMATICAL_OPERATORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MATHEMATICAL_OPERATORS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_TECHNICAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_TECHNICAL",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CONTROL_PICTURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CONTROL_PICTURES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OPTICAL_CHARACTER_RECOGNITION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OPTICAL_CHARACTER_RECOGNITION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ENCLOSED_ALPHANUMERICS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ENCLOSED_ALPHANUMERICS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BOX_DRAWING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BOX_DRAWING",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BLOCK_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BLOCK_ELEMENTS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GEOMETRIC_SHAPES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GEOMETRIC_SHAPES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DINGBATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DINGBATS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_SYMBOLS_AND_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_SYMBOLS_AND_PUNCTUATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HIRAGANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HIRAGANA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KATAKANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KATAKANA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BOPOMOFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BOPOMOFO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANGUL_COMPATIBILITY_JAMO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANGUL_COMPATIBILITY_JAMO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KANBUN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KANBUN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ENCLOSED_CJK_LETTERS_AND_MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ENCLOSED_CJK_LETTERS_AND_MONTHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_COMPATIBILITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_COMPATIBILITY",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANGUL_SYLLABLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANGUL_SYLLABLES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PRIVATE_USE_AREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PRIVATE_USE_AREA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_COMPATIBILITY_IDEOGRAPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_COMPATIBILITY_IDEOGRAPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ALPHABETIC_PRESENTATION_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ALPHABETIC_PRESENTATION_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC_PRESENTATION_FORMS_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC_PRESENTATION_FORMS_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMBINING_HALF_MARKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMBINING_HALF_MARKS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_COMPATIBILITY_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_COMPATIBILITY_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SMALL_FORM_VARIANTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SMALL_FORM_VARIANTS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC_PRESENTATION_FORMS_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC_PRESENTATION_FORMS_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HALFWIDTH_AND_FULLWIDTH_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HALFWIDTH_AND_FULLWIDTH_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SPECIALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SPECIALS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SURROGATES_AREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SURROGATES_AREA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SYRIAC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SYRIAC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::THAANA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"THAANA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SINHALA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SINHALA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MYANMAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MYANMAR",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ETHIOPIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ETHIOPIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CHEROKEE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CHEROKEE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OGHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OGHAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::RUNIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"RUNIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KHMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KHMER",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MONGOLIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MONGOLIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BRAILLE_PATTERNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BRAILLE_PATTERNS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_RADICALS_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_RADICALS_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KANGXI_RADICALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KANGXI_RADICALS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::IDEOGRAPHIC_DESCRIPTION_CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"IDEOGRAPHIC_DESCRIPTION_CHARACTERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BOPOMOFO_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BOPOMOFO_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::YI_SYLLABLES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"YI_SYLLABLES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::YI_RADICALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"YI_RADICALS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYRILLIC_SUPPLEMENTARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYRILLIC_SUPPLEMENTARY",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAGALOG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAGALOG",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANUNOO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANUNOO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BUHID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BUHID",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAGBANWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAGBANWA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LIMBU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LIMBU",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAI_LE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAI_LE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KHMER_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KHMER_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PHONETIC_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PHONETIC_EXTENSIONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_ARROWS_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_ARROWS_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_ARROWS_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_ARROWS_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_MATHEMATICAL_OPERATORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_MATHEMATICAL_OPERATORS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_SYMBOLS_AND_ARROWS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_SYMBOLS_AND_ARROWS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KATAKANA_PHONETIC_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KATAKANA_PHONETIC_EXTENSIONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::YIJING_HEXAGRAM_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"YIJING_HEXAGRAM_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::VARIATION_SELECTORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"VARIATION_SELECTORS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LINEAR_B_SYLLABARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LINEAR_B_SYLLABARY",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LINEAR_B_IDEOGRAMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LINEAR_B_IDEOGRAMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::AEGEAN_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"AEGEAN_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_ITALIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_ITALIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GOTHIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GOTHIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::UGARITIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"UGARITIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DESERET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DESERET",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SHAVIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SHAVIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OSMANYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OSMANYA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYPRIOT_SYLLABARY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYPRIOT_SYLLABARY",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BYZANTINE_MUSICAL_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BYZANTINE_MUSICAL_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MUSICAL_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MUSICAL_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAI_XUAN_JING_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAI_XUAN_JING_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MATHEMATICAL_ALPHANUMERIC_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MATHEMATICAL_ALPHANUMERIC_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAGS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::VARIATION_SELECTORS_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"VARIATION_SELECTORS_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTARY_PRIVATE_USE_AREA_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTARY_PRIVATE_USE_AREA_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTARY_PRIVATE_USE_AREA_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTARY_PRIVATE_USE_AREA_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HIGH_SURROGATES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HIGH_SURROGATES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HIGH_PRIVATE_USE_SURROGATES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HIGH_PRIVATE_USE_SURROGATES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LOW_SURROGATES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LOW_SURROGATES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NKO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NKO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SAMARITAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SAMARITAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MANDAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MANDAIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ETHIOPIC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ETHIOPIC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NEW_TAI_LUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NEW_TAI_LUE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BUGINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BUGINESE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAI_THAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAI_THAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BALINESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BALINESE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUNDANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUNDANESE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BATAK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BATAK",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LEPCHA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LEPCHA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OL_CHIKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OL_CHIKI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::VEDIC_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"VEDIC_EXTENSIONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PHONETIC_EXTENSIONS_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PHONETIC_EXTENSIONS_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMBINING_DIACRITICAL_MARKS_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMBINING_DIACRITICAL_MARKS_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GLAGOLITIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GLAGOLITIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_C",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COPTIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COPTIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GEORGIAN_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GEORGIAN_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TIFINAGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TIFINAGH",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ETHIOPIC_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ETHIOPIC_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYRILLIC_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYRILLIC_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_PUNCTUATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_STROKES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_STROKES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LISU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LISU",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::VAI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"VAI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYRILLIC_EXTENDED_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYRILLIC_EXTENDED_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BAMUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BAMUM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MODIFIER_TONE_LETTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MODIFIER_TONE_LETTERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_D()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_D",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SYLOTI_NAGRI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SYLOTI_NAGRI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMMON_INDIC_NUMBER_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMMON_INDIC_NUMBER_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PHAGS_PA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PHAGS_PA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SAURASHTRA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SAURASHTRA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DEVANAGARI_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DEVANAGARI_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KAYAH_LI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KAYAH_LI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::REJANG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"REJANG",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANGUL_JAMO_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANGUL_JAMO_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::JAVANESE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"JAVANESE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CHAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MYANMAR_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MYANMAR_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAI_VIET()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAI_VIET",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ETHIOPIC_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ETHIOPIC_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MEETEI_MAYEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MEETEI_MAYEK",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANGUL_JAMO_EXTENDED_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANGUL_JAMO_EXTENDED_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::VERTICAL_FORMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"VERTICAL_FORMS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ANCIENT_GREEK_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ANCIENT_GREEK_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ANCIENT_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ANCIENT_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PHAISTOS_DISC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PHAISTOS_DISC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LYCIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LYCIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CARIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CARIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_PERSIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_PERSIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::IMPERIAL_ARAMAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"IMPERIAL_ARAMAIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PHOENICIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PHOENICIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LYDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LYDIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KHAROSHTHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KHAROSHTHI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_SOUTH_ARABIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_SOUTH_ARABIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::AVESTAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"AVESTAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::INSCRIPTIONAL_PARTHIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"INSCRIPTIONAL_PARTHIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::INSCRIPTIONAL_PAHLAVI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"INSCRIPTIONAL_PAHLAVI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_TURKIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_TURKIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::RUMI_NUMERAL_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"RUMI_NUMERAL_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BRAHMI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BRAHMI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KAITHI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KAITHI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CUNEIFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CUNEIFORM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CUNEIFORM_NUMBERS_AND_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CUNEIFORM_NUMBERS_AND_PUNCTUATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::EGYPTIAN_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"EGYPTIAN_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BAMUM_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BAMUM_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KANA_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KANA_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ANCIENT_GREEK_MUSICAL_NOTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ANCIENT_GREEK_MUSICAL_NOTATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COUNTING_ROD_NUMERALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COUNTING_ROD_NUMERALS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MAHJONG_TILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MAHJONG_TILES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DOMINO_TILES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DOMINO_TILES",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PLAYING_CARDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PLAYING_CARDS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ENCLOSED_ALPHANUMERIC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ENCLOSED_ALPHANUMERIC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ENCLOSED_IDEOGRAPHIC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ENCLOSED_IDEOGRAPHIC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::EMOTICONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"EMOTICONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TRANSPORT_AND_MAP_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TRANSPORT_AND_MAP_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ALCHEMICAL_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ALCHEMICAL_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUNDANESE_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUNDANESE_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MEETEI_MAYEK_EXTENSIONS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MEETEI_MAYEK_EXTENSIONS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MEROITIC_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MEROITIC_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MEROITIC_CURSIVE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MEROITIC_CURSIVE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SORA_SOMPENG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SORA_SOMPENG",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CHAKMA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CHAKMA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SHARADA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SHARADA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAKRI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAKRI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MIAO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MIAO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COMBINING_DIACRITICAL_MARKS_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COMBINING_DIACRITICAL_MARKS_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MYANMAR_EXTENDED_B()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MYANMAR_EXTENDED_B",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LATIN_EXTENDED_E()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LATIN_EXTENDED_E",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::COPTIC_EPACT_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"COPTIC_EPACT_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_PERMIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_PERMIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ELBASAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ELBASAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CAUCASIAN_ALBANIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CAUCASIAN_ALBANIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::LINEAR_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"LINEAR_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PALMYRENE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PALMYRENE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NABATAEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NABATAEAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_NORTH_ARABIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_NORTH_ARABIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MANICHAEAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MANICHAEAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PSALTER_PAHLAVI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PSALTER_PAHLAVI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MAHAJANI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MAHAJANI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SINHALA_ARCHAIC_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SINHALA_ARCHAIC_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KHOJKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KHOJKI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KHUDAWADI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KHUDAWADI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GRANTHA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GRANTHA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TIRHUTA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TIRHUTA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SIDDHAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SIDDHAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MODI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MODI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::WARANG_CITI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"WARANG_CITI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PAU_CIN_HAU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PAU_CIN_HAU",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MRO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MRO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BASSA_VAH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BASSA_VAH",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::PAHAWH_HMONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"PAHAWH_HMONG",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DUPLOYAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DUPLOYAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SHORTHAND_FORMAT_CONTROLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SHORTHAND_FORMAT_CONTROLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MENDE_KIKAKUI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MENDE_KIKAKUI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ORNAMENTAL_DINGBATS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ORNAMENTAL_DINGBATS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GEOMETRIC_SHAPES_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GEOMETRIC_SHAPES_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_ARROWS_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_ARROWS_C",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CHEROKEE_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CHEROKEE_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HATRAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HATRAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_HUNGARIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_HUNGARIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MULTANI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MULTANI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::AHOM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"AHOM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::EARLY_DYNASTIC_CUNEIFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"EARLY_DYNASTIC_CUNEIFORM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ANATOLIAN_HIEROGLYPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ANATOLIAN_HIEROGLYPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUTTON_SIGNWRITING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUTTON_SIGNWRITING",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SYRIAC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SYRIAC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CYRILLIC_EXTENDED_C()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CYRILLIC_EXTENDED_C",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OSAGE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NEWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NEWA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MONGOLIAN_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MONGOLIAN_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MARCHEN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MARCHEN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TANGUT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TANGUT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TANGUT_COMPONENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TANGUT_COMPONENTS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::KANA_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"KANA_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GLAGOLITIC_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GLAGOLITIC_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ADLAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ADLAM",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MASARAM_GONDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MASARAM_GONDI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ZANABAZAR_SQUARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ZANABAZAR_SQUARE",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NUSHU()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NUSHU",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SOYOMBO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SOYOMBO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::BHAIKSUKI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"BHAIKSUKI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GEORGIAN_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GEORGIAN_EXTENDED",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::HANIFI_ROHINGYA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"HANIFI_ROHINGYA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OLD_SOGDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OLD_SOGDIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SOGDIAN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SOGDIAN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::DOGRA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"DOGRA",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::GUNJALA_GONDI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"GUNJALA_GONDI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MAKASAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MAKASAR",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MEDEFAIDRIN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MEDEFAIDRIN",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::MAYAN_NUMERALS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"MAYAN_NUMERALS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::INDIC_SIYAQ_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"INDIC_SIYAQ_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::CHESS_SYMBOLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"CHESS_SYMBOLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::ELYMAIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"ELYMAIC",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NANDINAGARI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NANDINAGARI",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::TAMIL_SUPPLEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"TAMIL_SUPPLEMENT",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"EGYPTIAN_HIEROGLYPH_FORMAT_CONTROLS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SMALL_KANA_EXTENSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SMALL_KANA_EXTENSION",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::NYIAKENG_PUACHUE_HMONG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"NYIAKENG_PUACHUE_HMONG",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::WANCHO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"WANCHO",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::OTTOMAN_SIYAQ_NUMBERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"OTTOMAN_SIYAQ_NUMBERS",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	QAndroidJniObject Character_UnicodeBlock::SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.Character$UnicodeBlock",
			"SYMBOLS_AND_PICTOGRAPHS_EXTENDED_A",
			"Ljava/lang/Character$UnicodeBlock;");
	}
	
	// Constructors
	void Character_UnicodeBlock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Character$UnicodeBlock",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Character_UnicodeBlock::forName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeBlock",
			"forName",
			"(Ljava/lang/String;)Ljava/lang/Character$UnicodeBlock;",
			arg0);
	}
	QAndroidJniObject Character_UnicodeBlock::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeBlock",
			"of",
			"(I)Ljava/lang/Character$UnicodeBlock;",
			arg0);
	}
	QAndroidJniObject Character_UnicodeBlock::of(jchar arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Character$UnicodeBlock",
			"of",
			"(C)Ljava/lang/Character$UnicodeBlock;",
			arg0);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Character_UnicodeBlock : public __jni_impl::java::lang::Character_UnicodeBlock
	{
	public:
		Character_UnicodeBlock(QAndroidJniObject obj) { __thiz = obj; }
		Character_UnicodeBlock()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CHARACTER_UNICODEBLOCK

