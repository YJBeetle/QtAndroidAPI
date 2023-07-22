#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi
{
	class WifiInfo;
}
class JString;

namespace android::net::wifi
{
	class WifiInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiInfo_Builder();
		
		// Methods
		android::net::wifi::WifiInfo build() const;
		android::net::wifi::WifiInfo_Builder setBssid(JString arg0) const;
		android::net::wifi::WifiInfo_Builder setCurrentSecurityType(jint arg0) const;
		android::net::wifi::WifiInfo_Builder setNetworkId(jint arg0) const;
		android::net::wifi::WifiInfo_Builder setRssi(jint arg0) const;
		android::net::wifi::WifiInfo_Builder setSsid(JByteArray arg0) const;
	};
} // namespace android::net::wifi

