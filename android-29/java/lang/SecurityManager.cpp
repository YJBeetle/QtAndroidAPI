#include "../io/FileDescriptor.hpp"
#include "./Thread.hpp"
#include "./ThreadGroup.hpp"
#include "../net/InetAddress.hpp"
#include "../security/Permission.hpp"
#include "./SecurityManager.hpp"

namespace java::lang
{
	// Fields
	
	SecurityManager::SecurityManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecurityManager::SecurityManager()
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
	void SecurityManager::checkAccess(java::lang::Thread arg0)
	{
		__thiz.callMethod<void>(
			"checkAccess",
			"(Ljava/lang/Thread;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkAccess(java::lang::ThreadGroup arg0)
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
	void SecurityManager::checkMulticast(java::net::InetAddress arg0)
	{
		__thiz.callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkMulticast(java::net::InetAddress arg0, jbyte arg1)
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
	void SecurityManager::checkPermission(java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	void SecurityManager::checkPermission(java::security::Permission arg0, jobject arg1)
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
	void SecurityManager::checkRead(java::io::FileDescriptor arg0)
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
	void SecurityManager::checkWrite(java::io::FileDescriptor arg0)
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
} // namespace java::lang

