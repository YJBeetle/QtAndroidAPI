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
		
		LogManager(QAndroidJniObject obj);
		// Constructors
		LogManager() = default;
		
		// Methods
		static QAndroidJniObject getLogManager();
		static QAndroidJniObject getLoggingMXBean();
		QAndroidJniObject addConfigurationListener(__JniBaseClass arg0);
		jboolean addLogger(java::util::logging::Logger arg0);
		void checkAccess();
		QAndroidJniObject getLogger(jstring arg0);
		QAndroidJniObject getLoggerNames();
		jstring getProperty(jstring arg0);
		void readConfiguration();
		void readConfiguration(java::io::InputStream arg0);
		void removeConfigurationListener(__JniBaseClass arg0);
		void reset();
		void updateConfiguration(__JniBaseClass arg0);
		void updateConfiguration(java::io::InputStream arg0, __JniBaseClass arg1);
	};
} // namespace java::util::logging

