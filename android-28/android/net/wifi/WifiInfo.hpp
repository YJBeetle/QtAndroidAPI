#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class NetworkInfo_DetailedState;
}
namespace android::net::wifi
{
	class SupplicantState;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net::wifi
{
	class WifiInfo : public JObject
	{
	public:
		// Fields
		static JString FREQUENCY_UNITS();
		static JString LINK_SPEED_UNITS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::NetworkInfo_DetailedState getDetailedStateOf(android::net::wifi::SupplicantState arg0);
		jint describeContents() const;
		JString getBSSID() const;
		jint getFrequency() const;
		jboolean getHiddenSSID() const;
		jint getIpAddress() const;
		jint getLinkSpeed() const;
		JString getMacAddress() const;
		jint getNetworkId() const;
		jint getRssi() const;
		JString getSSID() const;
		android::net::wifi::SupplicantState getSupplicantState() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

