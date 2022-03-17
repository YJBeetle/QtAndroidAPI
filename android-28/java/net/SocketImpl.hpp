#pragma once

#include "../io/FileDescriptor.def.hpp"
#include "../io/InputStream.def.hpp"
#include "../io/OutputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./InetAddress.def.hpp"
#include "./SocketAddress.def.hpp"
#include "./SocketImpl.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SocketImpl::SocketImpl()
		: JObject(
			"java.net.SocketImpl",
			"()V"
		) {}
	
	// Methods
	inline JString SocketImpl::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

