#pragma once

#include "../../io/OutputStream.def.hpp"
#include "../../io/Writer.def.hpp"
#include "../../../JString.hpp"
#include "./Formatter.def.hpp"
#include "./Level.def.hpp"
#include "./LogRecord.def.hpp"
#include "./StreamHandler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline StreamHandler::StreamHandler()
		: java::util::logging::Handler(
			"java.util.logging.StreamHandler",
			"()V"
		) {}
	inline StreamHandler::StreamHandler(java::io::OutputStream arg0, java::util::logging::Formatter arg1)
		: java::util::logging::Handler(
			"java.util.logging.StreamHandler",
			"(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void StreamHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void StreamHandler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline jboolean StreamHandler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	inline void StreamHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	inline void StreamHandler::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::util::logging

// Base class headers
#include "./Handler.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::logging;
#endif
