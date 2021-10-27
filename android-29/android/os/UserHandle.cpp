#include "./Parcel.hpp"
#include "./UserHandle.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject UserHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.UserHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	UserHandle::UserHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UserHandle::UserHandle(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.UserHandle",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject UserHandle::getUserHandleForUid(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserHandle",
			"getUserHandleForUid",
			"(I)Landroid/os/UserHandle;",
			arg0
		);
	}
	QAndroidJniObject UserHandle::readFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.UserHandle",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/UserHandle;",
			arg0.__jniObject().object()
		);
	}
	void UserHandle::writeToParcel(android::os::UserHandle arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.UserHandle",
			"writeToParcel",
			"(Landroid/os/UserHandle;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint UserHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UserHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UserHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UserHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UserHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

