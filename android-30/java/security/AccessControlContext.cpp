#include "./Permission.hpp"
#include "./ProtectionDomain.hpp"
#include "./AccessControlContext.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	AccessControlContext::AccessControlContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccessControlContext::AccessControlContext(jarray arg0)
		: JObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0
		) {}
	AccessControlContext::AccessControlContext(java::security::AccessControlContext &arg0, JObject arg1)
		: JObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void AccessControlContext::checkPermission(java::security::Permission arg0)
	{
		callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.object()
		);
	}
	jboolean AccessControlContext::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject AccessControlContext::getDomainCombiner()
	{
		return callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
	jint AccessControlContext::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security

