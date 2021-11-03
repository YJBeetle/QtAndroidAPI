#include "../../lang/Exception.hpp"
#include "../../../JString.hpp"
#include "./ErrorManager.hpp"
#include "./Formatter.hpp"
#include "./Level.hpp"
#include "./LogManager.hpp"
#include "./LogRecord.hpp"
#include "./Handler.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	Handler::Handler(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Handler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Handler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString Handler::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	java::util::logging::ErrorManager Handler::getErrorManager() const
	{
		return callObjectMethod(
			"getErrorManager",
			"()Ljava/util/logging/ErrorManager;"
		);
	}
	JObject Handler::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	java::util::logging::Formatter Handler::getFormatter() const
	{
		return callObjectMethod(
			"getFormatter",
			"()Ljava/util/logging/Formatter;"
		);
	}
	java::util::logging::Level Handler::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean Handler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	void Handler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	void Handler::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Handler::setErrorManager(java::util::logging::ErrorManager arg0) const
	{
		callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.object()
		);
	}
	void Handler::setFilter(JObject arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.object()
		);
	}
	void Handler::setFormatter(java::util::logging::Formatter arg0) const
	{
		callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.object()
		);
	}
	void Handler::setLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

