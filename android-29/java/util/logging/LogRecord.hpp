#pragma once

#include "../../../JObject.hpp"

class JArray;
class JObjectArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JThrowable;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit LogRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogRecord(QJniObject obj);
		
		// Constructors
		LogRecord(java::util::logging::Level arg0, JString arg1);
		
		// Methods
		java::time::Instant getInstant();
		java::util::logging::Level getLevel();
		JString getLoggerName();
		jlong getLongThreadID();
		JString getMessage();
		jlong getMillis();
		JObjectArray getParameters();
		java::util::ResourceBundle getResourceBundle();
		JString getResourceBundleName();
		jlong getSequenceNumber();
		JString getSourceClassName();
		JString getSourceMethodName();
		jint getThreadID();
		JThrowable getThrown();
		void setInstant(java::time::Instant arg0);
		void setLevel(java::util::logging::Level arg0);
		void setLoggerName(JString arg0);
		java::util::logging::LogRecord setLongThreadID(jlong arg0);
		void setMessage(JString arg0);
		void setMillis(jlong arg0);
		void setParameters(JObjectArray arg0);
		void setResourceBundle(java::util::ResourceBundle arg0);
		void setResourceBundleName(JString arg0);
		void setSequenceNumber(jlong arg0);
		void setSourceClassName(JString arg0);
		void setSourceMethodName(JString arg0);
		void setThreadID(jint arg0);
		void setThrown(JThrowable arg0);
	};
} // namespace java::util::logging

