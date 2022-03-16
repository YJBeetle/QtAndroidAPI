#include "./Bundle.hpp"
#include "./Handler.hpp"
#include "./Messenger.hpp"
#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Message.hpp"

namespace android::os
{
	// Fields
	JObject Message::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Message",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Message::arg1()
	{
		return getField<jint>(
			"arg1"
		);
	}
	jint Message::arg2()
	{
		return getField<jint>(
			"arg2"
		);
	}
	JObject Message::obj()
	{
		return getObjectField(
			"obj",
			"Ljava/lang/Object;"
		);
	}
	android::os::Messenger Message::replyTo()
	{
		return getObjectField(
			"replyTo",
			"Landroid/os/Messenger;"
		);
	}
	jint Message::sendingUid()
	{
		return getField<jint>(
			"sendingUid"
		);
	}
	jint Message::what()
	{
		return getField<jint>(
			"what"
		);
	}
	
	// Constructors
	Message::Message()
		: JObject(
			"android.os.Message",
			"()V"
		) {}
	
	// Methods
	android::os::Message Message::obtain()
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"()Landroid/os/Message;"
		);
	}
	android::os::Message Message::obtain(android::os::Handler arg0)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;)Landroid/os/Message;",
			arg0.object()
		);
	}
	android::os::Message Message::obtain(android::os::Message arg0)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Message;)Landroid/os/Message;",
			arg0.object()
		);
	}
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;I)Landroid/os/Message;",
			arg0.object(),
			arg1
		);
	}
	android::os::Message Message::obtain(android::os::Handler arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, JObject arg2)
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
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3)
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
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, JObject arg4)
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
	void Message::copyFrom(android::os::Message arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	jint Message::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject Message::getCallback() const
	{
		return callObjectMethod(
			"getCallback",
			"()Ljava/lang/Runnable;"
		);
	}
	android::os::Bundle Message::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Handler Message::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Landroid/os/Handler;"
		);
	}
	jlong Message::getWhen() const
	{
		return callMethod<jlong>(
			"getWhen",
			"()J"
		);
	}
	jboolean Message::isAsynchronous() const
	{
		return callMethod<jboolean>(
			"isAsynchronous",
			"()Z"
		);
	}
	android::os::Bundle Message::peekData() const
	{
		return callObjectMethod(
			"peekData",
			"()Landroid/os/Bundle;"
		);
	}
	void Message::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Message::sendToTarget() const
	{
		callMethod<void>(
			"sendToTarget",
			"()V"
		);
	}
	void Message::setAsynchronous(jboolean arg0) const
	{
		callMethod<void>(
			"setAsynchronous",
			"(Z)V",
			arg0
		);
	}
	void Message::setData(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setData",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Message::setTarget(android::os::Handler arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Landroid/os/Handler;)V",
			arg0.object()
		);
	}
	JString Message::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Message::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

