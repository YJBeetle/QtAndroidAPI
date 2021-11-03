#include "./NoCopySpan_Concrete.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	NoCopySpan_Concrete::NoCopySpan_Concrete(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NoCopySpan_Concrete::NoCopySpan_Concrete()
		: JObject(
			"android.text.NoCopySpan$Concrete",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

