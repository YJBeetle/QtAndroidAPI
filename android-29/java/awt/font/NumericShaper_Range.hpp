#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::awt::font
{
	class NumericShaper_Range : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ARABIC();
		static QAndroidJniObject BALINESE();
		static QAndroidJniObject BENGALI();
		static QAndroidJniObject CHAM();
		static QAndroidJniObject DEVANAGARI();
		static QAndroidJniObject EASTERN_ARABIC();
		static QAndroidJniObject ETHIOPIC();
		static QAndroidJniObject EUROPEAN();
		static QAndroidJniObject GUJARATI();
		static QAndroidJniObject GURMUKHI();
		static QAndroidJniObject JAVANESE();
		static QAndroidJniObject KANNADA();
		static QAndroidJniObject KAYAH_LI();
		static QAndroidJniObject KHMER();
		static QAndroidJniObject LAO();
		static QAndroidJniObject LEPCHA();
		static QAndroidJniObject LIMBU();
		static QAndroidJniObject MALAYALAM();
		static QAndroidJniObject MEETEI_MAYEK();
		static QAndroidJniObject MONGOLIAN();
		static QAndroidJniObject MYANMAR();
		static QAndroidJniObject MYANMAR_SHAN();
		static QAndroidJniObject MYANMAR_TAI_LAING();
		static QAndroidJniObject NEW_TAI_LUE();
		static QAndroidJniObject NKO();
		static QAndroidJniObject OL_CHIKI();
		static QAndroidJniObject ORIYA();
		static QAndroidJniObject SAURASHTRA();
		static QAndroidJniObject SINHALA();
		static QAndroidJniObject SUNDANESE();
		static QAndroidJniObject TAI_THAM_HORA();
		static QAndroidJniObject TAI_THAM_THAM();
		static QAndroidJniObject TAMIL();
		static QAndroidJniObject TELUGU();
		static QAndroidJniObject THAI();
		static QAndroidJniObject TIBETAN();
		static QAndroidJniObject VAI();
		
		NumericShaper_Range(QAndroidJniObject obj);
		// Constructors
		NumericShaper_Range() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::awt::font

