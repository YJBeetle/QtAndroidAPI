#include "../../NetworkSpecifier.hpp"
#include "../../../os/Parcel.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareNetworkSpecifier.hpp"

namespace android::net::wifi::aware
{
	// Fields
	JObject WifiAwareNetworkSpecifier::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.WifiAwareNetworkSpecifier",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WifiAwareNetworkSpecifier::WifiAwareNetworkSpecifier(QAndroidJniObject obj) : android::net::NetworkSpecifier(obj) {}
	
	// Constructors
	
	// Methods
	jboolean WifiAwareNetworkSpecifier::canBeSatisfiedBy(android::net::NetworkSpecifier arg0)
	{
		return callMethod<jboolean>(
			"canBeSatisfiedBy",
			"(Landroid/net/NetworkSpecifier;)Z",
			arg0.object()
		);
	}
	jint WifiAwareNetworkSpecifier::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiAwareNetworkSpecifier::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WifiAwareNetworkSpecifier::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString WifiAwareNetworkSpecifier::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiAwareNetworkSpecifier::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

