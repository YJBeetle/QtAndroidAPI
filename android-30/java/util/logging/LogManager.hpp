#pragma once

#include "../../../JArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "../../lang/Void.def.hpp"
#include "../../lang/ref/ReferenceQueue.def.hpp"
#include "../../security/AccessControlContext.def.hpp"
#include "../../security/Permission.def.hpp"
#include "../Properties.def.hpp"
#include "../WeakHashMap.def.hpp"
#include "../concurrent/CopyOnWriteArrayList.def.hpp"
#include "../concurrent/locks/ReentrantLock.def.hpp"
#include "./Formatter.def.hpp"
#include "./Level.def.hpp"
#include "./Logger.def.hpp"
#include "./LogManager.def.hpp"

namespace java::util::logging
{
	// Fields
	inline JString LogManager::LOGGING_MXBEAN_NAME()
	{
		return getStaticObjectField(
			"java.util.logging.LogManager",
			"LOGGING_MXBEAN_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::logging::LogManager LogManager::getLogManager()
	{
		return callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLogManager",
			"()Ljava/util/logging/LogManager;"
		);
	}
	inline JObject LogManager::getLoggingMXBean()
	{
		return callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLoggingMXBean",
			"()Ljava/util/logging/LoggingMXBean;"
		);
	}
	inline java::util::logging::LogManager LogManager::addConfigurationListener(JObject arg0) const
	{
		return callObjectMethod(
			"addConfigurationListener",
			"(Ljava/lang/Runnable;)Ljava/util/logging/LogManager;",
			arg0.object()
		);
	}
	inline jboolean LogManager::addLogger(java::util::logging::Logger arg0) const
	{
		return callMethod<jboolean>(
			"addLogger",
			"(Ljava/util/logging/Logger;)Z",
			arg0.object()
		);
	}
	inline void LogManager::checkAccess() const
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	inline java::util::logging::Logger LogManager::getLogger(JString arg0) const
	{
		return callObjectMethod(
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>()
		);
	}
	inline JObject LogManager::getLoggerNames() const
	{
		return callObjectMethod(
			"getLoggerNames",
			"()Ljava/util/Enumeration;"
		);
	}
	inline JString LogManager::getProperty(JString arg0) const
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline void LogManager::readConfiguration() const
	{
		callMethod<void>(
			"readConfiguration",
			"()V"
		);
	}
	inline void LogManager::readConfiguration(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"readConfiguration",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void LogManager::removeConfigurationListener(JObject arg0) const
	{
		callMethod<void>(
			"removeConfigurationListener",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	inline void LogManager::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void LogManager::updateConfiguration(JObject arg0) const
	{
		callMethod<void>(
			"updateConfiguration",
			"(Ljava/util/function/Function;)V",
			arg0.object()
		);
	}
	inline void LogManager::updateConfiguration(java::io::InputStream arg0, JObject arg1) const
	{
		callMethod<void>(
			"updateConfiguration",
			"(Ljava/io/InputStream;Ljava/util/function/Function;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::logging

// Base class headers

