#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../lang/ClassLoader.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
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
	JString Logger::GLOBAL_LOGGER_NAME()
	{
		return getStaticObjectField(
			"java.util.logging.Logger",
			"GLOBAL_LOGGER_NAME",
			"Ljava/lang/String;"
		);
	}
	java::util::logging::Logger Logger::global()
	{
		return getStaticObjectField(
			"java.util.logging.Logger",
			"global",
			"Ljava/util/logging/Logger;"
		);
	}
	
	// Constructors
	
	// Methods
	java::util::logging::Logger Logger::getAnonymousLogger()
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"()Ljava/util/logging/Logger;"
		);
	}
	java::util::logging::Logger Logger::getAnonymousLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>()
		);
	}
	java::util::logging::Logger Logger::getGlobal()
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getGlobal",
			"()Ljava/util/logging/Logger;"
		);
	}
	java::util::logging::Logger Logger::getLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>()
		);
	}
	java::util::logging::Logger Logger::getLogger(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Logger::addHandler(java::util::logging::Handler arg0) const
	{
		callMethod<void>(
			"addHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.object()
		);
	}
	void Logger::config(JString arg0) const
	{
		callMethod<void>(
			"config",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::config(JObject arg0) const
	{
		callMethod<void>(
			"config",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	void Logger::entering(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Logger::entering(JString arg0, JString arg1, JObjectArray arg2) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	void Logger::entering(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	void Logger::exiting(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Logger::exiting(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	void Logger::fine(JString arg0) const
	{
		callMethod<void>(
			"fine",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::fine(JObject arg0) const
	{
		callMethod<void>(
			"fine",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	void Logger::finer(JString arg0) const
	{
		callMethod<void>(
			"finer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::finer(JObject arg0) const
	{
		callMethod<void>(
			"finer",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	void Logger::finest(JString arg0) const
	{
		callMethod<void>(
			"finest",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::finest(JObject arg0) const
	{
		callMethod<void>(
			"finest",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	JObject Logger::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	JArray Logger::getHandlers() const
	{
		return callObjectMethod(
			"getHandlers",
			"()[Ljava/util/logging/Handler;"
		);
	}
	java::util::logging::Level Logger::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	JString Logger::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	java::util::logging::Logger Logger::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/logging/Logger;"
		);
	}
	java::util::ResourceBundle Logger::getResourceBundle() const
	{
		return callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	JString Logger::getResourceBundleName() const
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
	}
	jboolean Logger::getUseParentHandlers() const
	{
		return callMethod<jboolean>(
			"getUseParentHandlers",
			"()Z"
		);
	}
	void Logger::info(JString arg0) const
	{
		callMethod<void>(
			"info",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::info(JObject arg0) const
	{
		callMethod<void>(
			"info",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	jboolean Logger::isLoggable(java::util::logging::Level arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/Level;)Z",
			arg0.object()
		);
	}
	void Logger::log(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JString arg1) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JObject arg1) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JString arg1, JObjectArray arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JString arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	void Logger::log(java::util::logging::Level arg0, JThrowable arg1, JObject arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object<jthrowable>(),
			arg2.object()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JObject arg3) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObjectArray arg4) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jobjectArray>()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObject arg4) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jobject>()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JThrowable arg4) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jthrowable>()
		);
	}
	void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JThrowable arg3, JObject arg4) const
	{
		callMethod<void>(
			"logp",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jthrowable>(),
			arg4.object()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JObjectArray arg3) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jobjectArray>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JThrowable arg3) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jthrowable>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObjectArray arg5) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jobjectArray>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObject arg5) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jobject>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JThrowable arg5) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jthrowable>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JObjectArray arg5) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object<jstring>(),
			arg5.object<jobjectArray>()
		);
	}
	void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JThrowable arg5) const
	{
		callMethod<void>(
			"logrb",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/String;Ljava/util/ResourceBundle;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object<jstring>(),
			arg5.object<jthrowable>()
		);
	}
	void Logger::removeHandler(java::util::logging::Handler arg0) const
	{
		callMethod<void>(
			"removeHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.object()
		);
	}
	void Logger::setFilter(JObject arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.object()
		);
	}
	void Logger::setLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
	void Logger::setParent(java::util::logging::Logger arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Ljava/util/logging/Logger;)V",
			arg0.object()
		);
	}
	void Logger::setResourceBundle(java::util::ResourceBundle arg0) const
	{
		callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.object()
		);
	}
	void Logger::setUseParentHandlers(jboolean arg0) const
	{
		callMethod<void>(
			"setUseParentHandlers",
			"(Z)V",
			arg0
		);
	}
	void Logger::severe(JString arg0) const
	{
		callMethod<void>(
			"severe",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::severe(JObject arg0) const
	{
		callMethod<void>(
			"severe",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	void Logger::throwing(JString arg0, JString arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"throwing",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	void Logger::warning(JString arg0) const
	{
		callMethod<void>(
			"warning",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Logger::warning(JObject arg0) const
	{
		callMethod<void>(
			"warning",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

