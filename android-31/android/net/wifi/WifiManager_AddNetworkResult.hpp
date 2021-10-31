#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WifiManager_AddNetworkResult : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint STATUS_ADD_PASSPOINT_FAILURE();
		static jint STATUS_ADD_WIFI_CONFIG_FAILURE();
		static jint STATUS_FAILURE_UNKNOWN();
		static jint STATUS_FAILURE_UPDATE_NETWORK_KEYS();
		static jint STATUS_INVALID_CONFIGURATION();
		static jint STATUS_INVALID_CONFIGURATION_ENTERPRISE();
		static jint STATUS_NO_PERMISSION();
		static jint STATUS_NO_PERMISSION_MODIFY_CONFIG();
		static jint STATUS_NO_PERMISSION_MODIFY_MAC_RANDOMIZATION();
		static jint STATUS_NO_PERMISSION_MODIFY_PROXY_SETTING();
		static jint STATUS_SUCCESS();
		jint networkId();
		jint statusCode();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiManager_AddNetworkResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiManager_AddNetworkResult(QJniObject obj);
		
		// Constructors
		WifiManager_AddNetworkResult(jint arg0, jint arg1);
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

