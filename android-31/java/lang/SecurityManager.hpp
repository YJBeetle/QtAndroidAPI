#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::io
{
	class FileDescriptor;
}
class JObject;
class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SecurityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecurityManager(QJniObject obj);
		
		// Constructors
		SecurityManager();
		
		// Methods
		void checkAccept(JString arg0, jint arg1);
		void checkAccess(java::lang::Thread arg0);
		void checkAccess(java::lang::ThreadGroup arg0);
		void checkConnect(JString arg0, jint arg1);
		void checkConnect(JString arg0, jint arg1, JObject arg2);
		void checkCreateClassLoader();
		void checkDelete(JString arg0);
		void checkExec(JString arg0);
		void checkExit(jint arg0);
		void checkLink(JString arg0);
		void checkListen(jint arg0);
		void checkMulticast(java::net::InetAddress arg0);
		void checkMulticast(java::net::InetAddress arg0, jbyte arg1);
		void checkPackageAccess(JString arg0);
		void checkPackageDefinition(JString arg0);
		void checkPermission(java::security::Permission arg0);
		void checkPermission(java::security::Permission arg0, JObject arg1);
		void checkPrintJobAccess();
		void checkPropertiesAccess();
		void checkPropertyAccess(JString arg0);
		void checkRead(java::io::FileDescriptor arg0);
		void checkRead(JString arg0);
		void checkRead(JString arg0, JObject arg1);
		void checkSecurityAccess(JString arg0);
		void checkSetFactory();
		void checkWrite(java::io::FileDescriptor arg0);
		void checkWrite(JString arg0);
		JObject getSecurityContext();
		java::lang::ThreadGroup getThreadGroup();
	};
} // namespace java::lang

