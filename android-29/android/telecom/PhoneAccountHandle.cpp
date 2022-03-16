#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PhoneAccountHandle.hpp"

namespace android::telecom
{
	// Fields
	JObject PhoneAccountHandle::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccountHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, JString arg1)
		: JObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName arg0, JString arg1, android::os::UserHandle arg2)
		: JObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	jint PhoneAccountHandle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::content::ComponentName PhoneAccountHandle::getComponentName() const
	{
		return callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	JString PhoneAccountHandle::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	android::os::UserHandle PhoneAccountHandle::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint PhoneAccountHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PhoneAccountHandle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PhoneAccountHandle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

