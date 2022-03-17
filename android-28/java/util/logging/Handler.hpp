#pragma once

#include "../../lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "./ErrorManager.def.hpp"
#include "./Formatter.def.hpp"
#include "./Level.def.hpp"
#include "./LogManager.def.hpp"
#include "./LogRecord.def.hpp"
#include "./Handler.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Handler::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Handler::flush() const
	{
		callMethod<void>(
			"flush",
			"()V"
		);
	}
	inline JString Handler::getEncoding() const
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::logging::ErrorManager Handler::getErrorManager() const
	{
		return callObjectMethod(
			"getErrorManager",
			"()Ljava/util/logging/ErrorManager;"
		);
	}
	inline JObject Handler::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	inline java::util::logging::Formatter Handler::getFormatter() const
	{
		return callObjectMethod(
			"getFormatter",
			"()Ljava/util/logging/Formatter;"
		);
	}
	inline java::util::logging::Level Handler::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	inline jboolean Handler::isLoggable(java::util::logging::LogRecord arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/LogRecord;)Z",
			arg0.object()
		);
	}
	inline void Handler::publish(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"publish",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	inline void Handler::setEncoding(JString arg0) const
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Handler::setErrorManager(java::util::logging::ErrorManager arg0) const
	{
		callMethod<void>(
			"setErrorManager",
			"(Ljava/util/logging/ErrorManager;)V",
			arg0.object()
		);
	}
	inline void Handler::setFilter(JObject arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.object()
		);
	}
	inline void Handler::setFormatter(java::util::logging::Formatter arg0) const
	{
		callMethod<void>(
			"setFormatter",
			"(Ljava/util/logging/Formatter;)V",
			arg0.object()
		);
	}
	inline void Handler::setLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers

