#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ImsRegistrationAttributes.hpp"

namespace android::telephony::ims
{
	// Fields
	jint ImsRegistrationAttributes::ATTR_EPDG_OVER_CELL_INTERNET()
	{
		return getStaticField<jint>(
			"android.telephony.ims.ImsRegistrationAttributes",
			"ATTR_EPDG_OVER_CELL_INTERNET"
		);
	}
	JObject ImsRegistrationAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRegistrationAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ImsRegistrationAttributes::ImsRegistrationAttributes(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ImsRegistrationAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ImsRegistrationAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint ImsRegistrationAttributes::getAttributeFlags() const
	{
		return callMethod<jint>(
			"getAttributeFlags",
			"()I"
		);
	}
	JObject ImsRegistrationAttributes::getFeatureTags() const
	{
		return callObjectMethod(
			"getFeatureTags",
			"()Ljava/util/Set;"
		);
	}
	jint ImsRegistrationAttributes::getTransportType() const
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint ImsRegistrationAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString ImsRegistrationAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ImsRegistrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

