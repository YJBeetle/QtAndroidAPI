#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::time
{
	class Instant;
}
namespace java::util
{
	class ResourceBundle;
}
namespace java::util::concurrent::atomic
{
	class AtomicLong;
}
namespace java::util::logging
{
	class Level;
}

namespace java::util::logging
{
	class LogRecord : public __JniBaseClass
	{
	public:
		// Fields
		
		LogRecord(QAndroidJniObject obj);
		// Constructors
		LogRecord(java::util::logging::Level &arg0, jstring &arg1);
		LogRecord(java::util::logging::Level &arg0, const QString &arg1);
		LogRecord() = default;
		
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
		void setInstant(java::time::Instant arg0);
		void setLevel(java::util::logging::Level arg0);
		void setLoggerName(jstring arg0);
		void setLoggerName(const QString &arg0);
		QAndroidJniObject setLongThreadID(jlong arg0);
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setMillis(jlong arg0);
		void setParameters(jobjectArray arg0);
		void setResourceBundle(java::util::ResourceBundle arg0);
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
} // namespace java::util::logging

