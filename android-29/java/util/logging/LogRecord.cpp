#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "../../time/Instant.hpp"
#include "../ResourceBundle.hpp"
#include "../concurrent/atomic/AtomicLong.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"

namespace java::util::logging
{
	// Fields
	
	// QAndroidJniObject forward
	LogRecord::LogRecord(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LogRecord::LogRecord(java::util::logging::Level arg0, JString arg1)
		: JObject(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	java::time::Instant LogRecord::getInstant()
	{
		return callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	java::util::logging::Level LogRecord::getLevel()
	{
		return callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	JString LogRecord::getLoggerName()
	{
		return callObjectMethod(
			"getLoggerName",
			"()Ljava/lang/String;"
		);
	}
	jlong LogRecord::getLongThreadID()
	{
		return callMethod<jlong>(
			"getLongThreadID",
			"()J"
		);
	}
	JString LogRecord::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jlong LogRecord::getMillis()
	{
		return callMethod<jlong>(
			"getMillis",
			"()J"
		);
	}
	JObjectArray LogRecord::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/Object;"
		);
	}
	java::util::ResourceBundle LogRecord::getResourceBundle()
	{
		return callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	JString LogRecord::getResourceBundleName()
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		);
	}
	jlong LogRecord::getSequenceNumber()
	{
		return callMethod<jlong>(
			"getSequenceNumber",
			"()J"
		);
	}
	JString LogRecord::getSourceClassName()
	{
		return callObjectMethod(
			"getSourceClassName",
			"()Ljava/lang/String;"
		);
	}
	JString LogRecord::getSourceMethodName()
	{
		return callObjectMethod(
			"getSourceMethodName",
			"()Ljava/lang/String;"
		);
	}
	jint LogRecord::getThreadID()
	{
		return callMethod<jint>(
			"getThreadID",
			"()I"
		);
	}
	JThrowable LogRecord::getThrown()
	{
		return callObjectMethod(
			"getThrown",
			"()Ljava/lang/Throwable;"
		);
	}
	void LogRecord::setInstant(java::time::Instant arg0)
	{
		callMethod<void>(
			"setInstant",
			"(Ljava/time/Instant;)V",
			arg0.object()
		);
	}
	void LogRecord::setLevel(java::util::logging::Level arg0)
	{
		callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.object()
		);
	}
	void LogRecord::setLoggerName(JString arg0)
	{
		callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	java::util::logging::LogRecord LogRecord::setLongThreadID(jlong arg0)
	{
		return callObjectMethod(
			"setLongThreadID",
			"(J)Ljava/util/logging/LogRecord;",
			arg0
		);
	}
	void LogRecord::setMessage(JString arg0)
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LogRecord::setMillis(jlong arg0)
	{
		callMethod<void>(
			"setMillis",
			"(J)V",
			arg0
		);
	}
	void LogRecord::setParameters(JObjectArray arg0)
	{
		callMethod<void>(
			"setParameters",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void LogRecord::setResourceBundle(java::util::ResourceBundle arg0)
	{
		callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.object()
		);
	}
	void LogRecord::setResourceBundleName(JString arg0)
	{
		callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LogRecord::setSequenceNumber(jlong arg0)
	{
		callMethod<void>(
			"setSequenceNumber",
			"(J)V",
			arg0
		);
	}
	void LogRecord::setSourceClassName(JString arg0)
	{
		callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LogRecord::setSourceMethodName(JString arg0)
	{
		callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LogRecord::setThreadID(jint arg0)
	{
		callMethod<void>(
			"setThreadID",
			"(I)V",
			arg0
		);
	}
	void LogRecord::setThrown(JThrowable arg0)
	{
		callMethod<void>(
			"setThrown",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		);
	}
} // namespace java::util::logging

