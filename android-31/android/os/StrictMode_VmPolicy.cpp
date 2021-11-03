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
	
	// QAndroidJniObject forward
	StrictMode_VmPolicy::StrictMode_VmPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString StrictMode_VmPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

