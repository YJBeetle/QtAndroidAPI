#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NetworkSlicingConfig.hpp"

namespace android::telephony::data
{
	// Fields
	JObject NetworkSlicingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.NetworkSlicingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkSlicingConfig::NetworkSlicingConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkSlicingConfig::NetworkSlicingConfig()
		: JObject(
			"android.telephony.data.NetworkSlicingConfig",
			"()V"
		) {}
	
	// Methods
	jint NetworkSlicingConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NetworkSlicingConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject NetworkSlicingConfig::getSliceInfo()
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	JObject NetworkSlicingConfig::getUrspRules()
	{
		return callObjectMethod(
			"getUrspRules",
			"()Ljava/util/List;"
		);
	}
	jint NetworkSlicingConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString NetworkSlicingConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void NetworkSlicingConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::data

