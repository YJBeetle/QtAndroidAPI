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
	jint WifiNetworkSuggestion::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WifiNetworkSuggestion::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::MacAddress WifiNetworkSuggestion::getBssid()
	{
		return callObjectMethod(
			"getBssid",
			"()Landroid/net/MacAddress;"
		);
	}
	android::net::wifi::WifiEnterpriseConfig WifiNetworkSuggestion::getEnterpriseConfig()
	{
		return callObjectMethod(
			"getEnterpriseConfig",
			"()Landroid/net/wifi/WifiEnterpriseConfig;"
		);
	}
	JString WifiNetworkSuggestion::getPassphrase()
	{
		return callObjectMethod(
			"getPassphrase",
			"()Ljava/lang/String;"
		);
	}
	android::net::wifi::hotspot2::PasspointConfiguration WifiNetworkSuggestion::getPasspointConfig()
	{
		return callObjectMethod(
			"getPasspointConfig",
			"()Landroid/net/wifi/hotspot2/PasspointConfiguration;"
		);
	}
	jint WifiNetworkSuggestion::getPriority()
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jint WifiNetworkSuggestion::getPriorityGroup()
	{
		return callMethod<jint>(
			"getPriorityGroup",
			"()I"
		);
	}
	JString WifiNetworkSuggestion::getSsid()
	{
		return callObjectMethod(
			"getSsid",
			"()Ljava/lang/String;"
		);
	}
	jint WifiNetworkSuggestion::getSubscriptionId()
	{
		return callMethod<jint>(
			"getSubscriptionId",
			"()I"
		);
	}
	jint WifiNetworkSuggestion::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean WifiNetworkSuggestion::isAppInteractionRequired()
	{
		return callMethod<jboolean>(
			"isAppInteractionRequired",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isCarrierMerged()
	{
		return callMethod<jboolean>(
			"isCarrierMerged",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isCredentialSharedWithUser()
	{
		return callMethod<jboolean>(
			"isCredentialSharedWithUser",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isEnhancedOpen()
	{
		return callMethod<jboolean>(
			"isEnhancedOpen",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isHiddenSsid()
	{
		return callMethod<jboolean>(
			"isHiddenSsid",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isInitialAutojoinEnabled()
	{
		return callMethod<jboolean>(
			"isInitialAutojoinEnabled",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isMetered()
	{
		return callMethod<jboolean>(
			"isMetered",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isUntrusted()
	{
		return callMethod<jboolean>(
			"isUntrusted",
			"()Z"
		);
	}
	jboolean WifiNetworkSuggestion::isUserInteractionRequired()
	{
		return callMethod<jboolean>(
			"isUserInteractionRequired",
			"()Z"
		);
	}
	JString WifiNetworkSuggestion::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WifiNetworkSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

