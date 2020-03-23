#pragma once

#ifndef ANDROID_OS_TOKENWATCHER
#define ANDROID_OS_TOKENWATCHER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}

namespace __jni_impl::android::os
{
	class TokenWatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::os::Handler arg0, jstring arg1);
		
		// Methods
		void release(__jni_impl::__JniBaseClass arg0);
		void acquire(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void cleanup(__jni_impl::__JniBaseClass arg0, jboolean arg1);
		void released();
		void dump();
		void dump(__jni_impl::java::io::PrintWriter arg0);
		void acquired();
		jboolean isAcquired();
	};
} // namespace __jni_impl::android::os

#include "Handler.hpp"
#include "../../java/io/PrintWriter.hpp"

namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void TokenWatcher::__constructor(__jni_impl::android::os::Handler arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.TokenWatcher",
			"(Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void TokenWatcher::release(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"release",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object());
	}
	void TokenWatcher::acquire(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"acquire",
			"(Landroid/os/IBinder;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void TokenWatcher::cleanup(__jni_impl::__JniBaseClass arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"cleanup",
			"(Landroid/os/IBinder;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void TokenWatcher::released()
	{
		__thiz.callMethod<void>(
			"released",
			"()V");
	}
	void TokenWatcher::dump()
	{
		__thiz.callMethod<void>(
			"dump",
			"()V");
	}
	void TokenWatcher::dump(__jni_impl::java::io::PrintWriter arg0)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object());
	}
	void TokenWatcher::acquired()
	{
		__thiz.callMethod<void>(
			"acquired",
			"()V");
	}
	jboolean TokenWatcher::isAcquired()
	{
		return __thiz.callMethod<jboolean>(
			"isAcquired",
			"()Z");
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class TokenWatcher : public __jni_impl::android::os::TokenWatcher
	{
	public:
		TokenWatcher(QAndroidJniObject obj) { __thiz = obj; }
		TokenWatcher(__jni_impl::android::os::Handler arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_TOKENWATCHER

