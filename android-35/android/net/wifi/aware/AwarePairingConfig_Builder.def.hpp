#pragma once

#include "../../../../JObject.hpp"

namespace android::net::wifi::aware
{
	class AwarePairingConfig;
}

namespace android::net::wifi::aware
{
	class AwarePairingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AwarePairingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AwarePairingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AwarePairingConfig_Builder();
		
		// Methods
		android::net::wifi::aware::AwarePairingConfig build() const;
		android::net::wifi::aware::AwarePairingConfig_Builder setBootstrappingMethods(jint arg0) const;
		android::net::wifi::aware::AwarePairingConfig_Builder setPairingCacheEnabled(jboolean arg0) const;
		android::net::wifi::aware::AwarePairingConfig_Builder setPairingSetupEnabled(jboolean arg0) const;
		android::net::wifi::aware::AwarePairingConfig_Builder setPairingVerificationEnabled(jboolean arg0) const;
	};
} // namespace android::net::wifi::aware

