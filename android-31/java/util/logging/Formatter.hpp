#pragma once

#include "../../../JString.hpp"
#include "./Handler.def.hpp"
#include "./LogRecord.def.hpp"
#include "./Formatter.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString Formatter::format(java::util::logging::LogRecord arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Formatter::formatMessage(java::util::logging::LogRecord arg0) const
	{
		return callObjectMethod(
			"formatMessage",
			"(Ljava/util/logging/LogRecord;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Formatter::getHead(java::util::logging::Handler arg0) const
	{
		return callObjectMethod(
			"getHead",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JString Formatter::getTail(java::util::logging::Handler arg0) const
	{
		return callObjectMethod(
			"getTail",
			"(Ljava/util/logging/Handler;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers

