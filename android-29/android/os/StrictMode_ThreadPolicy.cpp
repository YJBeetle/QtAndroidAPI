#include "./StrictMode_ThreadPolicy.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject StrictMode_ThreadPolicy::LAX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.StrictMode$ThreadPolicy",
			"LAX",
			"Landroid/os/StrictMode$ThreadPolicy;"
		);
	}
	
	// QAndroidJniObject forward
	StrictMode_ThreadPolicy::StrictMode_ThreadPolicy(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

