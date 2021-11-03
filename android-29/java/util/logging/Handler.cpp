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
	
	// QAndroidJniObject forward
	Handler::Handler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void Handler::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Handler::flush()
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	JString Handler::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	java::util::logging::ErrorManager Handler::getErrorManager()
	{
		return callObjectMethod(
			"getErrorManager",
			"()Ljava/util/logging/ErrorManager;"
		);
	}
	JObject Handler::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	java::util::logging::Formatter Handler::getFormatter()
	{
		return callObjectMethod(
			"getFormatter",
			"()Ljava/util/logging/Formatter;"
		);
	}
	java::util::logging::Level Handler::getLevel()
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean Handler::isLoggable(java::util::logging::LogRecord arg0)
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	void Handler::publish(java::util::logging::LogRecord arg0)
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	void Handler::setEncoding(JString arg0)
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Handler::setErrorManager(java::util::logging::ErrorManager arg0)
	{
		callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.object()
		);
	}
	void Handler::setFilter(JObject arg0)
	{
		callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.object()
		);
	}
	void Handler::setFormatter(java::util::logging::Formatter arg0)
	{
		callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.object()
		);
	}
	void Handler::setLevel(java::util::logging::Level arg0)
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

