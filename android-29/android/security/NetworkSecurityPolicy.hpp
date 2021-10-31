#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class NetworkSecurityPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSecurityPolicy(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSecurityPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean isCleartextTrafficPermitted();
		jboolean isCleartextTrafficPermitted(jstring arg0);
	};
} // namespace android::security

