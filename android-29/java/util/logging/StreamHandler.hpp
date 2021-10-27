#pragma once

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
	class Formatter;
}
namespace __jni_impl::java::util::logging
{
	class Level;
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
		void __constructor();
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1);
		
		// Methods
		void close();
		void flush();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../io/OutputStream.hpp"
#include "../../io/Writer.hpp"
#include "Formatter.hpp"
#include "Level.hpp"
#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void StreamHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.StreamHandler",
			"()V"
		);
	}
	void StreamHandler::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1)
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
	jboolean StreamHandler::isLoggable(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object()
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
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class StreamHandler : public __jni_impl::java::util::logging::StreamHandler
	{
	public:
		StreamHandler(QAndroidJniObject obj) { __thiz = obj; }
		StreamHandler()
		{
			__constructor();
		}
		StreamHandler(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::logging::Formatter arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::logging

