#include "./NoCopySpan_Concrete.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	NoCopySpan_Concrete::NoCopySpan_Concrete(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NoCopySpan_Concrete::NoCopySpan_Concrete()
		: __JniBaseClass(
			"android.text.NoCopySpan$Concrete",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

