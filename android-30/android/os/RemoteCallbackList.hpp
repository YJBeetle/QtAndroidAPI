#pragma once

#include "../../JObject.hpp"
#include "./RemoteCallbackList.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline RemoteCallbackList::RemoteCallbackList()
		: JObject(
			"android.os.RemoteCallbackList",
			"()V"
		) {}
	
	// Methods
	inline jint RemoteCallbackList::beginBroadcast() const
	{
		return callMethod<jint>(
			"beginBroadcast",
			"()I"
		);
	}
	inline void RemoteCallbackList::finishBroadcast() const
	{
		callMethod<void>(
			"finishBroadcast",
			"()V"
		);
	}
	inline JObject RemoteCallbackList::getBroadcastCookie(jint arg0) const
	{
		return callObjectMethod(
			"getBroadcastCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline JObject RemoteCallbackList::getBroadcastItem(jint arg0) const
	{
		return callObjectMethod(
			"getBroadcastItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	inline JObject RemoteCallbackList::getRegisteredCallbackCookie(jint arg0) const
	{
		return callObjectMethod(
			"getRegisteredCallbackCookie",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jint RemoteCallbackList::getRegisteredCallbackCount() const
	{
		return callMethod<jint>(
			"getRegisteredCallbackCount",
			"()I"
		);
	}
	inline JObject RemoteCallbackList::getRegisteredCallbackItem(jint arg0) const
	{
		return callObjectMethod(
			"getRegisteredCallbackItem",
			"(I)Landroid/os/IInterface;",
			arg0
		);
	}
	inline void RemoteCallbackList::kill() const
	{
		callMethod<void>(
			"kill",
			"()V"
		);
	}
	inline void RemoteCallbackList::onCallbackDied(JObject arg0) const
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	inline void RemoteCallbackList::onCallbackDied(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"onCallbackDied",
			"(Landroid/os/IInterface;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline jboolean RemoteCallbackList::register_(JObject arg0) const
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
	inline jboolean RemoteCallbackList::register_(JObject arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"register",
			"(Landroid/os/IInterface;Ljava/lang/Object;)Z",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline jboolean RemoteCallbackList::unregister(JObject arg0) const
	{
		return callMethod<jboolean>(
			"unregister",
			"(Landroid/os/IInterface;)Z",
			arg0.object()
		);
	}
} // namespace android::os

// Base class headers

