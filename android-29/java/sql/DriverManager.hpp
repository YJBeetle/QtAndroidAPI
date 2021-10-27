#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::sql
{
	class SQLPermission;
}
namespace __jni_impl::java::util
{
	class Properties;
}
namespace __jni_impl::java::util::concurrent
{
	class CopyOnWriteArrayList;
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
		static void deregisterDriver(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject drivers();
		static QAndroidJniObject getConnection(jstring arg0);
		static QAndroidJniObject getConnection(const QString &arg0);
		static QAndroidJniObject getConnection(jstring arg0, __jni_impl::java::util::Properties arg1);
		static QAndroidJniObject getConnection(const QString &arg0, __jni_impl::java::util::Properties arg1);
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
		static void registerDriver(__jni_impl::__JniBaseClass arg0);
		static void registerDriver(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static void setLogStream(__jni_impl::java::io::PrintStream arg0);
		static void setLogWriter(__jni_impl::java::io::PrintWriter arg0);
		static void setLoginTimeout(jint arg0);
	};
} // namespace __jni_impl::java::sql

#include "../io/PrintStream.hpp"
#include "../io/PrintWriter.hpp"
#include "../lang/ClassLoader.hpp"
#include "SQLPermission.hpp"
#include "../util/Properties.hpp"
#include "../util/concurrent/CopyOnWriteArrayList.hpp"

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
	void DriverManager::deregisterDriver(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"deregisterDriver",
			"(Ljava/sql/Driver;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DriverManager::drivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"drivers",
			"()Ljava/util/stream/Stream;"
		);
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			arg0
		);
	}
	QAndroidJniObject DriverManager::getConnection(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;)Ljava/sql/Connection;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0, __jni_impl::java::util::Properties arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DriverManager::getConnection(const QString &arg0, __jni_impl::java::util::Properties arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DriverManager::getConnection(jstring arg0, jstring arg1, jstring arg2)
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
	QAndroidJniObject DriverManager::getConnection(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/sql/Connection;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject DriverManager::getDriver(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			arg0
		);
	}
	QAndroidJniObject DriverManager::getDriver(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDriver",
			"(Ljava/lang/String;)Ljava/sql/Driver;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DriverManager::getDrivers()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getDrivers",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject DriverManager::getLogStream()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getLogStream",
			"()Ljava/io/PrintStream;"
		);
	}
	QAndroidJniObject DriverManager::getLogWriter()
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
	void DriverManager::println(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"println",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DriverManager::registerDriver(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.__jniObject().object()
		);
	}
	void DriverManager::registerDriver(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DriverManager::setLogStream(__jni_impl::java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void DriverManager::setLogWriter(__jni_impl::java::io::PrintWriter arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogWriter",
			"(Ljava/io/PrintWriter;)V",
			arg0.__jniObject().object()
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

