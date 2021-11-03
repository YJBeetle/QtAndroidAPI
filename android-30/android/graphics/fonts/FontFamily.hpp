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
		
		// QJniObject forward
		template<typename ...Ts> explicit FontFamily(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::fonts::Font getFont(jint arg0) const;
		jint getSize() const;
	};
} // namespace android::graphics::fonts

