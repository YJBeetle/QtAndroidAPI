#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::security
{
	class NetworkSecurityPolicy : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkSecurityPolicy(QAndroidJniObject obj);
		// Constructors
		NetworkSecurityPolicy() = default;
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean isCleartextTrafficPermitted();
		jboolean isCleartextTrafficPermitted(jstring arg0);
	};
} // namespace android::security

