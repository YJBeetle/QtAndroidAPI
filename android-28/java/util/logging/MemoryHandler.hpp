#pragma once

#include "../../../JArray.hpp"
#include "./Handler.def.hpp"
#include "./Level.def.hpp"
#include "./LogRecord.def.hpp"
#include "./MemoryHandler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline MemoryHandler::MemoryHandler()
		: java::util::logging::Handler(
			"java.util.logging.MemoryHandler",
			"()V"
		) {}
	inline MemoryHandler::MemoryHandler(java::util::logging::Handler arg0, jint arg1, java::util::logging::Level arg2)
		: java::util::logging::Handler(
			"java.util.logging.MemoryHandler",
			"(Ljava/util/logging/Handler;ILjava/util/logging/Level;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline void MemoryHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void MemoryHandler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline java::util::logging::Level MemoryHandler::getPushLevel() const
	{
		return callObjectMethod(
			"getPushLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	inline jboolean MemoryHandler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	inline void MemoryHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	inline void MemoryHandler::push() const
	{
		callMethod<void>(
			"push",
			"()V"
		);
	}
	inline void MemoryHandler::setPushLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setPushLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Handler.hpp"

