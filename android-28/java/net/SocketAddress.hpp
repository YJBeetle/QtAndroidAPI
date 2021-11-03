#pragma once

#include "../../JObject.hpp"


namespace java::net
{
	class SocketAddress : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketAddress(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SocketAddress(QAndroidJniObject obj);
		
		// Constructors
		SocketAddress();
		
		// Methods
	};
} // namespace java::net

