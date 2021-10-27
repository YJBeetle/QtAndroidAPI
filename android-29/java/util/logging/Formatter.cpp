#include "./Handler.hpp"
#include "./LogRecord.hpp"
#include "./Formatter.hpp"

namespace java::util::logging
{
	// Fields
	
	Formatter::Formatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring Formatter::format(java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::formatMessage(java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"formatMessage",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::getHead(java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring Formatter::getTail(java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::util::logging

