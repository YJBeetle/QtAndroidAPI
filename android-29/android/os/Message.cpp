#include "./Bundle.hpp"
#include "./Handler.hpp"
#include "./Messenger.hpp"
#include "./Parcel.hpp"
#include "./Message.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Message::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
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
	QAndroidJniObject Message::replyTo()
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
	
	// QAndroidJniObject forward
	Message::Message(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Message::Message()
		: __JniBaseClass(
			"android.os.Message",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject Message::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"()Landroid/os/Message;"
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;)Landroid/os/Message;",
			arg0.object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Message arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Message;)Landroid/os/Message;",
			arg0.object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;I)Landroid/os/Message;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1, jobject arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;III)Landroid/os/Message;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject Message::getCallback()
	{
		return callObjectMethod(
			"getCallback",
			"()Ljava/lang/Runnable;"
		);
	}
	QAndroidJniObject Message::getData()
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Message::getTarget()
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
	QAndroidJniObject Message::peekData()
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
