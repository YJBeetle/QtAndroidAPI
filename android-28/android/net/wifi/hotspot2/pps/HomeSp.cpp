#include "../../../../../JLongArray.hpp"
#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
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
	jint HomeSp::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean HomeSp::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString HomeSp::getFqdn() const
	{
		return callObjectMethod(
			"getFqdn",
			"()Ljava/lang/String;"
		);
	}
	JString HomeSp::getFriendlyName() const
	{
		return callObjectMethod(
			"getFriendlyName",
			"()Ljava/lang/String;"
		);
	}
	JLongArray HomeSp::getRoamingConsortiumOis() const
	{
		return callObjectMethod(
			"getRoamingConsortiumOis",
			"()[J"
		);
	}
	jint HomeSp::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void HomeSp::setFqdn(JString arg0) const
	{
		callMethod<void>(
			"setFqdn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HomeSp::setFriendlyName(JString arg0) const
	{
		callMethod<void>(
			"setFriendlyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HomeSp::setRoamingConsortiumOis(JLongArray arg0) const
	{
		callMethod<void>(
			"setRoamingConsortiumOis",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	JString HomeSp::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void HomeSp::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

