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
		
		// QJniObject forward
		template<typename ...Ts> explicit Typeface_CustomFallbackBuilder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface_CustomFallbackBuilder(QJniObject obj);
		
		// Constructors
		Typeface_CustomFallbackBuilder(android::graphics::fonts::FontFamily arg0);
		
		// Methods
		static jint getMaxCustomFallbackCount();
		android::graphics::Typeface_CustomFallbackBuilder addCustomFallback(android::graphics::fonts::FontFamily arg0);
		android::graphics::Typeface build();
		android::graphics::Typeface_CustomFallbackBuilder setStyle(android::graphics::fonts::FontStyle arg0);
		android::graphics::Typeface_CustomFallbackBuilder setSystemFallback(jstring arg0);
	};
} // namespace android::graphics

