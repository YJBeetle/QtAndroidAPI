#include "./SystemFonts.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	SystemFonts::SystemFonts(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject SystemFonts::getAvailableFonts()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.fonts.SystemFonts",
			"getAvailableFonts",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::graphics::fonts

