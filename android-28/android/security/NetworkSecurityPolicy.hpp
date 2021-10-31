#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class NetworkSecurityPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSecurityPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSecurityPolicy(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::security::NetworkSecurityPolicy getInstance();
		jboolean isCleartextTrafficPermitted();
		jboolean isCleartextTrafficPermitted(jstring arg0);
	};
} // namespace android::security

