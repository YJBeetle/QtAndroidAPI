#pragma once

#ifndef JAVA_UTIL_LOGGING_STREAMHANDLER
#define JAVA_UTIL_LOGGING_STREAMHANDLER

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::util::logging
{
	class Formatter;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class StreamHandler : public __jni_impl::java::util::logging::Handler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1);
		void __constructor();
		
		// Methods
		void flush();
		void close();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../io/OutputStream.hpp"
#include "../../io/Writer.hpp"
#include "Level.hpp"
#include "Formatter.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void StreamHandler::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.StreamHandler",
			"(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void StreamHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.StreamHandler",
			"()V"
		);
	}
	
	// Methods
	void StreamHandler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void StreamHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean StreamHandler::isLoggable(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
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
	void StreamHandler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class StreamHandler : public __jni_impl::java::util::logging::StreamHandler
	{
	public:
		StreamHandler(QAndroidJniObject obj) { __thiz = obj; }
		StreamHandler(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		StreamHandler()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_STREAMHANDLER

