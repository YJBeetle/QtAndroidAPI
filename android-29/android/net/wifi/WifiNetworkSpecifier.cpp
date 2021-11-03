#include "./WifiConfiguration.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/PatternMatcher.hpp"
#include "../../util/Pair.hpp"
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
	
	// QAndroidJniObject forward
	WifiNetworkSpecifier::WifiNetworkSpecifier(QAndroidJniObject obj) : android::net::NetworkSpecifier(obj) {}
	
	// Constructors
	
	// Methods
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
	jint WifiNetworkSpecifier::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
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

