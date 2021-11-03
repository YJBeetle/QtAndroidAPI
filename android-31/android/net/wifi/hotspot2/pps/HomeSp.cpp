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
	jint HomeSp::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean HomeSp::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString HomeSp::getFqdn()
	{
		return callObjectMethod(
			"getFqdn",
			"()Ljava/lang/String;"
		);
	}
	JString HomeSp::getFriendlyName()
	{
		return callObjectMethod(
			"getFriendlyName",
			"()Ljava/lang/String;"
		);
	}
	JLongArray HomeSp::getMatchAllOis()
	{
		return callObjectMethod(
			"getMatchAllOis",
			"()[J"
		);
	}
	JLongArray HomeSp::getMatchAnyOis()
	{
		return callObjectMethod(
			"getMatchAnyOis",
			"()[J"
		);
	}
	JObject HomeSp::getOtherHomePartnersList()
	{
		return callObjectMethod(
			"getOtherHomePartnersList",
			"()Ljava/util/Collection;"
		);
	}
	JLongArray HomeSp::getRoamingConsortiumOis()
	{
		return callObjectMethod(
			"getRoamingConsortiumOis",
			"()[J"
		);
	}
	jint HomeSp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void HomeSp::setFqdn(JString arg0)
	{
		callMethod<void>(
			"setFqdn",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HomeSp::setFriendlyName(JString arg0)
	{
		callMethod<void>(
			"setFriendlyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void HomeSp::setMatchAllOis(JLongArray arg0)
	{
		callMethod<void>(
			"setMatchAllOis",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	void HomeSp::setMatchAnyOis(JLongArray arg0)
	{
		callMethod<void>(
			"setMatchAnyOis",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	void HomeSp::setOtherHomePartnersList(JObject arg0)
	{
		callMethod<void>(
			"setOtherHomePartnersList",
			"(Ljava/util/Collection;)V",
			arg0.object()
		);
	}
	void HomeSp::setRoamingConsortiumOis(JLongArray arg0)
	{
		callMethod<void>(
			"setRoamingConsortiumOis",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	JString HomeSp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

