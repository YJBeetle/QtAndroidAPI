#include "../NetworkSpecifier.hpp"
#include "../../os/Parcel.hpp"
#include "./WifiNetworkSpecifier.hpp"

namespace android::net::wifi
{
	// Fields
	__JniBaseClass WifiNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	WifiNetworkSpecifier::WifiNetworkSpecifier(QJniObject obj) : android::net::NetworkSpecifier(obj) {}
	
	// Constructors
	
	// Methods
	jboolean WifiNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0)
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	jint WifiNetworkSpecifier::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSpecifier::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WifiNetworkSpecifier::getBand()
	{
		return callMethod<jint>(
			"getBand",
			"()I"
		);
	}
	jint WifiNetworkSpecifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	android::net::NetworkSpecifier WifiNetworkSpecifier::redact()
	{
		return callObjectMethod(
			"redact",
			"()Landroid/net/NetworkSpecifier;"
		);
	}
	jstring WifiNetworkSpecifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WifiNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

