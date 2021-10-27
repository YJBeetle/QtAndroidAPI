#include "../io/Console.hpp"
#include "../io/FileOutputStream.hpp"
#include "../io/InputStream.hpp"
#include "../io/PrintStream.hpp"
#include "./SecurityManager.hpp"
#include "../util/Properties.hpp"
#include "../util/ResourceBundle.hpp"
#include "./System.hpp"

namespace java::lang
{
	// Fields
	QAndroidJniObject System::err()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"err",
			"Ljava/io/PrintStream;"
		);
	}
	QAndroidJniObject System::in()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"in",
			"Ljava/io/InputStream;"
		);
	}
	QAndroidJniObject System::out()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"out",
			"Ljava/io/PrintStream;"
		);
	}
	
	System::System(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void System::arraycopy(jobject arg0, jint arg1, jobject arg2, jint arg3, jint arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"arraycopy",
			"(Ljava/lang/Object;ILjava/lang/Object;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jstring System::clearProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"clearProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring System::clearProperty(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"clearProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject System::console()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"console",
			"()Ljava/io/Console;"
		);
	}
	jlong System::currentTimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.System",
			"currentTimeMillis",
			"()J"
		);
	}
	void System::exit(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"exit",
			"(I)V",
			arg0
		);
	}
	void System::gc()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"gc",
			"()V"
		);
	}
	QAndroidJniObject System::getLogger(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;)Ljava/lang/System$Logger;",
			arg0
		);
	}
	QAndroidJniObject System::getLogger(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;)Ljava/lang/System$Logger;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject System::getLogger(jstring arg0, java::util::ResourceBundle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject System::getLogger(const QString &arg0, java::util::ResourceBundle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject System::getProperties()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperties",
			"()Ljava/util/Properties;"
		);
	}
	jstring System::getProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring System::getProperty(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring System::getProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring System::getProperty(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject System::getSecurityManager()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getSecurityManager",
			"()Ljava/lang/SecurityManager;"
		);
	}
	jstring System::getenv(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring System::getenv(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject System::getenv()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"()Ljava/util/Map;"
		);
	}
	jint System::identityHashCode(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.System",
			"identityHashCode",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	QAndroidJniObject System::inheritedChannel()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;"
		);
	}
	jstring System::lineSeparator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"lineSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void System::load(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"load",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void System::load(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"load",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void System::loadLibrary(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void System::loadLibrary(const QString &arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"loadLibrary",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring System::mapLibraryName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"mapLibraryName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring System::mapLibraryName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"mapLibraryName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jlong System::nanoTime()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.System",
			"nanoTime",
			"()J"
		);
	}
	void System::runFinalization()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"runFinalization",
			"()V"
		);
	}
	void System::setErr(java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setErr",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void System::setIn(java::io::InputStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setIn",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void System::setOut(java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setOut",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void System::setProperties(java::util::Properties arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setProperties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object()
		);
	}
	jstring System::setProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring System::setProperty(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	void System::setSecurityManager(java::lang::SecurityManager arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setSecurityManager",
			"(Ljava/lang/SecurityManager;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::lang

