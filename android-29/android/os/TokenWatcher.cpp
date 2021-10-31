#include "./Handler.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "./TokenWatcher.hpp"

namespace android::os
{
	// Fields
	
	TokenWatcher::TokenWatcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TokenWatcher::TokenWatcher(android::os::Handler arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.TokenWatcher",
			"(Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void TokenWatcher::acquire(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TokenWatcher::acquired()
	{
		__thiz.callMethod<void>(
			"acquired",
			"()V"
		);
	}
	void TokenWatcher::cleanup(__JniBaseClass arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"cleanup",
			"(Landroid/os/IBinder;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void TokenWatcher::dump()
	{
		__thiz.callMethod<void>(
			"dump",
			"()V"
		);
	}
	void TokenWatcher::dump(java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean TokenWatcher::isAcquired()
	{
		return __thiz.callMethod<jboolean>(
			"isAcquired",
			"()Z"
		);
	}
	void TokenWatcher::release(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void TokenWatcher::released()
	{
		__thiz.callMethod<void>(
			"released",
			"()V"
		);
	}
} // namespace android::os

