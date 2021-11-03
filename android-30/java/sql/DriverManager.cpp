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
	DriverManager::DriverManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void DriverManager::deregisterDriver(JObject arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"deregisterDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	JObject DriverManager::drivers()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"drivers",
			"()Ljava/util/stream/Stream;"
		);
	}
	JObject DriverManager::getConnection(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0
		);
	}
	JObject DriverManager::getConnection(jstring arg0, java::util::Properties arg1)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0,
			arg1.object()
		);
	}
	JObject DriverManager::getConnection(jstring arg0, jstring arg1, jstring arg2)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;",
			arg0,
			arg1,
			arg2
		);
	}
	JObject DriverManager::getDriver(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0
		);
	}
	JObject DriverManager::getDrivers()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDrivers",
			"()Ljava/util/Enumeration;"
		);
	}
	java::io::PrintStream DriverManager::getLogStream()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogStream",
			"()Ljava/io/PrintStream;"
		);
	}
	java::io::PrintWriter DriverManager::getLogWriter()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogWriter",
			"()Ljava/io/PrintWriter;"
		);
	}
	jint DriverManager::getLoginTimeout()
	{
		return callStaticMethod<jint>(
			"java.sql.DriverManager",
			"getLoginTimeout",
			"()I"
		);
	}
	void DriverManager::println(jstring arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DriverManager::registerDriver(JObject arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	void DriverManager::registerDriver(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DriverManager::setLogStream(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	void DriverManager::setLogWriter(java::io::PrintWriter arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogWriter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	void DriverManager::setLoginTimeout(jint arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLoginTimeout",
			"(I)V",
			arg0
		);
	}
} // namespace java::sql

