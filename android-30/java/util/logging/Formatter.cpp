#include "../../../JString.hpp"
#include "./Handler.hpp"
#include "./LogRecord.hpp"
#include "./Formatter.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	Formatter::Formatter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString Formatter::format(java::util::logging::LogRecord arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Formatter::formatMessage(java::util::logging::LogRecord arg0)
	{
		return callObjectMethod(
			"formatMessage",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Formatter::getHead(java::util::logging::Handler arg0)
	{
		return callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString Formatter::getTail(java::util::logging::Handler arg0)
	{
		return callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

