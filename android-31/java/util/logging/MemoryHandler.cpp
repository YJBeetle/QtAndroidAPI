#include "../../../JArray.hpp"
#include "./Handler.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"
#include "./MemoryHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	MemoryHandler::MemoryHandler(QJniObject obj) : java::util::logging::Handler(obj) {}
	
	// Constructors
	MemoryHandler::MemoryHandler()
		: java::util::logging::Handler(
			"java.util.logging.MemoryHandler",
			"()V"
		) {}
	MemoryHandler::MemoryHandler(java::util::logging::Handler arg0, jint arg1, java::util::logging::Level arg2)
		: java::util::logging::Handler(
			"java.util.logging.MemoryHandler",
			"(Ljava/util/logging/Handler;ILjava/util/logging/Level;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	void MemoryHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MemoryHandler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	java::util::logging::Level MemoryHandler::getPushLevel() const
	{
		return callObjectMethod(
			"getPushLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean MemoryHandler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	void MemoryHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	void MemoryHandler::push() const
	{
		callMethod<void>(
			"push",
			"()V"
		);
	}
	void MemoryHandler::setPushLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setPushLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

