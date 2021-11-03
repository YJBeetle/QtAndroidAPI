#include "../../JString.hpp"
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
	JString StrictMode_ThreadPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

