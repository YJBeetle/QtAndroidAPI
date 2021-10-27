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
		
		DriverManager(QAndroidJniObject obj);
		// Constructors
		DriverManager() = default;
		
		// Methods
		static void deregisterDriver(__JniBaseClass arg0);
		static QAndroidJniObject drivers();
		static QAndroidJniObject getConnection(jstring arg0);
		static QAndroidJniObject getConnection(const QString &arg0);
		static QAndroidJniObject getConnection(jstring arg0, java::util::Properties arg1);
		static QAndroidJniObject getConnection(const QString &arg0, java::util::Properties arg1);
		static QAndroidJniObject getConnection(jstring arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getConnection(const QString &arg0, const QString &arg1, const QString &arg2);
		static QAndroidJniObject getDriver(jstring arg0);
		static QAndroidJniObject getDriver(const QString &arg0);
		static QAndroidJniObject getDrivers();
		static QAndroidJniObject getLogStream();
		static QAndroidJniObject getLogWriter();
		static jint getLoginTimeout();
		static void println(jstring arg0);
		static void println(const QString &arg0);
		static void registerDriver(__JniBaseClass arg0);
		static void registerDriver(__JniBaseClass arg0, __JniBaseClass arg1);
		static void setLogStream(java::io::PrintStream arg0);
		static void setLogWriter(java::io::PrintWriter arg0);
		static void setLoginTimeout(jint arg0);
	};
} // namespace java::sql

