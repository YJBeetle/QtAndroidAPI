#pragma once

#include "./LogRecord.def.hpp"
#include "./ConsoleHandler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline ConsoleHandler::ConsoleHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.ConsoleHandler",
			"()V"
		) {}
	
	// Methods
	inline void ConsoleHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void ConsoleHandler::publish(java::util::logging::LogRecord arg0) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::logging;
#endif
