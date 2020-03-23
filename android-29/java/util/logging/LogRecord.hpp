#pragma once

#ifndef JAVA_UTIL_LOGGING_LOGRECORD
#define JAVA_UTIL_LOGGING_LOGRECORD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicLong;
}
namespace __jni_impl::java::util::concurrent::atomic
{
	class AtomicInteger;
}
namespace __jni_impl::java::lang
{
	class ThreadLocal;
}
namespace __jni_impl::java::util::logging
{
	class Level;
}
namespace __jni_impl::java::time
{
	class Instant;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::util::logging
{
	class LogRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::util::logging::Level arg0, jstring arg1);
		
		// Methods
		QAndroidJniObject getMessage();
		QAndroidJniObject getParameters();
		QAndroidJniObject getLoggerName();
		QAndroidJniObject getResourceBundleName();
		QAndroidJniObject getLevel();
		void setLoggerName(jstring arg0);
		void setResourceBundleName(jstring arg0);
		void setResourceBundle(__jni_impl::java::util::ResourceBundle arg0);
		void setParameters(jobjectArray arg0);
		void setThrown(jthrowable arg0);
		void setSourceClassName(jstring arg0);
		void setSourceMethodName(jstring arg0);
		QAndroidJniObject getResourceBundle();
		void setLevel(__jni_impl::java::util::logging::Level arg0);
		void setInstant(__jni_impl::java::time::Instant arg0);
		jlong getMillis();
		void setMillis(jlong arg0);
		jlong getSequenceNumber();
		void setSequenceNumber(jlong arg0);
		QAndroidJniObject getSourceClassName();
		QAndroidJniObject getSourceMethodName();
		void setMessage(jstring arg0);
		jint getThreadID();
		void setThreadID(jint arg0);
		QAndroidJniObject getInstant();
		QAndroidJniObject getThrown();
	};
} // namespace __jni_impl::java::util::logging

#include "../concurrent/atomic/AtomicLong.hpp"
#include "../concurrent/atomic/AtomicInteger.hpp"
#include "../../lang/ThreadLocal.hpp"
#include "Level.hpp"
#include "../../time/Instant.hpp"
#include "../ResourceBundle.hpp"
#include "../../io/ObjectInputStream.hpp"
#include "../../io/ObjectOutputStream.hpp"

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
			arg1);
	}
	
	// Methods
	QAndroidJniObject LogRecord::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LogRecord::getParameters()
	{
		return __thiz.callObjectMethod(
			"getParameters",
			"()[Ljava/lang/Object;");
	}
	QAndroidJniObject LogRecord::getLoggerName()
	{
		return __thiz.callObjectMethod(
			"getLoggerName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LogRecord::getResourceBundleName()
	{
		return __thiz.callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LogRecord::getLevel()
	{
		return __thiz.callObjectMethod(
			"getLevel",
			"()Ljava/util/logging/Level;");
	}
	void LogRecord::setLoggerName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setLoggerName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LogRecord::setResourceBundleName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundleName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LogRecord::setResourceBundle(__jni_impl::java::util::ResourceBundle arg0)
	{
		__thiz.callMethod<void>(
			"setResourceBundle",
			"(Ljava/util/ResourceBundle;)V",
			arg0.__jniObject().object());
	}
	void LogRecord::setParameters(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setParameters",
			"([Ljava/lang/Object;)V",
			arg0);
	}
	void LogRecord::setThrown(jthrowable arg0)
	{
		__thiz.callMethod<void>(
			"setThrown",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void LogRecord::setSourceClassName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSourceClassName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LogRecord::setSourceMethodName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSourceMethodName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject LogRecord::getResourceBundle()
	{
		return __thiz.callObjectMethod(
			"getResourceBundle",
			"()Ljava/util/ResourceBundle;");
	}
	void LogRecord::setLevel(__jni_impl::java::util::logging::Level arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(Ljava/util/logging/Level;)V",
			arg0.__jniObject().object());
	}
	void LogRecord::setInstant(__jni_impl::java::time::Instant arg0)
	{
		__thiz.callMethod<void>(
			"setInstant",
			"(Ljava/time/Instant;)V",
			arg0.__jniObject().object());
	}
	jlong LogRecord::getMillis()
	{
		return __thiz.callMethod<jlong>(
			"getMillis",
			"()J");
	}
	void LogRecord::setMillis(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setMillis",
			"(J)V",
			arg0);
	}
	jlong LogRecord::getSequenceNumber()
	{
		return __thiz.callMethod<jlong>(
			"getSequenceNumber",
			"()J");
	}
	void LogRecord::setSequenceNumber(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setSequenceNumber",
			"(J)V",
			arg0);
	}
	QAndroidJniObject LogRecord::getSourceClassName()
	{
		return __thiz.callObjectMethod(
			"getSourceClassName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject LogRecord::getSourceMethodName()
	{
		return __thiz.callObjectMethod(
			"getSourceMethodName",
			"()Ljava/lang/String;");
	}
	void LogRecord::setMessage(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMessage",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint LogRecord::getThreadID()
	{
		return __thiz.callMethod<jint>(
			"getThreadID",
			"()I");
	}
	void LogRecord::setThreadID(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThreadID",
			"(I)V",
			arg0);
	}
	QAndroidJniObject LogRecord::getInstant()
	{
		return __thiz.callObjectMethod(
			"getInstant",
			"()Ljava/time/Instant;");
	}
	QAndroidJniObject LogRecord::getThrown()
	{
		return __thiz.callObjectMethod(
			"getThrown",
			"()Ljava/lang/Throwable;");
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

