#include "../../net/Socket.hpp"
#include "./LogRecord.hpp"
#include "./SocketHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	SocketHandler::SocketHandler(QAndroidJniObject obj) : java::util::logging::StreamHandler(obj) {}
	
	// Constructors
	SocketHandler::SocketHandler()
		: java::util::logging::StreamHandler(
			"java.util.logging.SocketHandler",
			"()V"
		) {}
	SocketHandler::SocketHandler(jstring arg0, jint arg1)
		: java::util::logging::StreamHandler(
			"java.util.logging.SocketHandler",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	
	// Methods
	void SocketHandler::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketHandler::publish(java::util::logging::LogRecord arg0)
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging
