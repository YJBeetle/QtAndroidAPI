#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::fonts
{
	class Font;
}
namespace java::util
{
	class ArrayList;
}

namespace android::graphics::fonts
{
	class FontFamily : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontFamily(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::fonts::Font getFont(jint arg0);
		jint getSize();
	};
} // namespace android::graphics::fonts

