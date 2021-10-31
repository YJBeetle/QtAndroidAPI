#include "../io/FileDescriptor.hpp"
#include "./Thread.hpp"
#include "./ThreadGroup.hpp"
#include "../net/InetAddress.hpp"
#include "../security/Permission.hpp"
#include "./SecurityManager.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	SecurityManager::SecurityManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SecurityManager::SecurityManager()
		: __JniBaseClass(
			"java.lang.SecurityManager",
			"()V"
		) {}
	
	// Methods
	void SecurityManager::checkAccept(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkAccess(java::lang::Thread arg0)
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkAccess(java::lang::ThreadGroup arg0)
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/ThreadGroup;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkConnect(jstring arg0, jint arg1)
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkConnect(jstring arg0, jint arg1, jobject arg2)
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;ILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void SecurityManager::checkCreateClassLoader()
	{
		callMethod<void>(
			"checkCreateClassLoader",
			"()V"
		);
	}
	void SecurityManager::checkDelete(jstring arg0)
	{
		callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkExec(jstring arg0)
	{
		callMethod<void>(
			"checkExec",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkExit(jint arg0)
	{
		callMethod<void>(
			"checkExit",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkLink(jstring arg0)
	{
		callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkListen(jint arg0)
	{
		callMethod<void>(
			"checkListen",
			"(I)V",
			arg0
		);
	}
	void SecurityManager::checkMulticast(java::net::InetAddress arg0)
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkMulticast(java::net::InetAddress arg0, jbyte arg1)
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;B)V",
			arg0.object(),
			arg1
		);
	}
	void SecurityManager::checkPackageAccess(jstring arg0)
	{
		callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkPackageDefinition(jstring arg0)
	{
		callMethod<void>(
			"checkPackageDefinition",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkPermission(java::security::Permission arg0)
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkPermission(java::security::Permission arg0, jobject arg1)
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;Ljava/lang/Object;)V",
			arg0.object(),
			arg1
		);
	}
	void SecurityManager::checkPrintJobAccess()
	{
		callMethod<void>(
			"checkPrintJobAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertiesAccess()
	{
		callMethod<void>(
			"checkPropertiesAccess",
			"()V"
		);
	}
	void SecurityManager::checkPropertyAccess(jstring arg0)
	{
		callMethod<void>(
			"checkPropertyAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkRead(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkRead(jstring arg0)
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkRead(jstring arg0, jobject arg1)
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void SecurityManager::checkSecurityAccess(jstring arg0)
	{
		callMethod<void>(
			"checkSecurityAccess",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SecurityManager::checkSetFactory()
	{
		callMethod<void>(
			"checkSetFactory",
			"()V"
		);
	}
	void SecurityManager::checkWrite(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void SecurityManager::checkWrite(jstring arg0)
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject SecurityManager::getSecurityContext()
	{
		return callObjectMethod(
			"getSecurityContext",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject SecurityManager::getThreadGroup()
	{
		return callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
} // namespace java::lang

