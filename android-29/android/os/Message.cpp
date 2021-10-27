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
		return __thiz.getField<jint>(
			"arg1"
		);
	}
	jint Message::arg2()
	{
		return __thiz.getField<jint>(
			"arg2"
		);
	}
	jobject Message::obj()
	{
		return __thiz.getObjectField(
			"obj",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject Message::replyTo()
	{
		return __thiz.getObjectField(
			"replyTo",
			"Landroid/os/Messenger;"
		);
	}
	jint Message::sendingUid()
	{
		return __thiz.getField<jint>(
			"sendingUid"
		);
	}
	jint Message::what()
	{
		return __thiz.getField<jint>(
			"what"
		);
	}
	
	Message::Message(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Message::Message()
	{
		__thiz = QAndroidJniObject(
			"android.os.Message",
			"()V"
		);
	}
	
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
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Message arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Message;)Landroid/os/Message;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;I)Landroid/os/Message;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(android::os::Handler arg0, jint arg1, jobject arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;ILjava/lang/Object;)Landroid/os/Message;",
			arg0.__jniObject().object(),
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
			arg0.__jniObject().object(),
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
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Message::copyFrom(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	jint Message::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Message::getCallback()
	{
		return __thiz.callObjectMethod(
			"getCallback",
			"()Ljava/lang/Runnable;"
		);
	}
	QAndroidJniObject Message::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Message::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Landroid/os/Handler;"
		);
	}
	jlong Message::getWhen()
	{
		return __thiz.callMethod<jlong>(
			"getWhen",
			"()J"
		);
	}
	jboolean Message::isAsynchronous()
	{
		return __thiz.callMethod<jboolean>(
			"isAsynchronous",
			"()Z"
		);
	}
	QAndroidJniObject Message::peekData()
	{
		return __thiz.callObjectMethod(
			"peekData",
			"()Landroid/os/Bundle;"
		);
	}
	void Message::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Message::sendToTarget()
	{
		__thiz.callMethod<void>(
			"sendToTarget",
			"()V"
		);
	}
	void Message::setAsynchronous(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAsynchronous",
			"(Z)V",
			arg0
		);
	}
	void Message::setData(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setData",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Message::setTarget(android::os::Handler arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Message::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Message::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

