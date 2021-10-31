#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class FontFamily : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FontFamily(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::graphics::fonts::Font getFont(jint arg0);
		jint getSize();
	};
} // namespace android::graphics::fonts

