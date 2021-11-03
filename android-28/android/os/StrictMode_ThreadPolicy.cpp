#include "./StrictMode_ThreadPolicy.hpp"

namespace android::os
{
	// Fields
	android::os::StrictMode_ThreadPolicy StrictMode_ThreadPolicy::LAX()
	{
		return getStaticObjectField(
			"android.os.StrictMode$ThreadPolicy",
			"LAX",
			"Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	
	// QAndroidJniObject forward
	StrictMode_ThreadPolicy::StrictMode_ThreadPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring StrictMode_ThreadPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

