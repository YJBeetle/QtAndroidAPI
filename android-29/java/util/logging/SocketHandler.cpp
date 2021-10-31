#include "../../net/Socket.hpp"
#include "./LogRecord.hpp"
#include "./SocketHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	SocketHandler::SocketHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SocketHandler::SocketHandler()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SocketHandler",
			"()V"
		);
	}
	SocketHandler::SocketHandler(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SocketHandler",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	void SocketHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketHandler::publish(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

