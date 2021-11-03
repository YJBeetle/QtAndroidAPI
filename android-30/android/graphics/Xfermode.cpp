#include "./Xfermode.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	Xfermode::Xfermode(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Xfermode::Xfermode()
		: JObject(
			"android.graphics.Xfermode",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

