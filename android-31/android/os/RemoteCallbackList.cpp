#include "../../JObject.hpp"
#include "./RemoteCallbackList.hpp"

namespace android::os
{
	// Fields
	
	// QAndroidJniObject forward
	RemoteCallbackList::RemoteCallbackList(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	RemoteCallbackList::RemoteCallbackList()
		: JObject(
			"android.os.RemoteCallbackList",
			"()V"
		) {}
	
	// Methods
	jint RemoteCallbackList::beginBroadcast()
	{
		return callMethod<jint>(
			"beginBroadcast",
			"()I"
		);
	}
	void RemoteCallbackList::finishBroadcast()
	{
		callMethod<void>(
			"finishBroadcast",
			"()V"
		);
	}
	JObject RemoteCallbackList::getBroadcastCookie(jint arg0)
	{
		return callObjectMethod(
			"getBroadcastCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject RemoteCallbackList::getBroadcastItem(jint arg0)
	{
		return callObjectMethod(
			"getBroadcastItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	JObject RemoteCallbackList::getRegisteredCallbackCookie(jint arg0)
	{
		return callObjectMethod(
			"getRegisteredCallbackCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint RemoteCallbackList::getRegisteredCallbackCount()
	{
		return callMethod<jint>(
			"getRegisteredCallbackCount",
			"()I"
		);
	}
	JObject RemoteCallbackList::getRegisteredCallbackItem(jint arg0)
	{
		return callObjectMethod(
			"getRegisteredCallbackItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	void RemoteCallbackList::kill()
	{
		callMethod<void>(
			"kill",
			"()V"
		);
	}
	void RemoteCallbackList::onCallbackDied(JObject arg0)
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	void RemoteCallbackList::onCallbackDied(JObject arg0, JObject arg1)
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	jboolean RemoteCallbackList::_register(JObject arg0)
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
	jboolean RemoteCallbackList::_register(JObject arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	jboolean RemoteCallbackList::unregister(JObject arg0)
	{
		return callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
} // namespace android::os

