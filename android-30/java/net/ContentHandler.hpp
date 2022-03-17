#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "./URLConnection.def.hpp"
#include "./ContentHandler.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline ContentHandler::ContentHandler()
		: JObject(
			"java.net.ContentHandler",
			"()V"
		) {}
	
	// Methods
	inline JObject ContentHandler::getContent(java::net::URLConnection arg0) const
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject ContentHandler::getContent(java::net::URLConnection arg0, JArray arg1) const
	{
		return callObjectMethod(
			"getContent",
			"(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace java::net

// Base class headers

