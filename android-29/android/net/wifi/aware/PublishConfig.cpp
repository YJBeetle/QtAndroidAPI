#include "../../../os/Parcel.hpp"
#include "./PublishConfig.hpp"

namespace android::net::wifi::aware
{
	// Fields
	QAndroidJniObject PublishConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.PublishConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PublishConfig::PUBLISH_TYPE_SOLICITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_SOLICITED"
		);
	}
	jint PublishConfig::PUBLISH_TYPE_UNSOLICITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_UNSOLICITED"
		);
	}
	
	// QAndroidJniObject forward
	PublishConfig::PublishConfig(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint PublishConfig::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PublishConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PublishConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PublishConfig::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

