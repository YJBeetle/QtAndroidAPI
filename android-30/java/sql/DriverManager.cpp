#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SQLPermission.hpp"
#include "../util/Properties.hpp"
#include "../util/concurrent/CopyOnWriteArrayList.hpp"
#include "./DriverManager.hpp"

namespace java::sql
{
	// Fields
	
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
	JObject DriverManager::getConnection(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0.object<jstring>()
		);
	}
	JObject DriverManager::getConnection(JString arg0, java::util::Properties arg1)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JObject DriverManager::getConnection(JString arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	JObject DriverManager::getDriver(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0.object<jstring>()
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
	void DriverManager::println(JString arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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

