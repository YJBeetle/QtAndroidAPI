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
	
	// QAndroidJniObject forward
	SubscribeConfig::SubscribeConfig(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SubscribeConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SubscribeConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint SubscribeConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString SubscribeConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SubscribeConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

