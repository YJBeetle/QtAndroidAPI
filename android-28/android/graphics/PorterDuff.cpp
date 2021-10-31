#include "./PorterDuff.hpp"

namespace android::graphics
{
	// Fields
	
	// QJniObject forward
	PorterDuff::PorterDuff(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PorterDuff::PorterDuff()
		: __JniBaseClass(
			"android.graphics.PorterDuff",
			"()V"
		) {}
	
	// Methods
} // namespace android::graphics

