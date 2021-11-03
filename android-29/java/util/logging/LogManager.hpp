#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
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
		static jstring LOGGING_MXBEAN_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LogManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LogManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::logging::LogManager getLogManager();
		static JObject getLoggingMXBean();
		java::util::logging::LogManager addConfigurationListener(JObject arg0);
		jboolean addLogger(java::util::logging::Logger arg0);
		void checkAccess();
		java::util::logging::Logger getLogger(jstring arg0);
		JObject getLoggerNames();
		jstring getProperty(jstring arg0);
		void readConfiguration();
		void readConfiguration(java::io::InputStream arg0);
		void removeConfigurationListener(JObject arg0);
		void reset();
		void updateConfiguration(JObject arg0);
		void updateConfiguration(java::io::InputStream arg0, JObject arg1);
	};
} // namespace java::util::logging

