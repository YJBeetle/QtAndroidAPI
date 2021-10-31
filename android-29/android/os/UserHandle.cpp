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
	
	// QAndroidJniObject forward
	UserHandle::UserHandle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UserHandle::UserHandle(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.os.UserHandle",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
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
			arg0.object()
		);
	}
	void UserHandle::writeToParcel(android::os::UserHandle arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.os.UserHandle",
			"writeToParcel",
			"(Landroid/os/UserHandle;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint UserHandle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UserHandle::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint UserHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring UserHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UserHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os
