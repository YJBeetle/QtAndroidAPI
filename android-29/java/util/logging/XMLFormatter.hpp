#pragma once

#include "../../../JString.hpp"
#include "../../lang/StringBuilder.def.hpp"
#include "./Handler.def.hpp"
#include "./LogManager.def.hpp"
#include "./LogRecord.def.hpp"
#include "./XMLFormatter.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline XMLFormatter::XMLFormatter()
		: java::util::logging::Formatter(
			"java.util.logging.XMLFormatter",
			"()V"
		) {}
	
	// Methods
	inline JString XMLFormatter::format(java::util::logging::LogRecord arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString XMLFormatter::getHead(java::util::logging::Handler arg0) const
	{
		return callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString XMLFormatter::getTail(java::util::logging::Handler arg0) const
	{
		return callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Formatter.hpp"

