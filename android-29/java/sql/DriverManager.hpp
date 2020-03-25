#pragma once

#ifndef JAVA_SQL_DRIVERMANAGER
#define JAVA_SQL_DRIVERMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArrayList;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::sql
{
	class SQLPermission;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::util
{
	class Properties;
}

namespace __jni_impl::java::sql
{
	class DriverManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static void println(jstring arg0);
		static QAndroidJniObject getLogWriter();
		static void registerDriver(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static void registerDriver(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getDrivers();
		static void deregisterDriver(__jni_impl::__JniBaseClass arg0);
		static void setLogWriter(__jni_impl::java::io::PrintWriter arg0);
		static QAndroidJniObject getDriver(jstring arg0);
		static QAndroidJniObject drivers();
		static void setLoginTimeout(jint arg0);
		static jint getLoginTimeout();
		static void setLogStream(__jni_impl::java::io::PrintStream arg0);
		static QAndroidJniObject getLogStream();
		static QAndroidJniObject getConnection(jstring arg0);
		static QAndroidJniObject getConnection(jstring arg0, __jni_impl::java::util::Properties arg1);
		static QAndroidJniObject getConnection(jstring arg0, jstring arg1, jstring arg2);
	};
} // namespace __jni_impl::java::sql

#include "../util/concurrent/CopyOnWriteArrayList.hpp"
#include "../io/PrintWriter.hpp"
#include "../io/PrintStream.hpp"
#include "SQLPermission.hpp"
#include "../lang/ClassLoader.hpp"
#include "../util/Properties.hpp"

namespace __jni_impl::java::sql
{
	// Fields
	
	// Constructors
	void DriverManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.sql.DriverManager",
			"(V)V");
	}
	
	// Methods
	void DriverManager::println(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DriverManager::getLogWriter()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogWriter",
			"()Ljava/io/PrintWriter;");
	}
	void DriverManager::registerDriver(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void DriverManager::registerDriver(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DriverManager::getDrivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDrivers",
			"()Ljava/util/Enumeration;");
	}
	void DriverManager::deregisterDriver(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"deregisterDriver",
			"(Ljava/sql/Driver;)V",
			arg0.__jniObject().object());
	}
	void DriverManager::setLogWriter(__jni_impl::java::io::PrintWriter arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogWriter",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DriverManager::getDriver(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0);
	}
	QAndroidJniObject DriverManager::drivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"drivers",
			"()Ljava/util/stream/Stream;");
	}
	void DriverManager::setLoginTimeout(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLoginTimeout",
			"(I)V",
			arg0);
	}
	jint DriverManager::getLoginTimeout()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.sql.DriverManager",
			"getLoginTimeout",
			"()I");
	}
	void DriverManager::setLogStream(__jni_impl::java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject DriverManager::getLogStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogStream",
			"()Ljava/io/PrintStream;");
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0);
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0, __jni_impl::java::util::Properties arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0, jstring arg1, jstring arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;",
			arg0,
			arg1,
			arg2);
	}
} // namespace __jni_impl::java::sql

namespace java::sql
{
	class DriverManager : public __jni_impl::java::sql::DriverManager
	{
	public:
		DriverManager(QAndroidJniObject obj) { __thiz = obj; }
		DriverManager()
		{
			__constructor();
		}
	};
} // namespace java::sql

#endif // JAVA_SQL_DRIVERMANAGER

