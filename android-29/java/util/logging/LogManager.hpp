#pragma once

#ifndef JAVA_UTIL_LOGGING_LOGMANAGER
#define JAVA_UTIL_LOGGING_LOGMANAGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Properties;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::util::logging
{
	class Logger;
}
namespace __jni_impl::java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArrayList;
}
namespace __jni_impl::java::util
{
	class WeakHashMap;
}
namespace __jni_impl::java::lang::ref
{
	class ReferenceQueue;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::util::logging
{
	class Formatter;
}

namespace __jni_impl::java::util::logging
{
	class LogManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring LOGGING_MXBEAN_NAME();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getProperty(jstring arg0);
		jstring getProperty(const QString &arg0);
		QAndroidJniObject getLogger(jstring arg0);
		QAndroidJniObject getLogger(const QString &arg0);
		void checkAccess();
		void reset();
		void readConfiguration();
		void readConfiguration(__jni_impl::java::io::InputStream arg0);
		jboolean addLogger(__jni_impl::java::util::logging::Logger arg0);
		QAndroidJniObject getLoggerNames();
		void updateConfiguration(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1);
		void updateConfiguration(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getLoggingMXBean();
		QAndroidJniObject addConfigurationListener(__jni_impl::__JniBaseClass arg0);
		void removeConfigurationListener(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getLogManager();
	};
} // namespace __jni_impl::java::util::logging

#include "../Properties.hpp"
#include "Level.hpp"
#include "Logger.hpp"
#include "../concurrent/locks/ReentrantLock.hpp"
#include "../concurrent/CopyOnWriteArrayList.hpp"
#include "../WeakHashMap.hpp"
#include "../../lang/ref/ReferenceQueue.hpp"
#include "../../security/Permission.hpp"
#include "../../lang/Void.hpp"
#include "../../io/InputStream.hpp"
#include "../../security/AccessControlContext.hpp"
#include "Formatter.hpp"

namespace __jni_impl::java::util::logging
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
	
	// Constructors
	void LogManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LogManager",
			"(V)V");
	}
	
	// Methods
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
	void LogManager::checkAccess()
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"()V"
		);
	}
	void LogManager::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void LogManager::readConfiguration()
	{
		__thiz.callMethod<void>(
			"readConfiguration",
			"()V"
		);
	}
	void LogManager::readConfiguration(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"readConfiguration",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean LogManager::addLogger(__jni_impl::java::util::logging::Logger arg0)
	{
		return __thiz.callMethod<jboolean>(
			"addLogger",
			"(Ljava/util/logging/Logger;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LogManager::getLoggerNames()
	{
		return __thiz.callObjectMethod(
			"getLoggerNames",
			"()Ljava/util/Enumeration;"
		);
	}
	void LogManager::updateConfiguration(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Ljava/io/InputStream;Ljava/util/function/Function;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void LogManager::updateConfiguration(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"updateConfiguration",
			"(Ljava/util/function/Function;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject LogManager::addConfigurationListener(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"addConfigurationListener",
			"(Ljava/lang/Runnable;)Ljava/util/logging/LogManager;",
			arg0.__jniObject().object()
		);
	}
	void LogManager::removeConfigurationListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeConfigurationListener",
			"(Ljava/lang/Runnable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject LogManager::getLogManager()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.LogManager",
			"getLogManager",
			"()Ljava/util/logging/LogManager;"
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class LogManager : public __jni_impl::java::util::logging::LogManager
	{
	public:
		LogManager(QAndroidJniObject obj) { __thiz = obj; }
		LogManager()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_LOGMANAGER

