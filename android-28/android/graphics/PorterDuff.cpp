#include "./PorterDuff.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PorterDuff::PorterDuff(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PorterDuff::PorterDuff()
		: JObject(
			"android.graphics.PorterDuff",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

