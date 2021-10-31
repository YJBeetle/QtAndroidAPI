#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class PrintStream;
}
namespace java::io
{
	class PrintWriter;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::sql
{
	class SQLPermission;
}
namespace java::util
{
	class Properties;
}
namespace java::util::concurrent
{
	class CopyOnWriteArrayList;
}

namespace java::sql
{
	class DriverManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DriverManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DriverManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void deregisterDriver(__JniBaseClass arg0);
		static __JniBaseClass drivers();
		static __JniBaseClass getConnection(jstring arg0);
		static __JniBaseClass getConnection(jstring arg0, java::util::Properties arg1);
		static __JniBaseClass getConnection(jstring arg0, jstring arg1, jstring arg2);
		static __JniBaseClass getDriver(jstring arg0);
		static __JniBaseClass getDrivers();
		static java::io::PrintStream getLogStream();
		static java::io::PrintWriter getLogWriter();
		static jint getLoginTimeout();
		static void println(jstring arg0);
		static void registerDriver(__JniBaseClass arg0);
		static void registerDriver(__JniBaseClass arg0, __JniBaseClass arg1);
		static void setLogStream(java::io::PrintStream arg0);
		static void setLogWriter(java::io::PrintWriter arg0);
		static void setLoginTimeout(jint arg0);
	};
} // namespace java::sql

