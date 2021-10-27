#include "../../lang/StringBuilder.hpp"
#include "./Handler.hpp"
#include "./LogManager.hpp"
#include "./LogRecord.hpp"
#include "./XMLFormatter.hpp"

namespace java::util::logging
{
	// Fields
	
	XMLFormatter::XMLFormatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	XMLFormatter::XMLFormatter()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.XMLFormatter",
			"()V"
		);
	}
	
	// Methods
	jstring XMLFormatter::format(java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring XMLFormatter::getHead(java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring XMLFormatter::getTail(java::util::logging::Handler arg0)
	{
		return __thiz.callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::util::logging

