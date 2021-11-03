#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class NetworkSpecifier : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkSpecifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSpecifier(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::net

