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
		
		FontFamily_Builder(QAndroidJniObject obj);
		// Constructors
		FontFamily_Builder(android::graphics::fonts::Font &arg0);
		FontFamily_Builder() = default;
		
		// Methods
		QAndroidJniObject addFont(android::graphics::fonts::Font arg0);
		QAndroidJniObject build();
	};
} // namespace android::graphics::fonts

