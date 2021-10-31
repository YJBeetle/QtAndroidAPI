#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class LogManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring LOGGING_MXBEAN_NAME();
		
		// QJniObject forward
		template<typename ...Ts> explicit LogManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LogManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::logging::LogManager getLogManager();
		static __JniBaseClass getLoggingMXBean();
		java::util::logging::LogManager addConfigurationListener(__JniBaseClass arg0);
		jboolean addLogger(java::util::logging::Logger arg0);
		void checkAccess();
		java::util::logging::Logger getLogger(jstring arg0);
		__JniBaseClass getLoggerNames();
		jstring getProperty(jstring arg0);
		void readConfiguration();
		void readConfiguration(java::io::InputStream arg0);
		void removeConfigurationListener(__JniBaseClass arg0);
		void reset();
		void updateConfiguration(__JniBaseClass arg0);
		void updateConfiguration(java::io::InputStream arg0, __JniBaseClass arg1);
	};
} // namespace java::util::logging

