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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogRecord(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogRecord(QAndroidJniObject obj);
		
		// Constructors
		LogRecord(java::util::logging::Level arg0, JString arg1);
		
		// Methods
		java::time::Instant getInstant() const;
		java::util::logging::Level getLevel() const;
		JString getLoggerName() const;
		jlong getLongThreadID() const;
		JString getMessage() const;
		jlong getMillis() const;
		JObjectArray getParameters() const;
		java::util::ResourceBundle getResourceBundle() const;
		JString getResourceBundleName() const;
		jlong getSequenceNumber() const;
		JString getSourceClassName() const;
		JString getSourceMethodName() const;
		jint getThreadID() const;
		JThrowable getThrown() const;
		void setInstant(java::time::Instant arg0) const;
		void setLevel(java::util::logging::Level arg0) const;
		void setLoggerName(JString arg0) const;
		java::util::logging::LogRecord setLongThreadID(jlong arg0) const;
		void setMessage(JString arg0) const;
		void setMillis(jlong arg0) const;
		void setParameters(JObjectArray arg0) const;
		void setResourceBundle(java::util::ResourceBundle arg0) const;
		void setResourceBundleName(JString arg0) const;
		void setSequenceNumber(jlong arg0) const;
		void setSourceClassName(JString arg0) const;
		void setSourceMethodName(JString arg0) const;
		void setThreadID(jint arg0) const;
		void setThrown(JThrowable arg0) const;
	};
} // namespace java::util::logging

