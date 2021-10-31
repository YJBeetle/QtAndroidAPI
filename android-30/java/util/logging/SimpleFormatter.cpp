#include "./LogRecord.hpp"
#include "./SimpleFormatter.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	SimpleFormatter::SimpleFormatter(QAndroidJniObject obj) : java::util::logging::Formatter(obj) {}
	
	// Constructors
	SimpleFormatter::SimpleFormatter()
		: java::util::logging::Formatter(
			"java.util.logging.SimpleFormatter",
			"()V"
		) {}
	
	// Methods
	jstring SimpleFormatter::format(java::util::logging::LogRecord arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace java::util::logging

