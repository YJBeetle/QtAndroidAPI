#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi::aware
{
	class WifiAwareDataPathSecurityConfig;
}
class JString;

namespace android::net::wifi::aware
{
	class WifiAwareDataPathSecurityConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiAwareDataPathSecurityConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareDataPathSecurityConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WifiAwareDataPathSecurityConfig_Builder(jint arg0);
		
		// Methods
		android::net::wifi::aware::WifiAwareDataPathSecurityConfig build() const;
		android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder setPmk(JByteArray arg0) const;
		android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder setPmkId(JByteArray arg0) const;
		android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder setPskPassphrase(JString arg0) const;
	};
} // namespace android::net::wifi::aware

