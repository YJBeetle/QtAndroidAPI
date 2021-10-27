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
		
		FontFamily(QAndroidJniObject obj);
		// Constructors
		FontFamily() = default;
		
		// Methods
		QAndroidJniObject getFont(jint arg0);
		jint getSize();
	};
} // namespace android::graphics::fonts

