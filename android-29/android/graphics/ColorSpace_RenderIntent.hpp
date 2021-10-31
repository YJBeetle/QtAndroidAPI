#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_RenderIntent : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ABSOLUTE();
		static QAndroidJniObject PERCEPTUAL();
		static QAndroidJniObject RELATIVE();
		static QAndroidJniObject SATURATION();
		
		ColorSpace_RenderIntent(QAndroidJniObject obj);
		// Constructors
		ColorSpace_RenderIntent() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

