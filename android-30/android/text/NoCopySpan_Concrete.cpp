#include "./NoCopySpan_Concrete.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	NoCopySpan_Concrete::NoCopySpan_Concrete(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NoCopySpan_Concrete::NoCopySpan_Concrete()
		: __JniBaseClass(
			"android.text.NoCopySpan$Concrete",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

