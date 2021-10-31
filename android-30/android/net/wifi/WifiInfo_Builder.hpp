#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net::wifi
{
	class WifiInfo;
}

namespace android::net::wifi
{
	class WifiInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo_Builder(QJniObject obj);
		
		// Constructors
		WifiInfo_Builder();
		
		// Methods
		android::net::wifi::WifiInfo build();
		android::net::wifi::WifiInfo_Builder setBssid(jstring arg0);
		android::net::wifi::WifiInfo_Builder setNetworkId(jint arg0);
		android::net::wifi::WifiInfo_Builder setRssi(jint arg0);
		android::net::wifi::WifiInfo_Builder setSsid(jbyteArray arg0);
	};
} // namespace android::net::wifi

