#pragma once

#include "../../../JObject.hpp"

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
	class FontFamily_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontFamily_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily_Builder(QAndroidJniObject obj);
		
		// Constructors
		FontFamily_Builder(android::graphics::fonts::Font arg0);
		
		// Methods
		android::graphics::fonts::FontFamily_Builder addFont(android::graphics::fonts::Font arg0);
		android::graphics::fonts::FontFamily build();
	};
} // namespace android::graphics::fonts

