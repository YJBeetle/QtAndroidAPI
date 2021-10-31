#include "../../../os/Parcel.hpp"
#include "./SubscribeConfig.hpp"

namespace android::net::wifi::aware
{
	// Fields
	QAndroidJniObject SubscribeConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.SubscribeConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_ACTIVE"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_PASSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_PASSIVE"
		);
	}
	
	// QAndroidJniObject forward
	SubscribeConfig::SubscribeConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SubscribeConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SubscribeConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SubscribeConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SubscribeConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

