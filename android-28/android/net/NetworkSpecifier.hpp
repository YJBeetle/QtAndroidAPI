#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class NetworkSpecifier : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSpecifier(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

