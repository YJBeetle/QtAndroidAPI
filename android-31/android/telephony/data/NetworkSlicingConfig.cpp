#include "../../os/Parcel.hpp"
#include "./NetworkSlicingConfig.hpp"

namespace android::telephony::data
{
	// Fields
	__JniBaseClass NetworkSlicingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.data.NetworkSlicingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	NetworkSlicingConfig::NetworkSlicingConfig(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	NetworkSlicingConfig::NetworkSlicingConfig()
		: __JniBaseClass(
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
	jboolean NetworkSlicingConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass NetworkSlicingConfig::getSliceInfo()
	{
		return callObjectMethod(
			"getSliceInfo",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass NetworkSlicingConfig::getUrspRules()
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
	jstring NetworkSlicingConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

