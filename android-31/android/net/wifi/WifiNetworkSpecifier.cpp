#include "../NetworkSpecifier.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSpecifier.hpp"

namespace android::net::wifi
{
	// Fields
	JObject WifiNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean WifiNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0) const
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	jint WifiNetworkSpecifier::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSpecifier::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiNetworkSpecifier::getBand() const
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	jint WifiNetworkSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::net::NetworkSpecifier WifiNetworkSpecifier::redact() const
	{
		return callObjectMethod(
			"redact",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	JString WifiNetworkSpecifier::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

