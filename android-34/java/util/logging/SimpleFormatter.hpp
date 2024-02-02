#pragma once

#include "../../../JString.hpp"
#include "./LogRecord.def.hpp"
#include "./SimpleFormatter.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline SimpleFormatter::SimpleFormatter()
		: java::util::logging::Formatter(
			"java.util.logging.SimpleFormatter",
			"()V"
		) {}
	
	// Methods
	inline JString SimpleFormatter::format(java::util::logging::LogRecord arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Formatter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::logging;
#endif
