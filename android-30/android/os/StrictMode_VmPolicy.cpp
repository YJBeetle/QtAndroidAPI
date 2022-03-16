#include "../../JString.hpp"
#include "./StrictMode_VmPolicy.hpp"

namespace android::os
{
	// Fields
	android::os::StrictMode_VmPolicy StrictMode_VmPolicy::LAX()
	{
		return getStaticObjectField(
			"android.os.StrictMode$VmPolicy",
			"LAX",
			"Landroid/os/StrictMode$VmPolicy;"
		);
	}
	
	// Constructors
	
	// Methods
	JString StrictMode_VmPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

