#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::net
{
	class SocketAddress : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketAddress(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SocketAddress(QJniObject obj);
		
		// Constructors
		SocketAddress();
		
		// Methods
	};
} // namespace java::net

