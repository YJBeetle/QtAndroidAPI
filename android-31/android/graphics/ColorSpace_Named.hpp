#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_Named : public java::lang::Enum
	{
	public:
		// Fields
		static android::graphics::ColorSpace_Named ACES();
		static android::graphics::ColorSpace_Named ACESCG();
		static android::graphics::ColorSpace_Named ADOBE_RGB();
		static android::graphics::ColorSpace_Named BT2020();
		static android::graphics::ColorSpace_Named BT709();
		static android::graphics::ColorSpace_Named CIE_LAB();
		static android::graphics::ColorSpace_Named CIE_XYZ();
		static android::graphics::ColorSpace_Named DCI_P3();
		static android::graphics::ColorSpace_Named DISPLAY_P3();
		static android::graphics::ColorSpace_Named EXTENDED_SRGB();
		static android::graphics::ColorSpace_Named LINEAR_EXTENDED_SRGB();
		static android::graphics::ColorSpace_Named LINEAR_SRGB();
		static android::graphics::ColorSpace_Named NTSC_1953();
		static android::graphics::ColorSpace_Named PRO_PHOTO_RGB();
		static android::graphics::ColorSpace_Named SMPTE_C();
		static android::graphics::ColorSpace_Named SRGB();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Named(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Named(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::ColorSpace_Named valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

