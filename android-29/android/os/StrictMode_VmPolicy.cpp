#include "../../java/util/HashMap.hpp"
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
	
	// QJniObject forward
	StrictMode_VmPolicy::StrictMode_VmPolicy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring StrictMode_VmPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

