#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class NetworkSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSpecifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSpecifier(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

