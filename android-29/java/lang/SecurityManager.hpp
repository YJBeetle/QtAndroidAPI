#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::lang
{
	class ThreadGroup;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}
namespace __jni_impl::java::security
{
	class Permission;
}

namespace __jni_impl::java::lang
{
	class SecurityManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void checkAccept(jstring arg0, jint arg1);
		void checkAccept(const QString &arg0, jint arg1);
		void checkAccess(__jni_impl::java::lang::Thread arg0);
		void checkAccess(__jni_impl::java::lang::ThreadGroup arg0);
		void checkConnect(jstring arg0, jint arg1);
		void checkConnect(const QString &arg0, jint arg1);
		void checkConnect(jstring arg0, jint arg1, jobject arg2);
		void checkConnect(const QString &arg0, jint arg1, jobject arg2);
		void checkCreateClassLoader();
		void checkDelete(jstring arg0);
		void checkDelete(const QString &arg0);
		void checkExec(jstring arg0);
		void checkExec(const QString &arg0);
		void checkExit(jint arg0);
		void checkLink(jstring arg0);
		void checkLink(const QString &arg0);
		void checkListen(jint arg0);
		void checkMulticast(__jni_impl::java::net::InetAddress arg0);
		void checkMulticast(__jni_impl::java::net::InetAddress arg0, jbyte arg1);
		void checkPackageAccess(jstring arg0);
		void checkPackageAccess(const QString &arg0);
		void checkPackageDefinition(jstring arg0);
		void checkPackageDefinition(const QString &arg0);
		void checkPermission(__jni_impl::java::security::Permission arg0);
		void checkPermission(__jni_impl::java::security::Permission arg0, jobject arg1);
		void checkPrintJobAccess();
		void checkPropertiesAccess();
		void checkPropertyAccess(jstring arg0);
		void checkPropertyAccess(const QString &arg0);
		void checkRead(__jni_impl::java::io::FileDescriptor arg0);
		void checkRead(jstring arg0);
		void checkRead(const QString &arg0);
		void checkRead(jstring arg0, jobject arg1);
		void checkRead(const QString &arg0, jobject arg1);
		void checkSecurityAccess(jstring arg0);
		void checkSecurityAccess(const QString &arg0);
		void checkSetFactory();
		void checkWrite(__jni_impl::java::io::FileDescriptor arg0);
		void checkWrite(jstring arg0);
		void checkWrite(const QString &arg0);
		jobject getSecurityContext();
		QAndroidJniObject getThreadGroup();
	};
} // namespace __jni_impl::java::lang

#include "../io/FileDescriptor.hpp"
#include "Thread.hpp"
#include "ThreadGroup.hpp"
#include "../net/InetAddress.hpp"
#include "../security/Permission.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void SecurityManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityManager",
			"()V"
		);
	}
	
	// Methods
	void SecurityManager::checkAccept(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkAccept(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SecurityManager::checkAccess(__jni_impl::java::lang::Thread arg0)
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkAccess(__jni_impl::java::lang::ThreadGroup arg0)
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"(Ljava/lang/ThreadGroup;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkConnect(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkConnect(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SecurityManager::checkConnect(jstring arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;ILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SecurityManager::checkConnect(const QString &arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;ILjava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void SecurityManager::checkCreateClassLoader()
	{
		__thiz.callMethod<void>(
			"checkCreateClassLoader",
			"()V"
		);
	}
	void SecurityManager::checkDelete(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkDelete(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkExec(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkExec",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkExec(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkExec",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkExit(jint arg0)
	{
		__thiz.callMethod<void>(
			"checkExit",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkLink(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkLink(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkListen(jint arg0)
	{
		__thiz.callMethod<void>(
			"checkListen",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkMulticast(__jni_impl::java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkMulticast(__jni_impl::java::net::InetAddress arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;B)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SecurityManager::checkPackageAccess(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkPackageAccess(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkPackageDefinition(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkPackageDefinition",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkPackageDefinition(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkPackageDefinition",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkPermission(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkPermission(__jni_impl::java::security::Permission arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;Ljava/lang/Object;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SecurityManager::checkPrintJobAccess()
	{
		__thiz.callMethod<void>(
			"checkPrintJobAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertiesAccess()
	{
		__thiz.callMethod<void>(
			"checkPropertiesAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertyAccess(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkPropertyAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkPropertyAccess(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkPropertyAccess",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkRead(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkRead(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkRead(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkRead(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkRead(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void SecurityManager::checkSecurityAccess(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkSecurityAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkSecurityAccess(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkSecurityAccess",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void SecurityManager::checkSetFactory()
	{
		__thiz.callMethod<void>(
			"checkSetFactory",
			"()V"
		);
	}
	void SecurityManager::checkWrite(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"checkWrite",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkWrite(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkWrite",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkWrite(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"checkWrite",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jobject SecurityManager::getSecurityContext()
	{
		return __thiz.callObjectMethod(
			"getSecurityContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject SecurityManager::getThreadGroup()
	{
		return __thiz.callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class SecurityManager : public __jni_impl::java::lang::SecurityManager
	{
	public:
		SecurityManager(QAndroidJniObject obj) { __thiz = obj; }
		SecurityManager()
		{
			__constructor();
		}
	};
} // namespace java::lang

