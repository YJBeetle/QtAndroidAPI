#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace java::io
{
	class InputStream;
}
class JClass;
class JString;
namespace java::lang
{
	class Void;
}
namespace java::lang::ref
{
	class ReferenceQueue;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::security
{
	class Permission;
}
namespace java::util
{
	class Properties;
}
namespace java::util
{
	class WeakHashMap;
}
namespace java::util::concurrent
{
	class CopyOnWriteArrayList;
}
namespace java::util::concurrent::locks
{
	class ReentrantLock;
}
namespace java::util::logging
{
	class Formatter;
}
namespace java::util::logging
{
	class Level;
}
namespace java::util::logging
{
	class Logger;
}

namespace java::util::logging
{
	class LogManager : public JObject
	{
	public:
		// Fields
		static JString LOGGING_MXBEAN_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit LogManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::logging::LogManager getLogManager();
		static JObject getLoggingMXBean();
		java::util::logging::LogManager addConfigurationListener(JObject arg0) const;
		jboolean addLogger(java::util::logging::Logger arg0) const;
		void checkAccess() const;
		java::util::logging::Logger getLogger(JString arg0) const;
		JObject getLoggerNames() const;
		JString getProperty(JString arg0) const;
		void readConfiguration() const;
		void readConfiguration(java::io::InputStream arg0) const;
		void removeConfigurationListener(JObject arg0) const;
		void reset() const;
		void updateConfiguration(JObject arg0) const;
		void updateConfiguration(java::io::InputStream arg0, JObject arg1) const;
	};
} // namespace java::util::logging

