#include "../../io/OutputStream.hpp"
#include "../../io/Writer.hpp"
#include "../../../JString.hpp"
#include "./Formatter.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"
#include "./StreamHandler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	StreamHandler::StreamHandler(QJniObject obj) : java::util::logging::Handler(obj) {}
	
	// Constructors
	StreamHandler::StreamHandler()
		: java::util::logging::Handler(
			"java.util.logging.StreamHandler",
			"()V"
		) {}
	StreamHandler::StreamHandler(java::io::OutputStream arg0, java::util::logging::Formatter arg1)
		: java::util::logging::Handler(
			"java.util.logging.StreamHandler",
			"(Ljava/io/OutputStream;Ljava/util/logging/Formatter;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void StreamHandler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void StreamHandler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	jboolean StreamHandler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	void StreamHandler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	void StreamHandler::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace java::util::logging

