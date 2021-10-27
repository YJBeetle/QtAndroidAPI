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
	
	PublishConfig::PublishConfig(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint PublishConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PublishConfig::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PublishConfig::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PublishConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PublishConfig::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

