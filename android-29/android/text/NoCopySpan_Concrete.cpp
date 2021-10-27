#include "./NoCopySpan_Concrete.hpp"

namespace android::text
{
	// Fields
	
	NoCopySpan_Concrete::NoCopySpan_Concrete(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NoCopySpan_Concrete::NoCopySpan_Concrete()
	{
		__thiz = QAndroidJniObject(
			"android.text.NoCopySpan$Concrete",
			"()V"
		);
	}
	
	// Methods
} // namespace android::text

