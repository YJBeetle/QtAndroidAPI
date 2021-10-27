#include "./pps/Credential.hpp"
#include "./pps/HomeSp.hpp"
#include "../../../os/Parcel.hpp"
#include "./PasspointConfiguration.hpp"

namespace android::net::wifi::hotspot2
{
	// Fields
	QAndroidJniObject PasspointConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PasspointConfiguration::PasspointConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PasspointConfiguration::PasspointConfiguration()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"()V"
		);
	}
	PasspointConfiguration::PasspointConfiguration(android::net::wifi::hotspot2::PasspointConfiguration &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.hotspot2.PasspointConfiguration",
			"(Landroid/net/wifi/hotspot2/PasspointConfiguration;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint PasspointConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PasspointConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PasspointConfiguration::getCredential()
	{
		return __thiz.callObjectMethod(
			"getCredential",
			"()Landroid/net/wifi/hotspot2/pps/Credential;"
		);
	}
	QAndroidJniObject PasspointConfiguration::getHomeSp()
	{
		return __thiz.callObjectMethod(
			"getHomeSp",
			"()Landroid/net/wifi/hotspot2/pps/HomeSp;"
		);
	}
	jint PasspointConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PasspointConfiguration::setCredential(android::net::wifi::hotspot2::pps::Credential arg0)
	{
		__thiz.callMethod<void>(
			"setCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential;)V",
			arg0.__jniObject().object()
		);
	}
	void PasspointConfiguration::setHomeSp(android::net::wifi::hotspot2::pps::HomeSp arg0)
	{
		__thiz.callMethod<void>(
			"setHomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PasspointConfiguration::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PasspointConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2

