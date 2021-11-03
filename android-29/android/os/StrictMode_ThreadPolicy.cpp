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
	
	// QJniObject forward
	StrictMode_ThreadPolicy::StrictMode_ThreadPolicy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString StrictMode_ThreadPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::os

