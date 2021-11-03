#include "../MacAddress.hpp"
#include "./WifiEnterpriseConfig.hpp"
#include "./hotspot2/PasspointConfiguration.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WifiNetworkSuggestion.hpp"

namespace android::net::wifi
{
	// Fields
	JObject WifiNetworkSuggestion::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.WifiNetworkSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WifiNetworkSuggestion::RANDOMIZATION_NON_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiNetworkSuggestion",
			"RANDOMIZATION_NON_PERSISTENT"
		);
	}
	jint WifiNetworkSuggestion::RANDOMIZATION_PERSISTENT()
	{
		return getStaticField<jint>(
			"android.net.wifi.WifiNetworkSuggestion",
			"RANDOMIZATION_PERSISTENT"
		);
	}
	
	// QAndroidJniObject forward
	WifiNetworkSuggestion::WifiNetworkSuggestion(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WifiNetworkSuggestion::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSuggestion::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::MacAddress WifiNetworkSuggestion::getBssid() const
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	android::net::wifi::WifiEnterpriseConfig WifiNetworkSuggestion::getEnterpriseConfig() const
	{
		return callObjectMethod(
			"getEnterpriseConfig",
			"()Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	JString WifiNetworkSuggestion::getPassphrase() const
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	android::net::wifi::hotspot2::PasspointConfiguration WifiNetworkSuggestion::getPasspointConfig() const
	{
		return callObjectMethod(
			"getPasspointConfig",
			"()Landroid/net/wifi/hotspot2/PasspointConfiguration;"
		);
	}
	jint WifiNetworkSuggestion::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jint WifiNetworkSuggestion::getPriorityGroup() const
	{
		return callMethod<jint>(
			"getPriorityGroup",
			"()I"
		);
	}
	JString WifiNetworkSuggestion::getSsid() const
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		);
	}
	jint WifiNetworkSuggestion::getSubscriptionId() const
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint WifiNetworkSuggestion::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WifiNetworkSuggestion::isAppInteractionRequired() const
	{
		return callMethod<jboolean>(
			"isAppInteractionRequired",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isCarrierMerged() const
	{
		return callMethod<jboolean>(
			"isCarrierMerged",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isCredentialSharedWithUser() const
	{
		return callMethod<jboolean>(
			"isCredentialSharedWithUser",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isEnhancedOpen() const
	{
		return callMethod<jboolean>(
			"isEnhancedOpen",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isHiddenSsid() const
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isInitialAutojoinEnabled() const
	{
		return callMethod<jboolean>(
			"isInitialAutojoinEnabled",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isMetered() const
	{
		return callMethod<jboolean>(
			"isMetered",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isUntrusted() const
	{
		return callMethod<jboolean>(
			"isUntrusted",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isUserInteractionRequired() const
	{
		return callMethod<jboolean>(
			"isUserInteractionRequired",
			"()Z"
		);
	}
	JString WifiNetworkSuggestion::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiNetworkSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

