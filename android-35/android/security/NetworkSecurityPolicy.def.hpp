#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::security
{
	class NetworkSecurityPolicy : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSecurityPolicy(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSecurityPolicy(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::security::NetworkSecurityPolicy getInstance();
		jboolean isCleartextTrafficPermitted() const;
		jboolean isCleartextTrafficPermitted(JString arg0) const;
	};
} // namespace android::security

