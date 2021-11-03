#include "../../../JByteArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TrafficDescriptor.hpp"

namespace android::telephony::data
{
	// Fields
	JObject TrafficDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.TrafficDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	TrafficDescriptor::TrafficDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TrafficDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TrafficDescriptor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString TrafficDescriptor::getDataNetworkName() const
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray TrafficDescriptor::getOsAppId() const
	{
		return callObjectMethod(
			"getOsAppId",
			"()[B"
		);
	}
	jint TrafficDescriptor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TrafficDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TrafficDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

