#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}
namespace java::lang
{
	class Thread;
}
namespace java::lang
{
	class ThreadGroup;
}
namespace java::net
{
	class InetAddress;
}
namespace java::security
{
	class Permission;
}

namespace java::lang
{
	class SecurityManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecurityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecurityManager(QAndroidJniObject obj);
		
		// Constructors
		SecurityManager();
		
		// Methods
		void checkAccept(jstring arg0, jint arg1);
		void checkAccess(java::lang::Thread arg0);
		void checkAccess(java::lang::ThreadGroup arg0);
		void checkConnect(jstring arg0, jint arg1);
		void checkConnect(jstring arg0, jint arg1, jobject arg2);
		void checkCreateClassLoader();
		void checkDelete(jstring arg0);
		void checkExec(jstring arg0);
		void checkExit(jint arg0);
		void checkLink(jstring arg0);
		void checkListen(jint arg0);
		void checkMulticast(java::net::InetAddress arg0);
		void checkMulticast(java::net::InetAddress arg0, jbyte arg1);
		void checkPackageAccess(jstring arg0);
		void checkPackageDefinition(jstring arg0);
		void checkPermission(java::security::Permission arg0);
		void checkPermission(java::security::Permission arg0, jobject arg1);
		void checkPrintJobAccess();
		void checkPropertiesAccess();
		void checkPropertyAccess(jstring arg0);
		void checkRead(java::io::FileDescriptor arg0);
		void checkRead(jstring arg0);
		void checkRead(jstring arg0, jobject arg1);
		void checkSecurityAccess(jstring arg0);
		void checkSetFactory();
		void checkWrite(java::io::FileDescriptor arg0);
		void checkWrite(jstring arg0);
		jobject getSecurityContext();
		java::lang::ThreadGroup getThreadGroup();
	};
} // namespace java::lang

