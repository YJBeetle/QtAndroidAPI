#pragma once

#include "../../../JObject.hpp"

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
	class LogRecord : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogRecord(QAndroidJniObject obj);
		
		// Constructors
		LogRecord(java::util::logging::Level arg0, jstring arg1);
		
		// Methods
		java::time::Instant getInstant();
		java::util::logging::Level getLevel();
		jstring getLoggerName();
		jlong getLongThreadID();
		jstring getMessage();
		jlong getMillis();
		jobjectArray getParameters();
		java::util::ResourceBundle getResourceBundle();
		jstring getResourceBundleName();
		jlong getSequenceNumber();
		jstring getSourceClassName();
		jstring getSourceMethodName();
		jint getThreadID();
		jthrowable getThrown();
		void setInstant(java::time::Instant arg0);
		void setLevel(java::util::logging::Level arg0);
		void setLoggerName(jstring arg0);
		java::util::logging::LogRecord setLongThreadID(jlong arg0);
		void setMessage(jstring arg0);
		void setMillis(jlong arg0);
		void setParameters(jobjectArray arg0);
		void setResourceBundle(java::util::ResourceBundle arg0);
		void setResourceBundleName(jstring arg0);
		void setSequenceNumber(jlong arg0);
		void setSourceClassName(jstring arg0);
		void setSourceMethodName(jstring arg0);
		void setThreadID(jint arg0);
		void setThrown(jthrowable arg0);
	};
} // namespace java::util::logging

