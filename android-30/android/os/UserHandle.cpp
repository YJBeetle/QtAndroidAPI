#include "./Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./UserHandle.hpp"

namespace android::os
{
	// Fields
	JObject UserHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.UserHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	UserHandle::UserHandle(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	UserHandle::UserHandle(android::os::Parcel arg0)
		: JObject(
			"android.os.UserHandle",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	android::os::UserHandle UserHandle::getUserHandleForUid(jint arg0)
	{
		return callStaticObjectMethod(
			"android.os.UserHandle",
			"getUserHandleForUid",
			"(I)Landroid/os/UserHandle;",
			arg0
		);
	}
	android::os::UserHandle UserHandle::readFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.os.UserHandle",
			"readFromParcel",
			"(Landroid/os/Parcel;)Landroid/os/UserHandle;",
			arg0.object()
		);
	}
	void UserHandle::writeToParcel(android::os::UserHandle arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.os.UserHandle",
			"writeToParcel",
			"(Landroid/os/UserHandle;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jint UserHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean UserHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint UserHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString UserHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void UserHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

