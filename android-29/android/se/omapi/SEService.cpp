#include "../../content/Context.hpp"
#include "./SEService.hpp"

namespace android::se::omapi
{
	// Fields
	
	SEService::SEService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SEService::SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jarray SEService::getReaders()
	{
		return __thiz.callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		).object<jarray>();
	}
	jstring SEService::getVersion()
	{
		return __thiz.callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SEService::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void SEService::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::se::omapi

