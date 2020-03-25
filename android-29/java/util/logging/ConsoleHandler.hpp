#pragma once

#ifndef JAVA_UTIL_LOGGING_CONSOLEHANDLER
#define JAVA_UTIL_LOGGING_CONSOLEHANDLER

#include "../../../__JniBaseClass.hpp"
#include "Handler.hpp"
#include "StreamHandler.hpp"

namespace __jni_impl::java::util::logging
{
	class LogRecord;
}

namespace __jni_impl::java::util::logging
{
	class ConsoleHandler : public __jni_impl::java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void publish(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "LogRecord.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void ConsoleHandler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.ConsoleHandler",
			"()V");
	}
	
	// Methods
	void ConsoleHandler::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void ConsoleHandler::publish(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class ConsoleHandler : public __jni_impl::java::util::logging::ConsoleHandler
	{
	public:
		ConsoleHandler(QAndroidJniObject obj) { __thiz = obj; }
		ConsoleHandler()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_CONSOLEHANDLER

