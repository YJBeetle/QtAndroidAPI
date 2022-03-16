#pragma once

#include "../../../JObject.hpp"

namespace android::graphics::fonts
{
	class Font;
}

namespace android::graphics::fonts
{
	class FontFamily : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontFamily(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::fonts::Font getFont(jint arg0) const;
		jint getSize() const;
	};
} // namespace android::graphics::fonts

