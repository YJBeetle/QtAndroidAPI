#include "./Handler.hpp"
#include "./Message.hpp"
#include "./Parcel.hpp"
#include "./Messenger.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Messenger::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Messenger",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Messenger::Messenger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Messenger::Messenger(android::os::Handler &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Messenger",
			"(Landroid/os/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	Messenger::Messenger(__JniBaseClass &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Messenger",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Messenger::readMessengerOrNullFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Messenger",
			"readMessengerOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/Messenger;",
			arg0.__jniObject().object()
		);
	}
	void Messenger::writeMessengerOrNullToParcel(android::os::Messenger arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.Messenger",
			"writeMessengerOrNullToParcel",
			"(Landroid/os/Messenger;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint Messenger::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Messenger::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Messenger::getBinder()
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"()Landroid/os/IBinder;"
		);
	}
	jint Messenger::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Messenger::send(android::os::Message arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/os/Message;)V",
			arg0.__jniObject().object()
		);
	}
	void Messenger::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

