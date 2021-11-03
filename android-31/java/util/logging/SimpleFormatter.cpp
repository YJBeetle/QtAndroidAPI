#include "../../../JString.hpp"
#include "./LogRecord.hpp"
#include "./SimpleFormatter.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	SimpleFormatter::SimpleFormatter(QJniObject obj) : java::util::logging::Formatter(obj) {}
	
	// Constructors
	SimpleFormatter::SimpleFormatter()
		: java::util::logging::Formatter(
			"java.util.logging.SimpleFormatter",
			"()V"
		) {}
	
	// Methods
	JString SimpleFormatter::format(java::util::logging::LogRecord arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

