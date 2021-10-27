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
	
	StrictMode_ThreadPolicy::StrictMode_ThreadPolicy(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring StrictMode_ThreadPolicy::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::os

