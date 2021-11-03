#include "../../../JString.hpp"
#include "../../lang/StringBuilder.hpp"
#include "./Handler.hpp"
#include "./LogManager.hpp"
#include "./LogRecord.hpp"
#include "./XMLFormatter.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	XMLFormatter::XMLFormatter(QAndroidJniObject obj) : java::util::logging::Formatter(obj) {}
	
	// Constructors
	XMLFormatter::XMLFormatter()
		: java::util::logging::Formatter(
			"java.util.logging.XMLFormatter",
			"()V"
		) {}
	
	// Methods
	JString XMLFormatter::format(java::util::logging::LogRecord arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString XMLFormatter::getHead(java::util::logging::Handler arg0)
	{
		return callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JString XMLFormatter::getTail(java::util::logging::Handler arg0)
	{
		return callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

