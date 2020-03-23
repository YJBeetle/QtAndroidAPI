#pragma once

#ifndef JAVA_LANG_SYSTEM
#define JAVA_LANG_SYSTEM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::io
{
	class Console;
}
namespace __jni_impl::java::util
{
	class Properties;
}
namespace __jni_impl::java::lang
{
	class SecurityManager;
}
namespace __jni_impl::java::util
{
	class ResourceBundle;
}
namespace __jni_impl::java::io
{
	class FileOutputStream;
}

namespace __jni_impl::java::lang
{
	class System : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject in();
		static QAndroidJniObject out();
		static QAndroidJniObject err();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void exit(jint arg0);
		static void runFinalization();
		static QAndroidJniObject getProperty(jstring arg0);
		static QAndroidJniObject getProperty(jstring arg0, jstring arg1);
		static jint identityHashCode(jobject arg0);
		static jlong currentTimeMillis();
		static jlong nanoTime();
		static void arraycopy(jobject arg0, jint arg1, jobject arg2, jint arg3, jint arg4);
		static QAndroidJniObject getSecurityManager();
		static QAndroidJniObject mapLibraryName(jstring arg0);
		static void loadLibrary(jstring arg0);
		static QAndroidJniObject console();
		static QAndroidJniObject inheritedChannel();
		static void setSecurityManager(__jni_impl::java::lang::SecurityManager arg0);
		static QAndroidJniObject lineSeparator();
		static QAndroidJniObject setProperty(jstring arg0, jstring arg1);
		static QAndroidJniObject getenv(jstring arg0);
		static QAndroidJniObject getenv();
		static QAndroidJniObject getLogger(jstring arg0, __jni_impl::java::util::ResourceBundle arg1);
		static QAndroidJniObject getLogger(jstring arg0);
		static void gc();
		static void setIn(__jni_impl::java::io::InputStream arg0);
		static void setOut(__jni_impl::java::io::PrintStream arg0);
		static void setErr(__jni_impl::java::io::PrintStream arg0);
		static QAndroidJniObject getProperties();
		static void setProperties(__jni_impl::java::util::Properties arg0);
		static QAndroidJniObject clearProperty(jstring arg0);
		static void load(jstring arg0);
	};
} // namespace __jni_impl::java::lang

#include "../io/InputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../io/Console.hpp"
#include "../util/Properties.hpp"
#include "SecurityManager.hpp"
#include "../util/ResourceBundle.hpp"
#include "../io/FileOutputStream.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	QAndroidJniObject System::in()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"in",
			"Ljava/io/InputStream;");
	}
	QAndroidJniObject System::out()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"out",
			"Ljava/io/PrintStream;");
	}
	QAndroidJniObject System::err()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.lang.System",
			"err",
			"Ljava/io/PrintStream;");
	}
	
	// Constructors
	void System::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.System",
			"(V)V");
	}
	
	// Methods
	void System::exit(jint arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"exit",
			"(I)V",
			arg0);
	}
	void System::runFinalization()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"runFinalization",
			"()V");
	}
	QAndroidJniObject System::getProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject System::getProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	jint System::identityHashCode(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"java.lang.System",
			"identityHashCode",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jlong System::currentTimeMillis()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.System",
			"currentTimeMillis",
			"()J");
	}
	jlong System::nanoTime()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"java.lang.System",
			"nanoTime",
			"()J");
	}
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
			arg4);
	}
	QAndroidJniObject System::getSecurityManager()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getSecurityManager",
			"()Ljava/lang/SecurityManager;");
	}
	QAndroidJniObject System::mapLibraryName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"mapLibraryName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void System::loadLibrary(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"loadLibrary",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject System::console()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"console",
			"()Ljava/io/Console;");
	}
	QAndroidJniObject System::inheritedChannel()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"inheritedChannel",
			"()Ljava/nio/channels/Channel;");
	}
	void System::setSecurityManager(__jni_impl::java::lang::SecurityManager arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setSecurityManager",
			"(Ljava/lang/SecurityManager;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject System::lineSeparator()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"lineSeparator",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject System::setProperty(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"setProperty",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1);
	}
	QAndroidJniObject System::getenv(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject System::getenv()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getenv",
			"()Ljava/util/Map;");
	}
	QAndroidJniObject System::getLogger(jstring arg0, __jni_impl::java::util::ResourceBundle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;Ljava/util/ResourceBundle;)Ljava/lang/System$Logger;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject System::getLogger(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getLogger",
			"(Ljava/lang/String;)Ljava/lang/System$Logger;",
			arg0);
	}
	void System::gc()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"gc",
			"()V");
	}
	void System::setIn(__jni_impl::java::io::InputStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setIn",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void System::setOut(__jni_impl::java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setOut",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object());
	}
	void System::setErr(__jni_impl::java::io::PrintStream arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setErr",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject System::getProperties()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"getProperties",
			"()Ljava/util/Properties;");
	}
	void System::setProperties(__jni_impl::java::util::Properties arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"setProperties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject System::clearProperty(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.System",
			"clearProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void System::load(jstring arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.System",
			"load",
			"(Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class System : public __jni_impl::java::lang::System
	{
	public:
		System(QAndroidJniObject obj) { __thiz = obj; }
		System()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_SYSTEM

