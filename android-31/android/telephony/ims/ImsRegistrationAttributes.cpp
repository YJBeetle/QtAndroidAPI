#include "../../os/Parcel.hpp"
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
	__JniBaseClass ImsRegistrationAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.ims.ImsRegistrationAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ImsRegistrationAttributes::ImsRegistrationAttributes(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ImsRegistrationAttributes::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ImsRegistrationAttributes::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ImsRegistrationAttributes::getAttributeFlags()
	{
		return callMethod<jint>(
			"getAttributeFlags",
			"()I"
		);
	}
	__JniBaseClass ImsRegistrationAttributes::getFeatureTags()
	{
		return callObjectMethod(
			"getFeatureTags",
			"()Ljava/util/Set;"
		);
	}
	jint ImsRegistrationAttributes::getTransportType()
	{
		return callMethod<jint>(
			"getTransportType",
			"()I"
		);
	}
	jint ImsRegistrationAttributes::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ImsRegistrationAttributes::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ImsRegistrationAttributes::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::ims

