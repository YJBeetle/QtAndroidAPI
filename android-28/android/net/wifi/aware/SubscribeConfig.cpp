#include "../../../../JByteArray.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./SubscribeConfig.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject SubscribeConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.SubscribeConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_ACTIVE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_ACTIVE"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_PASSIVE()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_PASSIVE"
		);
	}
	
	// QJniObject forward
	SubscribeConfig::SubscribeConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SubscribeConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SubscribeConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SubscribeConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SubscribeConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SubscribeConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

