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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface_CustomFallbackBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface_CustomFallbackBuilder(QAndroidJniObject obj);
		
		// Constructors
		Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily arg0);
		
		// Methods
		static jint getMaxCustomFallbackCount();
		QAndroidJniObject addCustomFallback(android::graphics::fonts::FontFamily arg0);
		QAndroidJniObject build();
		QAndroidJniObject setStyle(android::graphics::fonts::FontStyle arg0);
		QAndroidJniObject setSystemFallback(jstring arg0);
	};
} // namespace android::graphics

