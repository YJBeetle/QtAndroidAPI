#pragma once

#ifndef ANDROID_OS_MESSENGER
#define ANDROID_OS_MESSENGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Message;
}

namespace __jni_impl::android::os
{
	class Messenger : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Handler arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getBinder();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void send(__jni_impl::android::os::Message arg0);
		static void writeMessengerOrNullToParcel(__jni_impl::android::os::Messenger arg0, __jni_impl::android::os::Parcel arg1);
		static QAndroidJniObject readMessengerOrNullFromParcel(__jni_impl::android::os::Parcel arg0);
	};
} // namespace __jni_impl::android::os

#include "Handler.hpp"
#include "Parcel.hpp"
#include "Message.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject Messenger::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Messenger",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void Messenger::__constructor(__jni_impl::android::os::Handler arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Messenger",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object());
	}
	void Messenger::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Messenger",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Messenger::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Messenger::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Messenger::getBinder()
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;");
	}
	jint Messenger::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void Messenger::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Messenger::send(__jni_impl::android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object());
	}
	void Messenger::writeMessengerOrNullToParcel(__jni_impl::android::os::Messenger arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Messenger",
			"writeMessengerOrNullToParcel",
			"(Landroid/os/Messenger;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Messenger::readMessengerOrNullFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Messenger",
			"readMessengerOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/Messenger;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Messenger : public __jni_impl::android::os::Messenger
	{
	public:
		Messenger(QAndroidJniObject obj) { __thiz = obj; }
		Messenger(__jni_impl::android::os::Handler arg0)
		{
			__constructor(
				arg0);
		}
		Messenger(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_MESSENGER

