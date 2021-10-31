#include "./Handler.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./TokenWatcher.hpp"

namespace android::os
{
	// Fields
	
	// QJniObject forward
	TokenWatcher::TokenWatcher(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TokenWatcher::TokenWatcher(android::os::Handler arg0, jstring arg1)
		: __JniBaseClass(
			"android.os.TokenWatcher",
			"(Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void TokenWatcher::acquire(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"acquire",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void TokenWatcher::acquired()
	{
		callMethod<void>(
			"acquired",
			"()V"
		);
	}
	void TokenWatcher::cleanup(__JniBaseClass arg0, jboolean arg1)
	{
		callMethod<void>(
			"cleanup",
			"(Landroid/os/IBinder;Z)V",
			arg0.object(),
			arg1
		);
	}
	void TokenWatcher::dump()
	{
		callMethod<void>(
			"dump",
			"()V"
		);
	}
	void TokenWatcher::dump(java::io::PrintWriter arg0)
	{
		callMethod<void>(
			"dump",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	jboolean TokenWatcher::isAcquired()
	{
		return callMethod<jboolean>(
			"isAcquired",
			"()Z"
		);
	}
	void TokenWatcher::release(__JniBaseClass arg0)
	{
		callMethod<void>(
			"release",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void TokenWatcher::released()
	{
		callMethod<void>(
			"released",
			"()V"
		);
	}
} // namespace android::os

