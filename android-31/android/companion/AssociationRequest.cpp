#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AssociationRequest.hpp"

namespace android::companion
{
	// Fields
	JObject AssociationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString AssociationRequest::DEVICE_PROFILE_WATCH()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"DEVICE_PROFILE_WATCH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	jint AssociationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AssociationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AssociationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AssociationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AssociationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

