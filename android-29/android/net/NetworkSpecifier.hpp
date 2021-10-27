#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class NetworkSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		
		NetworkSpecifier(QAndroidJniObject obj);
		// Constructors
		NetworkSpecifier();
		
		// Methods
	};
} // namespace android::net

