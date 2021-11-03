#include "../../../../os/Parcel.hpp"
#include "./HomeSp.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	JObject HomeSp::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	HomeSp::HomeSp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	HomeSp::HomeSp()
		: JObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"()V"
		) {}
	HomeSp::HomeSp(android::net::wifi::hotspot2::pps::HomeSp &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.HomeSp",
			"(Landroid/net/wifi/hotspot2/pps/HomeSp;)V",
			arg0.object()
		) {}
	
	// Methods
	jint HomeSp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean HomeSp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring HomeSp::getFqdn()
	{
		return callObjectMethod(
			"getFqdn",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HomeSp::getFriendlyName()
	{
		return callObjectMethod(
			"getFriendlyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlongArray HomeSp::getRoamingConsortiumOis()
	{
		return callObjectMethod(
			"getRoamingConsortiumOis",
			"()[J"
		).object<jlongArray>();
	}
	jint HomeSp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void HomeSp::setFqdn(jstring arg0)
	{
		callMethod<void>(
			"setFqdn",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HomeSp::setFriendlyName(jstring arg0)
	{
		callMethod<void>(
			"setFriendlyName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HomeSp::setRoamingConsortiumOis(jlongArray arg0)
	{
		callMethod<void>(
			"setRoamingConsortiumOis",
			"([J)V",
			arg0
		);
	}
	jstring HomeSp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void HomeSp::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

