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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecurityManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecurityManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		SecurityManager();
		
		// Methods
		void checkAccept(JString arg0, jint arg1) const;
		void checkAccess(java::lang::Thread arg0) const;
		void checkAccess(java::lang::ThreadGroup arg0) const;
		void checkConnect(JString arg0, jint arg1) const;
		void checkConnect(JString arg0, jint arg1, JObject arg2) const;
		void checkCreateClassLoader() const;
		void checkDelete(JString arg0) const;
		void checkExec(JString arg0) const;
		void checkExit(jint arg0) const;
		void checkLink(JString arg0) const;
		void checkListen(jint arg0) const;
		void checkMulticast(java::net::InetAddress arg0) const;
		void checkMulticast(java::net::InetAddress arg0, jbyte arg1) const;
		void checkPackageAccess(JString arg0) const;
		void checkPackageDefinition(JString arg0) const;
		void checkPermission(java::security::Permission arg0) const;
		void checkPermission(java::security::Permission arg0, JObject arg1) const;
		void checkPrintJobAccess() const;
		void checkPropertiesAccess() const;
		void checkPropertyAccess(JString arg0) const;
		void checkRead(java::io::FileDescriptor arg0) const;
		void checkRead(JString arg0) const;
		void checkRead(JString arg0, JObject arg1) const;
		void checkSecurityAccess(JString arg0) const;
		void checkSetFactory() const;
		void checkWrite(java::io::FileDescriptor arg0) const;
		void checkWrite(JString arg0) const;
		JObject getSecurityContext() const;
		java::lang::ThreadGroup getThreadGroup() const;
	};
} // namespace java::lang

