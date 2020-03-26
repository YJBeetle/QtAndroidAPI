#pragma once

#ifndef JAVA_UTIL_LOGGING_LOGGER
#define JAVA_UTIL_LOGGING_LOGGER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::logging
{
	class LogManager;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::java::lang::ref
{
	class WeakReference;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::util::logging
{
	class LogRecord;
}
namespace __jni_impl::java::util::logging
{
	class Handler;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::java::util::logging
{
	class Logger : public __JniBaseClass
	{
	public:
		// Fields
		static jstring GLOBAL_LOGGER_NAME();
		static QAndroidJniObject global();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		void log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jobject arg2);
		void log(__jni_impl::java::util::logging::Level arg0, __jni_impl::__JniBaseClass arg1);
		void log(__jni_impl::java::util::logging::Level arg0, jstring arg1);
		void log(__jni_impl::java::util::logging::LogRecord arg0);
		void log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jobjectArray arg2);
		void log(__jni_impl::java::util::logging::Level arg0, jthrowable arg1, __jni_impl::__JniBaseClass arg2);
		void log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jthrowable arg2);
		void info(jstring arg0);
		void info(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getParent();
		static QAndroidJniObject getLogger(jstring arg0);
		static QAndroidJniObject getLogger(jstring arg0, jstring arg1);
		void setParent(__jni_impl::java::util::logging::Logger arg0);
		void warning(__jni_impl::__JniBaseClass arg0);
		void warning(jstring arg0);
		void config(__jni_impl::__JniBaseClass arg0);
		void config(jstring arg0);
		static QAndroidJniObject getAnonymousLogger(jstring arg0);
		static QAndroidJniObject getAnonymousLogger();
		jstring getResourceBundleName();
		void setFilter(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getLevel();
		jboolean isLoggable(__jni_impl::java::util::logging::Level arg0);
		jarray getHandlers();
		jboolean getUseParentHandlers();
		void setResourceBundle(__jni_impl::java::util::ResourceBundle arg0);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jthrowable arg4);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobjectArray arg4);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobject arg4);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jthrowable arg3, __jni_impl::__JniBaseClass arg4);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3);
		void logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3);
		void addHandler(__jni_impl::java::util::logging::Handler arg0);
		void removeHandler(__jni_impl::java::util::logging::Handler arg0);
		void setUseParentHandlers(jboolean arg0);
		QAndroidJniObject getResourceBundle();
		static QAndroidJniObject getGlobal();
		QAndroidJniObject getFilter();
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::java::util::ResourceBundle arg3, jstring arg4, jobjectArray arg5);
		void logrb(__jni_impl::java::util::logging::Level arg0, __jni_impl::java::util::ResourceBundle arg1, jstring arg2, jobjectArray arg3);
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jthrowable arg5);
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::java::util::ResourceBundle arg3, jstring arg4, jthrowable arg5);
		void logrb(__jni_impl::java::util::logging::Level arg0, __jni_impl::java::util::ResourceBundle arg1, jstring arg2, jthrowable arg3);
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobject arg5);
		void logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobjectArray arg5);
		void entering(jstring arg0, jstring arg1, jobject arg2);
		void entering(jstring arg0, jstring arg1);
		void entering(jstring arg0, jstring arg1, jobjectArray arg2);
		void exiting(jstring arg0, jstring arg1, jobject arg2);
		void exiting(jstring arg0, jstring arg1);
		void throwing(jstring arg0, jstring arg1, jthrowable arg2);
		void severe(jstring arg0);
		void severe(__jni_impl::__JniBaseClass arg0);
		void fine(jstring arg0);
		void fine(__jni_impl::__JniBaseClass arg0);
		void finer(jstring arg0);
		void finer(__jni_impl::__JniBaseClass arg0);
		void finest(jstring arg0);
		void finest(__jni_impl::__JniBaseClass arg0);
		void setLevel(__jni_impl::java::util::logging::Level arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "LogManager.hpp"
#include "../ResourceBundle.hpp"
#include "../Locale.hpp"
#include "../ArrayList.hpp"
#include "../../lang/ref/WeakReference.hpp"
#include "Level.hpp"
#include "LogRecord.hpp"
#include "Handler.hpp"
#include "../../lang/ClassLoader.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	jstring Logger::GLOBAL_LOGGER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Logger",
			"GLOBAL_LOGGER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Logger::global()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Logger",
			"global",
			"Ljava/util/logging/Logger;"
		);
	}
	
	// Constructors
	void Logger::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.Logger",
			"(V)V");
	}
	
	// Methods
	jstring Logger::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Logger::log(__jni_impl::java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jobjectArray arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, jthrowable arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Logger::log(__jni_impl::java::util::logging::Level arg0, jstring arg1, jthrowable arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::info(jstring arg0)
	{
		__thiz.callMethod<void>(
			"info",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::info(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"info",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Logger::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/logging/Logger;"
		);
	}
	QAndroidJniObject Logger::getLogger(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0
		);
	}
	QAndroidJniObject Logger::getLogger(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0,
			arg1
		);
	}
	void Logger::setParent(__jni_impl::java::util::logging::Logger arg0)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Ljava/util/logging/Logger;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::warning(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::warning(jstring arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::config(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"config",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::config(jstring arg0)
	{
		__thiz.callMethod<void>(
			"config",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject Logger::getAnonymousLogger(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0
		);
	}
	QAndroidJniObject Logger::getAnonymousLogger()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"()Ljava/util/logging/Logger;"
		);
	}
	jstring Logger::getResourceBundleName()
	{
		return __thiz.callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Logger::setFilter(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Logger::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jboolean Logger::isLoggable(__jni_impl::java::util::logging::Level arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/Level;)Z",
			arg0.__jniObject().object()
		);
	}
	jarray Logger::getHandlers()
	{
		return __thiz.callObjectMethod(
			"getHandlers",
			"()[Ljava/util/logging/Handler;"
		).object<jarray>();
	}
	jboolean Logger::getUseParentHandlers()
	{
		return __thiz.callMethod<jboolean>(
			"getUseParentHandlers",
			"()Z"
		);
	}
	void Logger::setResourceBundle(__jni_impl::java::util::ResourceBundle arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jthrowable arg4)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobjectArray arg4)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobject arg4)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jthrowable arg3, __jni_impl::__JniBaseClass arg4)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Logger::logp(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz.callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Logger::addHandler(__jni_impl::java::util::logging::Handler arg0)
	{
		__thiz.callMethod<void>(
			"addHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::removeHandler(__jni_impl::java::util::logging::Handler arg0)
	{
		__thiz.callMethod<void>(
			"removeHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setUseParentHandlers(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUseParentHandlers",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Logger::getResourceBundle()
	{
		return __thiz.callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	QAndroidJniObject Logger::getGlobal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getGlobal",
			"()Ljava/util/logging/Logger;"
		);
	}
	QAndroidJniObject Logger::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::java::util::ResourceBundle arg3, jstring arg4, jobjectArray arg5)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, __jni_impl::java::util::ResourceBundle arg1, jstring arg2, jobjectArray arg3)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jthrowable arg5)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, __jni_impl::java::util::ResourceBundle arg3, jstring arg4, jthrowable arg5)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, __jni_impl::java::util::ResourceBundle arg1, jstring arg2, jthrowable arg3)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobject arg5)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Logger::logrb(__jni_impl::java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobjectArray arg5)
	{
		__thiz.callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void Logger::entering(jstring arg0, jstring arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Logger::entering(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Logger::entering(jstring arg0, jstring arg1, jobjectArray arg2)
	{
		__thiz.callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Logger::exiting(jstring arg0, jstring arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Logger::exiting(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Logger::throwing(jstring arg0, jstring arg1, jthrowable arg2)
	{
		__thiz.callMethod<void>(
			"throwing",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Logger::severe(jstring arg0)
	{
		__thiz.callMethod<void>(
			"severe",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::severe(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"severe",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::fine(jstring arg0)
	{
		__thiz.callMethod<void>(
			"fine",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::fine(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"fine",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::finer(jstring arg0)
	{
		__thiz.callMethod<void>(
			"finer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::finer(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"finer",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::finest(jstring arg0)
	{
		__thiz.callMethod<void>(
			"finest",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::finest(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"finest",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setLevel(__jni_impl::java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class Logger : public __jni_impl::java::util::logging::Logger
	{
	public:
		Logger(QAndroidJniObject obj) { __thiz = obj; }
		Logger()
		{
			__constructor();
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_LOGGER

