#pragma once

#include "../../../../JByteArray.hpp"
#include "./WifiAwareDataPathSecurityConfig.def.hpp"
#include "../../../../JString.hpp"
#include "./WifiAwareDataPathSecurityConfig_Builder.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	inline WifiAwareDataPathSecurityConfig_Builder::WifiAwareDataPathSecurityConfig_Builder(jint arg0)
		: JObject(
			"android.net.wifi.aware.WifiAwareDataPathSecurityConfig$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::net::wifi::aware::WifiAwareDataPathSecurityConfig WifiAwareDataPathSecurityConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig;"
		);
	}
	inline android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder WifiAwareDataPathSecurityConfig_Builder::setPmk(JByteArray arg0) const
	{
		return callObjectMethod(
			"setPmk",
			"([B)Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder WifiAwareDataPathSecurityConfig_Builder::setPmkId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setPmkId",
			"([B)Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::wifi::aware::WifiAwareDataPathSecurityConfig_Builder WifiAwareDataPathSecurityConfig_Builder::setPskPassphrase(JString arg0) const
	{
		return callObjectMethod(
			"setPskPassphrase",
			"(Ljava/lang/String;)Landroid/net/wifi/aware/WifiAwareDataPathSecurityConfig$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
