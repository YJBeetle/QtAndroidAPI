#include "./RemoteCallbackList.hpp"

namespace android::os
{
	// Fields
	
	RemoteCallbackList::RemoteCallbackList(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteCallbackList::RemoteCallbackList()
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
	void RemoteCallbackList::onCallbackDied(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void RemoteCallbackList::onCallbackDied(__JniBaseClass arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean RemoteCallbackList::_register(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RemoteCallbackList::_register(__JniBaseClass arg0, jobject arg1)
	{
		return __thiz.callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean RemoteCallbackList::unregister(__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::os

