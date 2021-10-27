#include "./Permission.hpp"
#include "./ProtectionDomain.hpp"
#include "./AccessControlContext.hpp"

namespace java::security
{
	// Fields
	
	AccessControlContext::AccessControlContext(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AccessControlContext::AccessControlContext(jarray &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"([Ljava/security/ProtectionDomain;)V",
			arg0
		);
	}
	AccessControlContext::AccessControlContext(java::security::AccessControlContext &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.AccessControlContext",
			"(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void AccessControlContext::checkPermission(java::security::Permission arg0)
	{
		__thiz.callMethod<void>(
			"checkPermission",
			"(Ljava/security/Permission;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean AccessControlContext::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AccessControlContext::getDomainCombiner()
	{
		return __thiz.callObjectMethod(
			"getDomainCombiner",
			"()Ljava/security/DomainCombiner;"
		);
	}
	jint AccessControlContext::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace java::security

