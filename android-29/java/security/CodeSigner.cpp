#include "../io/ObjectInputStream.hpp"
#include "./Timestamp.hpp"
#include "./cert/CertPath.hpp"
#include "./CodeSigner.hpp"

namespace java::security
{
	// Fields
	
	CodeSigner::CodeSigner(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CodeSigner::CodeSigner(java::security::cert::CertPath &arg0, java::security::Timestamp &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.CodeSigner",
			"(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean CodeSigner::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject CodeSigner::getSignerCertPath()
	{
		return __thiz.callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	QAndroidJniObject CodeSigner::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Ljava/security/Timestamp;"
		);
	}
	jint CodeSigner::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring CodeSigner::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

