#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../lang/ClassLoader.hpp"
#include "./SQLPermission.hpp"
#include "../util/Properties.hpp"
#include "../util/concurrent/CopyOnWriteArrayList.hpp"
#include "./DriverManager.hpp"

namespace java::sql
{
	// Fields
	
	// QAndroidJniObject forward
	DriverManager::DriverManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void DriverManager::deregisterDriver(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"deregisterDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	__JniBaseClass DriverManager::drivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"drivers",
			"()Ljava/util/stream/Stream;"
		);
	}
	__JniBaseClass DriverManager::getConnection(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0
		);
	}
	__JniBaseClass DriverManager::getConnection(jstring arg0, java::util::Properties arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0,
			arg1.object()
		);
	}
	__JniBaseClass DriverManager::getConnection(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;",
			arg0,
			arg1,
			arg2
		);
	}
	__JniBaseClass DriverManager::getDriver(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0
		);
	}
	__JniBaseClass DriverManager::getDrivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDrivers",
			"()Ljava/util/Enumeration;"
		);
	}
	java::io::PrintStream DriverManager::getLogStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogStream",
			"()Ljava/io/PrintStream;"
		);
	}
	java::io::PrintWriter DriverManager::getLogWriter()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogWriter",
			"()Ljava/io/PrintWriter;"
		);
	}
	jint DriverManager::getLoginTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.sql.DriverManager",
			"getLoginTimeout",
			"()I"
		);
	}
	void DriverManager::println(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DriverManager::registerDriver(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	void DriverManager::registerDriver(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DriverManager::setLogStream(java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void DriverManager::setLogWriter(java::io::PrintWriter arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogWriter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	void DriverManager::setLoginTimeout(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLoginTimeout",
			"(I)V",
			arg0
		);
	}
} // namespace java::sql

