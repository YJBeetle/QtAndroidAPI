#include "./PorterDuff.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	PorterDuff::PorterDuff(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PorterDuff::PorterDuff()
		: JObject(
			"android.graphics.PorterDuff",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

