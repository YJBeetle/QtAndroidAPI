#include "./NoCopySpan_Concrete.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	NoCopySpan_Concrete::NoCopySpan_Concrete(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NoCopySpan_Concrete::NoCopySpan_Concrete()
		: JObject(
			"android.text.NoCopySpan$Concrete",
			"()V"
		) {}
	
	// Methods
} // namespace android::text

