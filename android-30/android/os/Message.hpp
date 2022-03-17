#pragma once

#include "./Bundle.def.hpp"
#include "./Handler.def.hpp"
#include "./Messenger.def.hpp"
#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Message.def.hpp"

namespace android::os
{
	// Fields
	inline JObject Message::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Message",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Message::arg1()
	{
		return getField<jint>(
			"arg1"
		);
	}
	inline jint Message::arg2()
	{
		return getField<jint>(
			"arg2"
		);
	}
	inline JObject Message::obj()
	{
		return getObjectField(
			"obj",
			"Ljava/lang/Object;"
		);
	}
	inline android::os::Messenger Message::replyTo()
	{
		return getObjectField(
			"replyTo",
			"Landroid/os/Messenger;"
		);
	}
	inline jint Message::sendingUid()
	{
		return getField<jint>(
			"sendingUid"
		);
	}
	inline jint Message::what()
	{
		return getField<jint>(
			"what"
		);
	}
	
	// Constructors
	inline Message::Message()
		: JObject(
			"android.os.Message",
			"()V"
		) {}
	
	// Methods
	inline android::os::Message Message::obtain()
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"()Landroid/os/Message;"
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;)Landroid/os/Message;",
			arg0.object()
		);
	}
	inline android::os::Message Message::obtain(android::os::Message arg0)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Message;)Landroid/os/Message;",
			arg0.object()
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;I)Landroid/os/Message;",
			arg0.object(),
			arg1
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2.object<jobject>()
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;III)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	inline android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, JObject arg4)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;IIILjava/lang/Object;)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object<jobject>()
		);
	}
	inline void Message::copyFrom(android::os::Message arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	inline jint Message::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject Message::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Ljava/lang/Runnable;"
		);
	}
	inline android::os::Bundle Message::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::os::Handler Message::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Landroid/os/Handler;"
		);
	}
	inline jlong Message::getWhen() const
	{
		return callMethod<jlong>(
			"getWhen",
			"()J"
		);
	}
	inline jboolean Message::isAsynchronous() const
	{
		return callMethod<jboolean>(
			"isAsynchronous",
			"()Z"
		);
	}
	inline android::os::Bundle Message::peekData() const
	{
		return callObjectMethod(
			"peekData",
			"()Landroid/os/Bundle;"
		);
	}
	inline void Message::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline void Message::sendToTarget() const
	{
		callMethod<void>(
			"sendToTarget",
			"()V"
		);
	}
	inline void Message::setAsynchronous(jboolean arg0) const
	{
		callMethod<void>(
			"setAsynchronous",
			"(Z)V",
			arg0
		);
	}
	inline void Message::setData(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setData",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Message::setTarget(android::os::Handler arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Landroid/os/Handler;)V",
			arg0.object()
		);
	}
	inline JString Message::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Message::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
