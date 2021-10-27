#include "./Handler.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"
#include "./MemoryHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	MemoryHandler::MemoryHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MemoryHandler::MemoryHandler()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.MemoryHandler",
			"()V"
		);
	}
	MemoryHandler::MemoryHandler(java::util::logging::Handler &arg0, jint &arg1, java::util::logging::Level &arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.MemoryHandler",
			"(Ljava/util/logging/Handler;ILjava/util/logging/Level;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void MemoryHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MemoryHandler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject MemoryHandler::getPushLevel()
	{
		return __thiz.callObjectMethod(
			"getPushLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean MemoryHandler::isLoggable(java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
		);
	}
	void MemoryHandler::publish(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void MemoryHandler::push()
	{
		__thiz.callMethod<void>(
			"push",
			"()V"
		);
	}
	void MemoryHandler::setPushLevel(java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setPushLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

