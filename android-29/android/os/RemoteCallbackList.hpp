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
		jint beginBroadcast();
		void finishBroadcast();
		jobject getBroadcastCookie(jint arg0);
		QAndroidJniObject getBroadcastItem(jint arg0);
		jobject getRegisteredCallbackCookie(jint arg0);
		jint getRegisteredCallbackCount();
		QAndroidJniObject getRegisteredCallbackItem(jint arg0);
		void kill();
		void onCallbackDied(__jni_impl::__JniBaseClass arg0);
		void onCallbackDied(__jni_impl::__JniBaseClass arg0, jobject arg1);
		jboolean _register(__jni_impl::__JniBaseClass arg0);
		jboolean _register(__jni_impl::__JniBaseClass arg0, jobject arg1);
		jboolean unregister(__jni_impl::__JniBaseClass arg0);
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
			"()V"
		);
	}
	
	// Methods
	jint RemoteCallbackList::beginBroadcast()
	{
		return __thiz.callMethod<jint>(
			"beginBroadcast",
			"()I"
		);
	}
	void RemoteCallbackList::finishBroadcast()
	{
		__thiz.callMethod<void>(
			"finishBroadcast",
			"()V"
		);
	}
	jobject RemoteCallbackList::getBroadcastCookie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBroadcastCookie",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject RemoteCallbackList::getBroadcastItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBroadcastItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	jobject RemoteCallbackList::getRegisteredCallbackCookie(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRegisteredCallbackCookie",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint RemoteCallbackList::getRegisteredCallbackCount()
	{
		return __thiz.callMethod<jint>(
			"getRegisteredCallbackCount",
			"()I"
		);
	}
	QAndroidJniObject RemoteCallbackList::getRegisteredCallbackItem(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRegisteredCallbackItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	void RemoteCallbackList::kill()
	{
		__thiz.callMethod<void>(
			"kill",
			"()V"
		);
	}
	void RemoteCallbackList::onCallbackDied(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteCallbackList::onCallbackDied(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean RemoteCallbackList::_register(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RemoteCallbackList::_register(__jni_impl::__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean RemoteCallbackList::unregister(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object()
		);
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

