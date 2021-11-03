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
	
	// QJniObject forward
	TrafficDescriptor::TrafficDescriptor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint TrafficDescriptor::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean TrafficDescriptor::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString TrafficDescriptor::getDataNetworkName()
	{
		return callObjectMethod(
			"getDataNetworkName",
			"()Ljava/lang/String;"
		);
	}
	JByteArray TrafficDescriptor::getOsAppId()
	{
		return callObjectMethod(
			"getOsAppId",
			"()[B"
		);
	}
	jint TrafficDescriptor::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TrafficDescriptor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TrafficDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

