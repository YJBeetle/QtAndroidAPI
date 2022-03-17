#pragma once

#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../lang/ClassLoader.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../lang/ref/WeakReference.def.hpp"
#include "../ArrayList.def.hpp"
#include "../Locale.def.hpp"
#include "../ResourceBundle.def.hpp"
#include "./Handler.def.hpp"
#include "./Level.def.hpp"
#include "./LogManager.def.hpp"
#include "./LogRecord.def.hpp"
#include "./Logger.def.hpp"

namespace java::util::logging
{
	// Fields
	inline JString Logger::GLOBAL_LOGGER_NAME()
	{
		return getStaticObjectField(
			"java.util.logging.Logger",
			"GLOBAL_LOGGER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline java::util::logging::Logger Logger::global()
	{
		return getStaticObjectField(
			"java.util.logging.Logger",
			"global",
			"Ljava/util/logging/Logger;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::util::logging::Logger Logger::getAnonymousLogger()
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"()Ljava/util/logging/Logger;"
		);
	}
	inline java::util::logging::Logger Logger::getAnonymousLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getAnonymousLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>()
		);
	}
	inline java::util::logging::Logger Logger::getGlobal()
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getGlobal",
			"()Ljava/util/logging/Logger;"
		);
	}
	inline java::util::logging::Logger Logger::getLogger(JString arg0)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>()
		);
	}
	inline java::util::logging::Logger Logger::getLogger(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"java.util.logging.Logger",
			"getLogger",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/util/logging/Logger;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Logger::addHandler(java::util::logging::Handler arg0) const
	{
		callMethod<void>(
			"addHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.object()
		);
	}
	inline void Logger::config(JString arg0) const
	{
		callMethod<void>(
			"config",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::config(JObject arg0) const
	{
		callMethod<void>(
			"config",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline void Logger::entering(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Logger::entering(JString arg0, JString arg1, JObjectArray arg2) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void Logger::entering(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"entering",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	inline void Logger::exiting(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Logger::exiting(JString arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"exiting",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	inline void Logger::fine(JString arg0) const
	{
		callMethod<void>(
			"fine",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::fine(JObject arg0) const
	{
		callMethod<void>(
			"fine",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline void Logger::finer(JString arg0) const
	{
		callMethod<void>(
			"finer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::finer(JObject arg0) const
	{
		callMethod<void>(
			"finer",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline void Logger::finest(JString arg0) const
	{
		callMethod<void>(
			"finest",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::finest(JObject arg0) const
	{
		callMethod<void>(
			"finest",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline JObject Logger::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Ljava/util/logging/Filter;"
		);
	}
	inline JArray Logger::getHandlers() const
	{
		return callObjectMethod(
			"getHandlers",
			"()[Ljava/util/logging/Handler;"
		);
	}
	inline java::util::logging::Level Logger::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	inline JString Logger::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::logging::Logger Logger::getParent() const
	{
		return callObjectMethod(
			"getParent",
			"()Ljava/util/logging/Logger;"
		);
	}
	inline java::util::ResourceBundle Logger::getResourceBundle() const
	{
		return callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	inline JString Logger::getResourceBundleName() const
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean Logger::getUseParentHandlers() const
	{
		return callMethod<jboolean>(
			"getUseParentHandlers",
			"()Z"
		);
	}
	inline void Logger::info(JString arg0) const
	{
		callMethod<void>(
			"info",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::info(JObject arg0) const
	{
		callMethod<void>(
			"info",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline jboolean Logger::isLoggable(java::util::logging::Level arg0) const
	{
		return callMethod<jboolean>(
			"isLoggable",
			"(Ljava/util/logging/Level;)Z",
			arg0.object()
		);
	}
	inline void Logger::log(java::util::logging::LogRecord arg0) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/LogRecord;)V",
			arg0.object()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JString arg1) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JObject arg1) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JString arg1, JObjectArray arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobjectArray>()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JString arg1, JObject arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jobject>()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JString arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	inline void Logger::log(java::util::logging::Level arg0, JThrowable arg1, JObject arg2) const
	{
		callMethod<void>(
			"log",
			"(Ljava/util/logging/Level;Ljava/lang/Throwable;Ljava/util/function/Supplier;)V",
			arg0.object(),
			arg1.object<jthrowable>(),
			arg2.object()
		);
	}
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3) const
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
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JObject arg3) const
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
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObjectArray arg4) const
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
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JObject arg4) const
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
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JThrowable arg4) const
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
	inline void Logger::logp(java::util::logging::Level arg0, JString arg1, JString arg2, JThrowable arg3, JObject arg4) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JObjectArray arg3) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, java::util::ResourceBundle arg1, JString arg2, JThrowable arg3) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObjectArray arg5) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JObject arg5) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, JString arg3, JString arg4, JThrowable arg5) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JObjectArray arg5) const
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
	inline void Logger::logrb(java::util::logging::Level arg0, JString arg1, JString arg2, java::util::ResourceBundle arg3, JString arg4, JThrowable arg5) const
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
	inline void Logger::removeHandler(java::util::logging::Handler arg0) const
	{
		callMethod<void>(
			"removeHandler",
			"(Ljava/util/logging/Handler;)V",
			arg0.object()
		);
	}
	inline void Logger::setFilter(JObject arg0) const
	{
		callMethod<void>(
			"setFilter",
			"(Ljava/util/logging/Filter;)V",
			arg0.object()
		);
	}
	inline void Logger::setLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
	inline void Logger::setParent(java::util::logging::Logger arg0) const
	{
		callMethod<void>(
			"setParent",
			"(Ljava/util/logging/Logger;)V",
			arg0.object()
		);
	}
	inline void Logger::setResourceBundle(java::util::ResourceBundle arg0) const
	{
		callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.object()
		);
	}
	inline void Logger::setUseParentHandlers(jboolean arg0) const
	{
		callMethod<void>(
			"setUseParentHandlers",
			"(Z)V",
			arg0
		);
	}
	inline void Logger::severe(JString arg0) const
	{
		callMethod<void>(
			"severe",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::severe(JObject arg0) const
	{
		callMethod<void>(
			"severe",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
	inline void Logger::throwing(JString arg0, JString arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"throwing",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jthrowable>()
		);
	}
	inline void Logger::warning(JString arg0) const
	{
		callMethod<void>(
			"warning",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Logger::warning(JObject arg0) const
	{
		callMethod<void>(
			"warning",
			"(Ljava/util/function/Supplier;)V",
			arg0.object()
		);
	}
} // namespace java::util::logging

// Base class headers

