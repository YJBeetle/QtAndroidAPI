#pragma once

#ifndef JAVA_LANG_SECURITYMANAGER
#define JAVA_LANG_SECURITYMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ThreadGroup;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::lang
{
	class Thread;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::net
{
	class InetAddress;
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
		void checkPackageAccess(jstring arg0);
		void checkPermission(__jni_impl::java::security::Permission arg0, jobject arg1);
		void checkPermission(__jni_impl::java::security::Permission arg0);
		void checkCreateClassLoader();
		void checkPropertiesAccess();
		void checkPropertyAccess(jstring arg0);
		QAndroidJniObject getThreadGroup();
		jobject getSecurityContext();
		void checkAccess(__jni_impl::java::lang::Thread arg0);
		void checkAccess(__jni_impl::java::lang::ThreadGroup arg0);
		void checkExit(jint arg0);
		void checkExec(jstring arg0);
		void checkLink(jstring arg0);
		void checkRead(__jni_impl::java::io::FileDescriptor arg0);
		void checkRead(jstring arg0);
		void checkRead(jstring arg0, jobject arg1);
		void checkWrite(__jni_impl::java::io::FileDescriptor arg0);
		void checkWrite(jstring arg0);
		void checkDelete(jstring arg0);
		void checkConnect(jstring arg0, jint arg1, jobject arg2);
		void checkConnect(jstring arg0, jint arg1);
		void checkListen(jint arg0);
		void checkAccept(jstring arg0, jint arg1);
		void checkMulticast(__jni_impl::java::net::InetAddress arg0);
		void checkMulticast(__jni_impl::java::net::InetAddress arg0, jbyte arg1);
		void checkPrintJobAccess();
		void checkPackageDefinition(jstring arg0);
		void checkSetFactory();
		void checkSecurityAccess(jstring arg0);
	};
} // namespace __jni_impl::java::lang

#include "ThreadGroup.hpp"
#include "../security/Permission.hpp"
#include "Thread.hpp"
#include "../io/FileDescriptor.hpp"
#include "../net/InetAddress.hpp"

namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void SecurityManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.SecurityManager",
			"()V");
	}
	
	// Methods
	void SecurityManager::checkPackageAccess(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			arg0
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
	void SecurityManager::checkPermission(__jni_impl::java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkCreateClassLoader()
	{
		__thiz.callMethod<void>(
			"checkCreateClassLoader",
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
	QAndroidJniObject SecurityManager::getThreadGroup()
	{
		return __thiz.callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
	jobject SecurityManager::getSecurityContext()
	{
		return __thiz.callObjectMethod(
			"getSecurityContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	void SecurityManager::checkExit(jint arg0)
	{
		__thiz.callMethod<void>(
			"checkExit",
			"(I)V",
			arg0
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
	void SecurityManager::checkLink(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			arg0
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
	void SecurityManager::checkRead(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
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
	void SecurityManager::checkDelete(jstring arg0)
	{
		__thiz.callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			arg0
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
	void SecurityManager::checkConnect(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
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
	void SecurityManager::checkAccept(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
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
	void SecurityManager::checkPrintJobAccess()
	{
		__thiz.callMethod<void>(
			"checkPrintJobAccess",
			"()V"
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
	void SecurityManager::checkSetFactory()
	{
		__thiz.callMethod<void>(
			"checkSetFactory",
			"()V"
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

#endif // JAVA_LANG_SECURITYMANAGER

