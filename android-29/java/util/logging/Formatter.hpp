#pragma once

#ifndef JAVA_UTIL_LOGGING_FORMATTER
#define JAVA_UTIL_LOGGING_FORMATTER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::logging
{
	class LogRecord;
}
namespace __jni_impl::java::util::logging
{
	class Handler;
}

namespace __jni_impl::java::util::logging
{
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring format(__jni_impl::java::util::logging::LogRecord arg0);
		jstring getHead(__jni_impl::java::util::logging::Handler arg0);
		jstring getTail(__jni_impl::java::util::logging::Handler arg0);
		jstring formatMessage(__jni_impl::java::util::logging::LogRecord arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "LogRecord.hpp"
#include "Handler.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void Formatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.Formatter",
			"(V)V");
	}
	
	// Methods
	jstring Formatter::format(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::getHead(__jni_impl::java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::getTail(__jni_impl::java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::formatMessage(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"formatMessage",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class Formatter : public __jni_impl::java::util::logging::Formatter
	{
	public:
		Formatter(QAndroidJniObject obj) { __thiz = obj; }
		Formatter()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_FORMATTER

