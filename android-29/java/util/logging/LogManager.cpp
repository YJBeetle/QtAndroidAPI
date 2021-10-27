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
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.LogManager",
			"LOGGING_MXBEAN_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	LogManager::LogManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject LogManager::getLogManager()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLogManager",
			"()Ljava/util/logging/LogManager;"
		);
	}
	QAndroidJniObject LogManager::getLoggingMXBean()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLoggingMXBean",
			"()Ljava/util/logging/LoggingMXBean;"
		);
	}
	QAndroidJniObject LogManager::addConfigurationListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addConfigurationListener",
			"(Ljava/lang/Runnable;)Ljava/util/logging/LogManager;",
			arg0.__jniObject().object()
		);
	}
	jboolean LogManager::addLogger(java::util::logging::Logger arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addLogger",
			"(Ljava/util/logging/Logger;)Z",
			arg0.__jniObject().object()
		);
	}
	void LogManager::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	QAndroidJniObject LogManager::getLogger(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0
		);
	}
	QAndroidJniObject LogManager::getLogger(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LogManager::getLoggerNames()
	{
		return __thiz.callObjectMethod(
			"getLoggerNames",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring LogManager::getProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring LogManager::getProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	void LogManager::readConfiguration()
	{
		__thiz.callMethod<void>(
			"readConfiguration",
			"()V"
		);
	}
	void LogManager::readConfiguration(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"readConfiguration",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void LogManager::removeConfigurationListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeConfigurationListener",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	void LogManager::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LogManager::updateConfiguration(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Ljava/util/function/Function;)V",
			arg0.__jniObject().object()
		);
	}
	void LogManager::updateConfiguration(java::io::InputStream arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Ljava/io/InputStream;Ljava/util/function/Function;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace java::util::logging

