#pragma once

#include "../../../../JObject.hpp"


namespace android::net::wifi::aware
{
	class PeerHandle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PeerHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PeerHandle(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::wifi::aware

