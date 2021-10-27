#include "./LogRecord.hpp"
#include "./ConsoleHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	ConsoleHandler::ConsoleHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConsoleHandler::ConsoleHandler()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.ConsoleHandler",
			"()V"
		);
	}
	
	// Methods
	void ConsoleHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ConsoleHandler::publish(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

