#include "./LogRecord.hpp"
#include "./SimpleFormatter.hpp"

namespace java::util::logging
{
	// Fields
	
	SimpleFormatter::SimpleFormatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SimpleFormatter::SimpleFormatter()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.SimpleFormatter",
			"()V"
		);
	}
	
	// Methods
	jstring SimpleFormatter::format(java::util::logging::LogRecord arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
} // namespace java::util::logging

