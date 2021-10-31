#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_Named : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ACES();
		static QAndroidJniObject ACESCG();
		static QAndroidJniObject ADOBE_RGB();
		static QAndroidJniObject BT2020();
		static QAndroidJniObject BT709();
		static QAndroidJniObject CIE_LAB();
		static QAndroidJniObject CIE_XYZ();
		static QAndroidJniObject DCI_P3();
		static QAndroidJniObject DISPLAY_P3();
		static QAndroidJniObject EXTENDED_SRGB();
		static QAndroidJniObject LINEAR_EXTENDED_SRGB();
		static QAndroidJniObject LINEAR_SRGB();
		static QAndroidJniObject NTSC_1953();
		static QAndroidJniObject PRO_PHOTO_RGB();
		static QAndroidJniObject SMPTE_C();
		static QAndroidJniObject SRGB();
		
		ColorSpace_Named(QAndroidJniObject obj);
		// Constructors
		ColorSpace_Named() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

