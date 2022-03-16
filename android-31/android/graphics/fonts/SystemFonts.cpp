#include "./SystemFonts.hpp"

namespace android::graphics::fonts
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject SystemFonts::getAvailableFonts()
	{
		return callStaticObjectMethod(
			"android.graphics.fonts.SystemFonts",
			"getAvailableFonts",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::graphics::fonts

