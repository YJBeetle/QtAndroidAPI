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
	
	DriverManager::DriverManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void DriverManager::deregisterDriver(__JniBaseClass arg0)
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
	QAndroidJniObject DriverManager::getConnection(jstring arg0, java::util::Properties arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.sql.DriverManager",
			"getConnection",
			"(Ljava/lang/String;Ljava/util/Properties;)Ljava/sql/Connection;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject DriverManager::getConnection(const QString &arg0, java::util::Properties arg1)
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
	void DriverManager::registerDriver(__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;)V",
			arg0.__jniObject().object()
		);
	}
	void DriverManager::registerDriver(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"registerDriver",
			"(Ljava/sql/Driver;Ljava/sql/DriverAction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DriverManager::setLogStream(java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.sql.DriverManager",
			"setLogStream",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void DriverManager::setLogWriter(java::io::PrintWriter arg0)
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
} // namespace java::sql

