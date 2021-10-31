#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../time/Instant.hpp"
#include "../ResourceBundle.hpp"
#include "../concurrent/atomic/AtomicLong.hpp"
#include "./Level.hpp"
#include "./LogRecord.hpp"

namespace java::util::logging
{
	// Fields
	
	// QJniObject forward
	LogRecord::LogRecord(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LogRecord::LogRecord(java::util::logging::Level arg0, jstring arg1)
		: __JniBaseClass(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.object(),
			arg1
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
	jstring LogRecord::getLoggerName()
	{
		return callObjectMethod(
			"getLoggerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getLongThreadID()
	{
		return callMethod<jlong>(
			"getLongThreadID",
			"()J"
		);
	}
	jstring LogRecord::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getMillis()
	{
		return callMethod<jlong>(
			"getMillis",
			"()J"
		);
	}
	jobjectArray LogRecord::getParameters()
	{
		return callObjectMethod(
			"getParameters",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	java::util::ResourceBundle LogRecord::getResourceBundle()
	{
		return callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	jstring LogRecord::getResourceBundleName()
	{
		return callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getSequenceNumber()
	{
		return callMethod<jlong>(
			"getSequenceNumber",
			"()J"
		);
	}
	jstring LogRecord::getSourceClassName()
	{
		return callObjectMethod(
			"getSourceClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LogRecord::getSourceMethodName()
	{
		return callObjectMethod(
			"getSourceMethodName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LogRecord::getThreadID()
	{
		return callMethod<jint>(
			"getThreadID",
			"()I"
		);
	}
	jthrowable LogRecord::getThrown()
	{
		return callObjectMethod(
			"getThrown",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
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
	void LogRecord::setLoggerName(jstring arg0)
	{
		callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			arg0
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
	void LogRecord::setMessage(jstring arg0)
	{
		callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			arg0
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
	void LogRecord::setParameters(jobjectArray arg0)
	{
		callMethod<void>(
			"setParameters",
			"([Ljava/lang/Object;)V",
			arg0
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
	void LogRecord::setResourceBundleName(jstring arg0)
	{
		callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			arg0
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
	void LogRecord::setSourceClassName(jstring arg0)
	{
		callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setSourceMethodName(jstring arg0)
	{
		callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			arg0
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
	void LogRecord::setThrown(jthrowable arg0)
	{
		callMethod<void>(
			"setThrown",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
} // namespace java::util::logging

