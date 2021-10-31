#include "./SystemFonts.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// QAndroidJniObject forward
	SystemFonts::SystemFonts(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

