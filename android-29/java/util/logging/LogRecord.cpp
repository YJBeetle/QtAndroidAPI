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
	
	LogRecord::LogRecord(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LogRecord::LogRecord(java::util::logging::Level &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	LogRecord::LogRecord(java::util::logging::Level &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject LogRecord::getInstant()
	{
		return __thiz.callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;"
		);
	}
	QAndroidJniObject LogRecord::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;"
		);
	}
	jstring LogRecord::getLoggerName()
	{
		return __thiz.callObjectMethod(
			"getLoggerName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getLongThreadID()
	{
		return __thiz.callMethod<jlong>(
			"getLongThreadID",
			"()J"
		);
	}
	jstring LogRecord::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMillis",
			"()J"
		);
	}
	jobjectArray LogRecord::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	QAndroidJniObject LogRecord::getResourceBundle()
	{
		return __thiz.callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;"
		);
	}
	jstring LogRecord::getResourceBundleName()
	{
		return __thiz.callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong LogRecord::getSequenceNumber()
	{
		return __thiz.callMethod<jlong>(
			"getSequenceNumber",
			"()J"
		);
	}
	jstring LogRecord::getSourceClassName()
	{
		return __thiz.callObjectMethod(
			"getSourceClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LogRecord::getSourceMethodName()
	{
		return __thiz.callObjectMethod(
			"getSourceMethodName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LogRecord::getThreadID()
	{
		return __thiz.callMethod<jint>(
			"getThreadID",
			"()I"
		);
	}
	jthrowable LogRecord::getThrown()
	{
		return __thiz.callObjectMethod(
			"getThrown",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	void LogRecord::setInstant(java::time::Instant arg0)
	{
		__thiz.callMethod<void>(
			"setInstant",
			"(Ljava/time/Instant;)V",
			arg0.__jniObject().object()
		);
	}
	void LogRecord::setLevel(java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object()
		);
	}
	void LogRecord::setLoggerName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setLoggerName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject LogRecord::setLongThreadID(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setLongThreadID",
			"(J)Ljava/util/logging/LogRecord;",
			arg0
		);
	}
	void LogRecord::setMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setMessage(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LogRecord::setMillis(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMillis",
			"(J)V",
			arg0
		);
	}
	void LogRecord::setParameters(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void LogRecord::setResourceBundle(java::util::ResourceBundle arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.__jniObject().object()
		);
	}
	void LogRecord::setResourceBundleName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setResourceBundleName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LogRecord::setSequenceNumber(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceNumber",
			"(J)V",
			arg0
		);
	}
	void LogRecord::setSourceClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setSourceClassName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LogRecord::setSourceMethodName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LogRecord::setSourceMethodName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void LogRecord::setThreadID(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThreadID",
			"(I)V",
			arg0
		);
	}
	void LogRecord::setThrown(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"setThrown",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
} // namespace java::util::logging

