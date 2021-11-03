#include "../../io/InputStream.hpp"
#include "../../lang/Void.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "../../security/AccessControlContext.hpp"
#include "../../security/Permission.hpp"
#include "../Properties.hpp"
#include "../WeakHashMap.hpp"
#include "../concurrent/CopyOnWriteArrayList.hpp"
#include "../concurrent/locks/ReentrantLock.hpp"
#include "./Formatter.hpp"
#include "./Level.hpp"
#include "./Logger.hpp"
#include "./LogManager.hpp"

namespace java::util::logging
{
	// Fields
	jstring LogManager::LOGGING_MXBEAN_NAME()
	{
		return getStaticObjectField(
			"java.util.logging.LogManager",
			"LOGGING_MXBEAN_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	LogManager::LogManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::util::logging::LogManager LogManager::getLogManager()
	{
		return callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLogManager",
			"()Ljava/util/logging/LogManager;"
		);
	}
	JObject LogManager::getLoggingMXBean()
	{
		return callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLoggingMXBean",
			"()Ljava/util/logging/LoggingMXBean;"
		);
	}
	java::util::logging::LogManager LogManager::addConfigurationListener(JObject arg0)
	{
		return callObjectMethod(
			"addConfigurationListener",
			"(Ljava/lang/Runnable;)Ljava/util/logging/LogManager;",
			arg0.object()
		);
	}
	jboolean LogManager::addLogger(java::util::logging::Logger arg0)
	{
		return callMethod<jboolean>(
			"addLogger",
			"(Ljava/util/logging/Logger;)Z",
			arg0.object()
		);
	}
	void LogManager::checkAccess()
	{
		callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	java::util::logging::Logger LogManager::getLogger(jstring arg0)
	{
		return callObjectMethod(
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0
		);
	}
	JObject LogManager::getLoggerNames()
	{
		return callObjectMethod(
			"getLoggerNames",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring LogManager::getProperty(jstring arg0)
	{
		return callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void LogManager::readConfiguration()
	{
		callMethod<void>(
			"readConfiguration",
			"()V"
		);
	}
	void LogManager::readConfiguration(java::io::InputStream arg0)
	{
		callMethod<void>(
			"readConfiguration",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void LogManager::removeConfigurationListener(JObject arg0)
	{
		callMethod<void>(
			"removeConfigurationListener",
			"(Ljava/lang/Runnable;)V",
			arg0.object()
		);
	}
	void LogManager::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LogManager::updateConfiguration(JObject arg0)
	{
		callMethod<void>(
			"updateConfiguration",
			"(Ljava/util/function/Function;)V",
			arg0.object()
		);
	}
	void LogManager::updateConfiguration(java::io::InputStream arg0, JObject arg1)
	{
		callMethod<void>(
			"updateConfiguration",
			"(Ljava/io/InputStream;Ljava/util/function/Function;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace java::util::logging

