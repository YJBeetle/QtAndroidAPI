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
	jint RemoteCallbackList::beginBroadcast() const
	{
		return callMethod<jint>(
			"beginBroadcast",
			"()I"
		);
	}
	void RemoteCallbackList::finishBroadcast() const
	{
		callMethod<void>(
			"finishBroadcast",
			"()V"
		);
	}
	JObject RemoteCallbackList::getBroadcastCookie(jint arg0) const
	{
		return callObjectMethod(
			"getBroadcastCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	JObject RemoteCallbackList::getBroadcastItem(jint arg0) const
	{
		return callObjectMethod(
			"getBroadcastItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	JObject RemoteCallbackList::getRegisteredCallbackCookie(jint arg0) const
	{
		return callObjectMethod(
			"getRegisteredCallbackCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	jint RemoteCallbackList::getRegisteredCallbackCount() const
	{
		return callMethod<jint>(
			"getRegisteredCallbackCount",
			"()I"
		);
	}
	JObject RemoteCallbackList::getRegisteredCallbackItem(jint arg0) const
	{
		return callObjectMethod(
			"getRegisteredCallbackItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	void RemoteCallbackList::kill() const
	{
		callMethod<void>(
			"kill",
			"()V"
		);
	}
	void RemoteCallbackList::onCallbackDied(JObject arg0) const
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	void RemoteCallbackList::onCallbackDied(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	jboolean RemoteCallbackList::register_(JObject arg0) const
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
	jboolean RemoteCallbackList::register_(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	jboolean RemoteCallbackList::unregister(JObject arg0) const
	{
		return callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
} // namespace android::os

