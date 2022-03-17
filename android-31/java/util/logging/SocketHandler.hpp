#pragma once

#include "../../../JString.hpp"
#include "../../net/Socket.def.hpp"
#include "./LogRecord.def.hpp"
#include "./SocketHandler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline SocketHandler::SocketHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.SocketHandler",
			"()V"
		) {}
	inline SocketHandler::SocketHandler(JString arg0, jint arg1)
		: java::util::logging::StreamHandler(
			"java.util.logging.SocketHandler",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline void SocketHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SocketHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Handler.hpp"
#include "./StreamHandler.hpp"

