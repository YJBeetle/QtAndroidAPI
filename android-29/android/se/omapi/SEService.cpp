#include "../../content/Context.hpp"
#include "./SEService.hpp"

namespace android::se::omapi
{
	// Fields
	
	// QJniObject forward
	SEService::SEService(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SEService::SEService(android::content::Context arg0, __JniBaseClass arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"android.se.omapi.SEService",
			"(Landroid/content/Context;Ljava/util/concurrent/Executor;Landroid/se/omapi/SEService$OnConnectedListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jarray SEService::getReaders()
	{
		return callObjectMethod(
			"getReaders",
			"()[Landroid/se/omapi/Reader;"
		).object<jarray>();
	}
	jstring SEService::getVersion()
	{
		return callObjectMethod(
			"getVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SEService::isConnected()
	{
		return callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	void SEService::shutdown()
	{
		callMethod<void>(
			"shutdown",
			"()V"
		);
	}
} // namespace android::se::omapi

