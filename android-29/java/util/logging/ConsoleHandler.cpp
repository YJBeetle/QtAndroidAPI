#include "./LogRecord.hpp"
#include "./ConsoleHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	ConsoleHandler::ConsoleHandler(QAndroidJniObject obj) : java::util::logging::StreamHandler(obj) {}
	
	// Constructors
	ConsoleHandler::ConsoleHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.ConsoleHandler",
			"()V"
		) {}
	
	// Methods
	void ConsoleHandler::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ConsoleHandler::publish(java::util::logging::LogRecord arg0)
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging
