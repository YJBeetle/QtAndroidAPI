#pragma once

#ifndef ANDROID_OS_REMOTECALLBACKLIST
#define ANDROID_OS_REMOTECALLBACKLIST

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class RemoteCallbackList : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean _register(__jni_impl::__JniBaseClass arg0, jobject arg1);
		jboolean _register(__jni_impl::__JniBaseClass arg0);
		jboolean unregister(__jni_impl::__JniBaseClass arg0);
		void kill();
		void onCallbackDied(__jni_impl::__JniBaseClass arg0);
		void onCallbackDied(__jni_impl::__JniBaseClass arg0, jobject arg1);
		jint beginBroadcast();
		QAndroidJniObject getBroadcastItem(jint arg0);
		QAndroidJniObject getBroadcastCookie(jint arg0);
		void finishBroadcast();
		jint getRegisteredCallbackCount();
		QAndroidJniObject getRegisteredCallbackItem(jint arg0);
		QAndroidJniObject getRegisteredCallbackCookie(jint arg0);
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	
	// Constructors
	void RemoteCallbackList::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteCallbackList",
			"()V");
	}
	
	// Methods
	jboolean RemoteCallbackList::_register(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean RemoteCallbackList::_register(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object());
	}
	jboolean RemoteCallbackList::unregister(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object());
	}
	void RemoteCallbackList::kill()
	{
		__thiz.callMethod<void>(
			"kill",
			"()V");
	}
	void RemoteCallbackList::onCallbackDied(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.__jniObject().object());
	}
	void RemoteCallbackList::onCallbackDied(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint RemoteCallbackList::beginBroadcast()
	{
		return __thiz.callMethod<jint>(
			"beginBroadcast",
			"()I");
	}
	QAndroidJniObject RemoteCallbackList::getBroadcastItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBroadcastItem",
			"(I)Landroid/os/IInterface;",
			arg0);
	}
	QAndroidJniObject RemoteCallbackList::getBroadcastCookie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBroadcastCookie",
			"(I)Ljava/lang/Object;",
			arg0);
	}
	void RemoteCallbackList::finishBroadcast()
	{
		__thiz.callMethod<void>(
			"finishBroadcast",
			"()V");
	}
	jint RemoteCallbackList::getRegisteredCallbackCount()
	{
		return __thiz.callMethod<jint>(
			"getRegisteredCallbackCount",
			"()I");
	}
	QAndroidJniObject RemoteCallbackList::getRegisteredCallbackItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRegisteredCallbackItem",
			"(I)Landroid/os/IInterface;",
			arg0);
	}
	QAndroidJniObject RemoteCallbackList::getRegisteredCallbackCookie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRegisteredCallbackCookie",
			"(I)Ljava/lang/Object;",
			arg0);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class RemoteCallbackList : public __jni_impl::android::os::RemoteCallbackList
	{
	public:
		RemoteCallbackList(QAndroidJniObject obj) { __thiz = obj; }
		RemoteCallbackList()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_REMOTECALLBACKLIST

