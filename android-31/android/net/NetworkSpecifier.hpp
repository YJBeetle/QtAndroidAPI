#pragma once

#include "../../JObject.hpp"


namespace android::net
{
	class NetworkSpecifier : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkSpecifier(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NetworkSpecifier(QJniObject obj);
		
		// Constructors
		NetworkSpecifier();
		
		// Methods
	};
} // namespace android::net

