#pragma once

#ifndef JAVA_UTIL_LOGGING_XMLFORMATTER
#define JAVA_UTIL_LOGGING_XMLFORMATTER

#include "../../../__JniBaseClass.hpp"
#include "Formatter.hpp"

namespace __jni_impl::java::util::logging
{
	class LogManager;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::java::util::logging
{
	class Handler;
}

namespace __jni_impl::java::util::logging
{
	class XMLFormatter : public __jni_impl::java::util::logging::Formatter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject format(__jni_impl::java::util::logging::LogRecord arg0);
		QAndroidJniObject getHead(__jni_impl::java::util::logging::Handler arg0);
		QAndroidJniObject getTail(__jni_impl::java::util::logging::Handler arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "LogManager.hpp"
#include "LogRecord.hpp"
#include "../../lang/StringBuilder.hpp"
#include "Handler.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void XMLFormatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.XMLFormatter",
			"()V");
	}
	
	// Methods
	QAndroidJniObject XMLFormatter::format(__jni_impl::java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject XMLFormatter::getHead(__jni_impl::java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject XMLFormatter::getTail(__jni_impl::java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class XMLFormatter : public __jni_impl::java::util::logging::XMLFormatter
	{
	public:
		XMLFormatter(QAndroidJniObject obj) { __thiz = obj; }
		XMLFormatter()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_XMLFORMATTER

