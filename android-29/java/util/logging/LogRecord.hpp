#pragma once

#ifndef JAVA_UTIL_LOGGING_LOGRECORD
#define JAVA_UTIL_LOGGING_LOGRECORD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}

namespace __jni_impl::java::util::logging
{
	class LogRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::logging::Level arg0, jstring arg1);
		void __constructor(__jni_impl::java::util::logging::Level arg0, const QString &arg1);
		
		// Methods
		QAndroidJniObject getInstant();
		QAndroidJniObject getLevel();
		jstring getLoggerName();
		jlong getLongThreadID();
		jstring getMessage();
		jlong getMillis();
		jobjectArray getParameters();
		QAndroidJniObject getResourceBundle();
		jstring getResourceBundleName();
		jlong getSequenceNumber();
		jstring getSourceClassName();
		jstring getSourceMethodName();
		jint getThreadID();
		jthrowable getThrown();
		void setInstant(__jni_impl::java::time::Instant arg0);
		void setLevel(__jni_impl::java::util::logging::Level arg0);
		void setLoggerName(jstring arg0);
		void setLoggerName(const QString &arg0);
		QAndroidJniObject setLongThreadID(jlong arg0);
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setMillis(jlong arg0);
		void setParameters(jobjectArray arg0);
		void setResourceBundle(__jni_impl::java::util::ResourceBundle arg0);
		void setResourceBundleName(jstring arg0);
		void setResourceBundleName(const QString &arg0);
		void setSequenceNumber(jlong arg0);
		void setSourceClassName(jstring arg0);
		void setSourceClassName(const QString &arg0);
		void setSourceMethodName(jstring arg0);
		void setSourceMethodName(const QString &arg0);
		void setThreadID(jint arg0);
		void setThrown(jthrowable arg0);
	};
} // namespace __jni_impl::java::util::logging

#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "../../time/Instant.hpp"
#include "../ResourceBundle.hpp"
#include "../concurrent/atomic/AtomicLong.hpp"
#include "Level.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	
	// Constructors
	void LogRecord::__constructor(__jni_impl::java::util::logging::Level arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.LogRecord",
			"(Ljava/util/logging/Level;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void LogRecord::__constructor(__jni_impl::java::util::logging::Level arg0, const QString &arg1)
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
	void LogRecord::setInstant(__jni_impl::java::time::Instant arg0)
	{
		__thiz.callMethod<void>(
			"setInstant",
			"(Ljava/time/Instant;)V",
			arg0.__jniObject().object()
		);
	}
	void LogRecord::setLevel(__jni_impl::java::util::logging::Level arg0)
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
	void LogRecord::setResourceBundle(__jni_impl::java::util::ResourceBundle arg0)
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
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class LogRecord : public __jni_impl::java::util::logging::LogRecord
	{
	public:
		LogRecord(QAndroidJniObject obj) { __thiz = obj; }
		LogRecord(__jni_impl::java::util::logging::Level arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::logging

#endif // JAVA_UTIL_LOGGING_LOGRECORD

