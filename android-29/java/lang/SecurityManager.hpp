#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../io/FileDescriptor.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Thread.def.hpp"
#include "./ThreadGroup.def.hpp"
#include "../net/InetAddress.def.hpp"
#include "../security/Permission.def.hpp"
#include "./SecurityManager.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline SecurityManager::SecurityManager()
		: JObject(
			"java.lang.SecurityManager",
			"()V"
		) {}
	
	// Methods
	inline void SecurityManager::checkAccept(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"checkAccept",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SecurityManager::checkAccess(java::lang::Thread arg0) const
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/Thread;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkAccess(java::lang::ThreadGroup arg0) const
	{
		callMethod<void>(
			"checkAccess",
			"(Ljava/lang/ThreadGroup;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkConnect(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void SecurityManager::checkConnect(JString arg0, jint arg1, JObject arg2) const
	{
		callMethod<void>(
			"checkConnect",
			"(Ljava/lang/String;ILjava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jobject>()
		);
	}
	inline void SecurityManager::checkCreateClassLoader() const
	{
		callMethod<void>(
			"checkCreateClassLoader",
			"()V"
		);
	}
	inline void SecurityManager::checkDelete(JString arg0) const
	{
		callMethod<void>(
			"checkDelete",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkExec(JString arg0) const
	{
		callMethod<void>(
			"checkExec",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkExit(jint arg0) const
	{
		callMethod<void>(
			"checkExit",
			"(I)V",
			arg0
		);
	}
	inline void SecurityManager::checkLink(JString arg0) const
	{
		callMethod<void>(
			"checkLink",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkListen(jint arg0) const
	{
		callMethod<void>(
			"checkListen",
			"(I)V",
			arg0
		);
	}
	inline void SecurityManager::checkMulticast(java::net::InetAddress arg0) const
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkMulticast(java::net::InetAddress arg0, jbyte arg1) const
	{
		callMethod<void>(
			"checkMulticast",
			"(Ljava/net/InetAddress;B)V",
			arg0.object(),
			arg1
		);
	}
	inline void SecurityManager::checkPackageAccess(JString arg0) const
	{
		callMethod<void>(
			"checkPackageAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkPackageDefinition(JString arg0) const
	{
		callMethod<void>(
			"checkPackageDefinition",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkPermission(java::security::Permission arg0) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkPermission(java::security::Permission arg0, JObject arg1) const
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void SecurityManager::checkPrintJobAccess() const
	{
		callMethod<void>(
			"checkPrintJobAccess",
			"()V"
		);
	}
	inline void SecurityManager::checkPropertiesAccess() const
	{
		callMethod<void>(
			"checkPropertiesAccess",
			"()V"
		);
	}
	inline void SecurityManager::checkPropertyAccess(JString arg0) const
	{
		callMethod<void>(
			"checkPropertyAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkRead(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkRead(JString arg0) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkRead(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"checkRead",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline void SecurityManager::checkSecurityAccess(JString arg0) const
	{
		callMethod<void>(
			"checkSecurityAccess",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void SecurityManager::checkSetFactory() const
	{
		callMethod<void>(
			"checkSetFactory",
			"()V"
		);
	}
	inline void SecurityManager::checkWrite(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void SecurityManager::checkWrite(JString arg0) const
	{
		callMethod<void>(
			"checkWrite",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject SecurityManager::getSecurityContext() const
	{
		return callObjectMethod(
			"getSecurityContext",
			"()Ljava/lang/Object;"
		);
	}
	inline java::lang::ThreadGroup SecurityManager::getThreadGroup() const
	{
		return callObjectMethod(
			"getThreadGroup",
			"()Ljava/lang/ThreadGroup;"
		);
	}
} // namespace java::lang

// Base class headers

