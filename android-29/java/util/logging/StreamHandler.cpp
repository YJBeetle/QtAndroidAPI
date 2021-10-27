#include "../../io/OutputStream.hpp"
#include "../../io/Writer.hpp"
#include "./Formatter.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"
#include "./StreamHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	StreamHandler::StreamHandler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StreamHandler::StreamHandler()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.StreamHandler",
			"()V"
		);
	}
	StreamHandler::StreamHandler(java::io::OutputStream &arg0, java::util::logging::Formatter &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.StreamHandler",
			"(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void StreamHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void StreamHandler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean StreamHandler::isLoggable(java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
		);
	}
	void StreamHandler::publish(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void StreamHandler::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StreamHandler::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace java::util::logging

