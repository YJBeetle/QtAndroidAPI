#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "./PhoneAccountHandle.hpp"

namespace android::telecom
{
	// Fields
	__JniBaseClass PhoneAccountHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccountHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	PhoneAccountHandle::PhoneAccountHandle(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1)
		: __JniBaseClass(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, jstring arg1, android::os::UserHandle arg2)
		: __JniBaseClass(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	jint PhoneAccountHandle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountHandle::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::content::ComponentName PhoneAccountHandle::getComponentName()
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring PhoneAccountHandle::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::UserHandle PhoneAccountHandle::getUserHandle()
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint PhoneAccountHandle::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PhoneAccountHandle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PhoneAccountHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

