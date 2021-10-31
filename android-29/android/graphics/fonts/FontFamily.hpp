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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontFamily(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontFamily(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getFont(jint arg0);
		jint getSize();
	};
} // namespace android::graphics::fonts

