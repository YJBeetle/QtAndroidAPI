#include "../../lang/ClassLoader.hpp"
#include "../../lang/ref/WeakReference.hpp"
#include "../ArrayList.hpp"
#include "../Locale.hpp"
#include "../ResourceBundle.hpp"
#include "./Handler.hpp"
#include "./Level.hpp"
#include "./LogManager.hpp"
#include "./LogRecord.hpp"
#include "./Logger.hpp"

namespace java::util::logging
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
	
	Logger::Logger(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Logger::getAnonymousLogger()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"()Ljava/util/logging/Logger;"
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
	QAndroidJniObject Logger::getGlobal()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Logger",
			"getGlobal",
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
	void Logger::addHandler(java::util::logging::Handler arg0)
	{
		__thiz.callMethod<void>(
			"addHandler",
			"(Ljava/util/logging/Handler;)V",
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
	void Logger::config(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"config",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
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
	void Logger::exiting(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
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
	void Logger::fine(jstring arg0)
	{
		__thiz.callMethod<void>(
			"fine",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::fine(__JniBaseClass arg0)
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
	void Logger::finer(__JniBaseClass arg0)
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
	void Logger::finest(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"finest",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Logger::getFilter()
	{
		return __thiz.callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	jarray Logger::getHandlers()
	{
		return __thiz.callObjectMethod(
			"getHandlers",
			"()[Ljava/util/logging/Handler;"
		).object<jarray>();
	}
	QAndroidJniObject Logger::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jstring Logger::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Logger::getParent()
	{
		return __thiz.callObjectMethod(
			"getParent",
			"()Ljava/util/logging/Logger;"
		);
	}
	QAndroidJniObject Logger::getResourceBundle()
	{
		return __thiz.callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	jstring Logger::getResourceBundleName()
	{
		return __thiz.callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Logger::getUseParentHandlers()
	{
		return __thiz.callMethod<jboolean>(
			"getUseParentHandlers",
			"()Z"
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
	void Logger::info(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"info",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Logger::isLoggable(java::util::logging::Level arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/Level;)Z",
			arg0.__jniObject().object()
		);
	}
	void Logger::log(java::util::logging::LogRecord arg0)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::log(java::util::logging::Level arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Logger::log(java::util::logging::Level arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Logger::log(java::util::logging::Level arg0, jstring arg1, jobjectArray arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::log(java::util::logging::Level arg0, jstring arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::log(java::util::logging::Level arg0, jstring arg1, jthrowable arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Logger::log(java::util::logging::Level arg0, jthrowable arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3)
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
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, __JniBaseClass arg3)
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
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobjectArray arg4)
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
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jobject arg4)
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
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jthrowable arg4)
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
	void Logger::logp(java::util::logging::Level arg0, jstring arg1, jstring arg2, jthrowable arg3, __JniBaseClass arg4)
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
	void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, jstring arg2, jobjectArray arg3)
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
	void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, jstring arg2, jthrowable arg3)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobjectArray arg5)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jobject arg5)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jthrowable arg5)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, java::util::ResourceBundle arg3, jstring arg4, jobjectArray arg5)
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
	void Logger::logrb(java::util::logging::Level arg0, jstring arg1, jstring arg2, java::util::ResourceBundle arg3, jstring arg4, jthrowable arg5)
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
	void Logger::removeHandler(java::util::logging::Handler arg0)
	{
		__thiz.callMethod<void>(
			"removeHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setFilter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setLevel(java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setParent(java::util::logging::Logger arg0)
	{
		__thiz.callMethod<void>(
			"setParent",
			"(Ljava/util/logging/Logger;)V",
			arg0.__jniObject().object()
		);
	}
	void Logger::setResourceBundle(java::util::ResourceBundle arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
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
	void Logger::severe(jstring arg0)
	{
		__thiz.callMethod<void>(
			"severe",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::severe(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"severe",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
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
	void Logger::warning(jstring arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Logger::warning(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"warning",
			"(Ljava/util/function/Supplier;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::logging

