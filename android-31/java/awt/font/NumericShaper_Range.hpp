#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::awt::font
{
	class NumericShaper_Range : public java::lang::Enum
	{
	public:
		// Fields
		static java::awt::font::NumericShaper_Range ARABIC();
		static java::awt::font::NumericShaper_Range BALINESE();
		static java::awt::font::NumericShaper_Range BENGALI();
		static java::awt::font::NumericShaper_Range CHAM();
		static java::awt::font::NumericShaper_Range DEVANAGARI();
		static java::awt::font::NumericShaper_Range EASTERN_ARABIC();
		static java::awt::font::NumericShaper_Range ETHIOPIC();
		static java::awt::font::NumericShaper_Range EUROPEAN();
		static java::awt::font::NumericShaper_Range GUJARATI();
		static java::awt::font::NumericShaper_Range GURMUKHI();
		static java::awt::font::NumericShaper_Range JAVANESE();
		static java::awt::font::NumericShaper_Range KANNADA();
		static java::awt::font::NumericShaper_Range KAYAH_LI();
		static java::awt::font::NumericShaper_Range KHMER();
		static java::awt::font::NumericShaper_Range LAO();
		static java::awt::font::NumericShaper_Range LEPCHA();
		static java::awt::font::NumericShaper_Range LIMBU();
		static java::awt::font::NumericShaper_Range MALAYALAM();
		static java::awt::font::NumericShaper_Range MEETEI_MAYEK();
		static java::awt::font::NumericShaper_Range MONGOLIAN();
		static java::awt::font::NumericShaper_Range MYANMAR();
		static java::awt::font::NumericShaper_Range MYANMAR_SHAN();
		static java::awt::font::NumericShaper_Range MYANMAR_TAI_LAING();
		static java::awt::font::NumericShaper_Range NEW_TAI_LUE();
		static java::awt::font::NumericShaper_Range NKO();
		static java::awt::font::NumericShaper_Range OL_CHIKI();
		static java::awt::font::NumericShaper_Range ORIYA();
		static java::awt::font::NumericShaper_Range SAURASHTRA();
		static java::awt::font::NumericShaper_Range SINHALA();
		static java::awt::font::NumericShaper_Range SUNDANESE();
		static java::awt::font::NumericShaper_Range TAI_THAM_HORA();
		static java::awt::font::NumericShaper_Range TAI_THAM_THAM();
		static java::awt::font::NumericShaper_Range TAMIL();
		static java::awt::font::NumericShaper_Range TELUGU();
		static java::awt::font::NumericShaper_Range THAI();
		static java::awt::font::NumericShaper_Range TIBETAN();
		static java::awt::font::NumericShaper_Range VAI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NumericShaper_Range(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		NumericShaper_Range(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::awt::font::NumericShaper_Range valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::awt::font

