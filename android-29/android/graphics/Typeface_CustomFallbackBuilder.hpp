#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Typeface;
}
namespace android::graphics::fonts
{
	class FontFamily;
}
namespace android::graphics::fonts
{
	class FontStyle;
}

namespace android::graphics
{
	class Typeface_CustomFallbackBuilder : public __JniBaseClass
	{
	public:
		// Fields
		
		Typeface_CustomFallbackBuilder(QAndroidJniObject obj);
		// Constructors
		Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily arg0);
		Typeface_CustomFallbackBuilder() = default;
		
		// Methods
		static jint getMaxCustomFallbackCount();
		QAndroidJniObject addCustomFallback(android::graphics::fonts::FontFamily arg0);
		QAndroidJniObject build();
		QAndroidJniObject setStyle(android::graphics::fonts::FontStyle arg0);
		QAndroidJniObject setSystemFallback(jstring arg0);
	};
} // namespace android::graphics

