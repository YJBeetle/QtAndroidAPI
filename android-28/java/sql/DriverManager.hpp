#pragma once

#include "../io/PrintStream.def.hpp"
#include "../io/PrintWriter.def.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SQLPermission.def.hpp"
#include "../util/Properties.def.hpp"
#include "../util/concurrent/CopyOnWriteArrayList.def.hpp"
#include "./DriverManager.def.hpp"

namespace java::sql
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void DriverManager::deregisterDriver(JObject arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"deregisterDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	inline JObject DriverManager::drivers()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"drivers",
			"()Ljava/util/stream/Stream;"
		);
	}
	inline JObject DriverManager::getConnection(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0.object<jstring>()
		);
	}
	inline JObject DriverManager::getConnection(JString arg0, java::util::Properties arg1)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline JObject DriverManager::getConnection(JString arg0, JString arg1, JString arg2)
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
	inline JObject DriverManager::getDriver(JString arg0)
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0.object<jstring>()
		);
	}
	inline JObject DriverManager::getDrivers()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDrivers",
			"()Ljava/util/Enumeration;"
		);
	}
	inline java::io::PrintStream DriverManager::getLogStream()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogStream",
			"()Ljava/io/PrintStream;"
		);
	}
	inline java::io::PrintWriter DriverManager::getLogWriter()
	{
		return callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogWriter",
			"()Ljava/io/PrintWriter;"
		);
	}
	inline jint DriverManager::getLoginTimeout()
	{
		return callStaticMethod<jint>(
			"java.sql.DriverManager",
			"getLoginTimeout",
			"()I"
		);
	}
	inline void DriverManager::println(JString arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DriverManager::registerDriver(JObject arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.object()
		);
	}
	inline void DriverManager::registerDriver(JObject arg0, JObject arg1)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void DriverManager::setLogStream(java::io::PrintStream arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.object()
		);
	}
	inline void DriverManager::setLogWriter(java::io::PrintWriter arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogWriter",
			"(Ljava/io/PrintWriter;)V",
			arg0.object()
		);
	}
	inline void DriverManager::setLoginTimeout(jint arg0)
	{
		callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLoginTimeout",
			"(I)V",
			arg0
		);
	}
} // namespace java::sql

// Base class headers

