#pragma once

#ifndef JAVA_UTIL_LOGGING_HANDLER
#define JAVA_UTIL_LOGGING_HANDLER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::logging
{
	class LogManager;
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
	class ErrorManager;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}
namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::java::util::logging
{
	class Handler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void flush();
		void close();
		QAndroidJniObject getEncoding();
		void setFilter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getLevel();
		jboolean isLoggable(__jni_impl::java::util::logging::LogRecord arg0);
		QAndroidJniObject getFilter();
		void setLevel(__jni_impl::java::util::logging::Level arg0);
		void setFormatter(__jni_impl::java::util::logging::Formatter arg0);
		QAndroidJniObject getFormatter();
		void setEncoding(jstring arg0);
		void setErrorManager(__jni_impl::java::util::logging::ErrorManager arg0);
		QAndroidJniObject getErrorManager();
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "LogManager.hpp"
#include "Formatter.hpp"
#include "Level.hpp"
#include "ErrorManager.hpp"
#include "LogRecord.hpp"
#include "../../lang/Exception.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void Handler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.Handler",
			"(V)V");
	}
	
	// Methods
	void Handler::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void Handler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject Handler::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;");
	}
	void Handler::setFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;");
	}
	jboolean Handler::isLoggable(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;");
	}
	void Handler::setLevel(__jni_impl::java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object());
	}
	void Handler::setFormatter(__jni_impl::java::util::logging::Formatter arg0)
	{
		__thiz.callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::getFormatter()
	{
		return __thiz.callObjectMethod(
			"getFormatter",
			"()Ljava/util/logging/Formatter;");
	}
	void Handler::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Handler::setErrorManager(__jni_impl::java::util::logging::ErrorManager arg0)
	{
		__thiz.callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Handler::getErrorManager()
	{
		return __thiz.callObjectMethod(
			"getErrorManager",
			"()Ljava/util/logging/ErrorManager;");
	}
	void Handler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class Handler : public __jni_impl::java::util::logging::Handler
	{
	public:
		Handler(QAndroidJniObject obj) { __thiz = obj; }
		Handler()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_HANDLER

