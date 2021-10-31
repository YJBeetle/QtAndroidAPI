#include "./Bundle.hpp"
#include "./Handler.hpp"
#include "./Messenger.hpp"
#include "./Parcel.hpp"
#include "./Message.hpp"

namespace android::os
{
	// Fields
	__JniBaseClass Message::CREATOR()
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
	jobject Message::obj()
	{
		return getObjectField(
			"obj",
			"Ljava/lang/Object;"
		).object<jobject>();
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
	
	// QJniObject forward
	Message::Message(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Message::Message()
		: __JniBaseClass(
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
	android::os::Message Message::obtain(android::os::Handler arg0, __JniBaseClass arg1)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.object(),
			arg1.object()
		);
	}
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jobject arg2)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2
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
	android::os::Message Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
	{
		return callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;IIILjava/lang/Object;)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Message::copyFrom(android::os::Message arg0)
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/os/Message;)V",
			arg0.object()
		);
	}
	jint Message::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass Message::getCallback()
	{
		return callObjectMethod(
			"getCallback",
			"()Ljava/lang/Runnable;"
		);
	}
	android::os::Bundle Message::getData()
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Handler Message::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Landroid/os/Handler;"
		);
	}
	jlong Message::getWhen()
	{
		return callMethod<jlong>(
			"getWhen",
			"()J"
		);
	}
	jboolean Message::isAsynchronous()
	{
		return callMethod<jboolean>(
			"isAsynchronous",
			"()Z"
		);
	}
	android::os::Bundle Message::peekData()
	{
		return callObjectMethod(
			"peekData",
			"()Landroid/os/Bundle;"
		);
	}
	void Message::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Message::sendToTarget()
	{
		callMethod<void>(
			"sendToTarget",
			"()V"
		);
	}
	void Message::setAsynchronous(jboolean arg0)
	{
		callMethod<void>(
			"setAsynchronous",
			"(Z)V",
			arg0
		);
	}
	void Message::setData(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setData",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Message::setTarget(android::os::Handler arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Landroid/os/Handler;)V",
			arg0.object()
		);
	}
	jstring Message::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Message::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

