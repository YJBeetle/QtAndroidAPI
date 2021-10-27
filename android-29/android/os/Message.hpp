#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Messenger;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class Message : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint arg1();
		jint arg2();
		jobject obj();
		QAndroidJniObject replyTo();
		jint sendingUid();
		jint what();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject obtain();
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0);
		static QAndroidJniObject obtain(__jni_impl::android::os::Message arg0);
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0, jint arg1);
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0, jint arg1, jobject arg2);
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject obtain(__jni_impl::android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copyFrom(__jni_impl::android::os::Message arg0);
		jint describeContents();
		QAndroidJniObject getCallback();
		QAndroidJniObject getData();
		QAndroidJniObject getTarget();
		jlong getWhen();
		jboolean isAsynchronous();
		QAndroidJniObject peekData();
		void recycle();
		void sendToTarget();
		void setAsynchronous(jboolean arg0);
		void setData(__jni_impl::android::os::Bundle arg0);
		void setTarget(__jni_impl::android::os::Handler arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Bundle.hpp"
#include "Handler.hpp"
#include "Messenger.hpp"
#include "Parcel.hpp"

namespace __jni_impl::android::os
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
	
	// Constructors
	void Message::__constructor()
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
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;)Landroid/os/Message;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Message arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Message;)Landroid/os/Message;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;I)Landroid/os/Message;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Message",
			"obtain",
			"(Landroid/os/Handler;Ljava/lang/Runnable;)Landroid/os/Message;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0, jint arg1, jobject arg2)
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
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0, jint arg1, jint arg2, jint arg3)
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
	QAndroidJniObject Message::obtain(__jni_impl::android::os::Handler arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
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
	void Message::copyFrom(__jni_impl::android::os::Message arg0)
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
	void Message::setData(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setData",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Message::setTarget(__jni_impl::android::os::Handler arg0)
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
	void Message::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Message : public __jni_impl::android::os::Message
	{
	public:
		Message(QAndroidJniObject obj) { __thiz = obj; }
		Message()
		{
			__constructor();
		}
	};
} // namespace android::os

