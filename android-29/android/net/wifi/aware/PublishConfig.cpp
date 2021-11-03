#include "../../../../JByteArray.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./PublishConfig.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject PublishConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.PublishConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PublishConfig::PUBLISH_TYPE_SOLICITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_SOLICITED"
		);
	}
	jint PublishConfig::PUBLISH_TYPE_UNSOLICITED()
	{
		return getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_UNSOLICITED"
		);
	}
	
	// QJniObject forward
	PublishConfig::PublishConfig(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint PublishConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PublishConfig::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PublishConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PublishConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PublishConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

