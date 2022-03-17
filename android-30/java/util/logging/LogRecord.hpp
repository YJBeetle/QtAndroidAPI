#pragma once

#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../time/Instant.def.hpp"
#include "../ResourceBundle.def.hpp"
#include "../concurrent/atomic/AtomicLong.def.hpp"
#include "./Level.def.hpp"
#include "./LogRecord.def.hpp"

namespace java::util::logging
{
	// Fields
	
	// Constructors
	inline LogRecord::LogRecord(java::util::logging::Level arg0, JString arg1)
		: JObject(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline java::time::Instant LogRecord::getInstant() const
	{
		return callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	inline java::util::logging::Level LogRecord::getLevel() const
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	inline JString LogRecord::getLoggerName() const
	{
		return callObjectMethod(
			"getLoggerName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong LogRecord::getLongThreadID() const
	{
		return callMethod<jlong>(
			"getLongThreadID",
			"()J"
		);
	}
	inline JString LogRecord::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jlong LogRecord::getMillis() const
	{
		return callMethod<jlong>(
			"getMillis",
			"()J"
		);
	}
	inline JObjectArray LogRecord::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/Object;"
		);
	}
	inline java::util::ResourceBundle LogRecord::getResourceBundle() const
	{
		return callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	inline JString LogRecord::getResourceBundleName() const
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong LogRecord::getSequenceNumber() const
	{
		return callMethod<jlong>(
			"getSequenceNumber",
			"()J"
		);
	}
	inline JString LogRecord::getSourceClassName() const
	{
		return callObjectMethod(
			"getSourceClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString LogRecord::getSourceMethodName() const
	{
		return callObjectMethod(
			"getSourceMethodName",
			"()Ljava/lang/String;"
		);
	}
	inline jint LogRecord::getThreadID() const
	{
		return callMethod<jint>(
			"getThreadID",
			"()I"
		);
	}
	inline JThrowable LogRecord::getThrown() const
	{
		return callObjectMethod(
			"getThrown",
			"()Ljava/lang/Throwable;"
		);
	}
	inline void LogRecord::setInstant(java::time::Instant arg0) const
	{
		callMethod<void>(
			"setInstant",
			"(Ljava/time/Instant;)V",
			arg0.object()
		);
	}
	inline void LogRecord::setLevel(java::util::logging::Level arg0) const
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
	inline void LogRecord::setLoggerName(JString arg0) const
	{
		callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline java::util::logging::LogRecord LogRecord::setLongThreadID(jlong arg0) const
	{
		return callObjectMethod(
			"setLongThreadID",
			"(J)Ljava/util/logging/LogRecord;",
			arg0
		);
	}
	inline void LogRecord::setMessage(JString arg0) const
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LogRecord::setMillis(jlong arg0) const
	{
		callMethod<void>(
			"setMillis",
			"(J)V",
			arg0
		);
	}
	inline void LogRecord::setParameters(JObjectArray arg0) const
	{
		callMethod<void>(
			"setParameters",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void LogRecord::setResourceBundle(java::util::ResourceBundle arg0) const
	{
		callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.object()
		);
	}
	inline void LogRecord::setResourceBundleName(JString arg0) const
	{
		callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LogRecord::setSequenceNumber(jlong arg0) const
	{
		callMethod<void>(
			"setSequenceNumber",
			"(J)V",
			arg0
		);
	}
	inline void LogRecord::setSourceClassName(JString arg0) const
	{
		callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LogRecord::setSourceMethodName(JString arg0) const
	{
		callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void LogRecord::setThreadID(jint arg0) const
	{
		callMethod<void>(
			"setThreadID",
			"(I)V",
			arg0
		);
	}
	inline void LogRecord::setThrown(JThrowable arg0) const
	{
		callMethod<void>(
			"setThrown",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
} // namespace java::util::logging

// Base class headers

