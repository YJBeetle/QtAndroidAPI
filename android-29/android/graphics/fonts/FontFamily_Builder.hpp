#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::fonts
{
	class Font;
}
namespace android::graphics::fonts
{
	class FontFamily;
}

namespace android::graphics::fonts
{
	class FontFamily_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontFamily_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily_Builder(QAndroidJniObject obj);
		
		// Constructors
		FontFamily_Builder(android::graphics::fonts::Font arg0);
		
		// Methods
		android::graphics::fonts::FontFamily_Builder addFont(android::graphics::fonts::Font arg0);
		android::graphics::fonts::FontFamily build();
	};
} // namespace android::graphics::fonts

