#include "../io/ObjectInputStream.hpp"
#include "./cert/CertPath.hpp"
#include "../util/Date.hpp"
#include "./Timestamp.hpp"

namespace java::security
{
	// Fields
	
	Timestamp::Timestamp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Timestamp::Timestamp(java::util::Date arg0, java::security::cert::CertPath arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.Timestamp",
			"(Ljava/util/Date;Ljava/security/cert/CertPath;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jboolean Timestamp::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Timestamp::getSignerCertPath()
	{
		return __thiz.callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	QAndroidJniObject Timestamp::getTimestamp()
	{
		return __thiz.callObjectMethod(
			"getTimestamp",
			"()Ljava/util/Date;"
		);
	}
	jint Timestamp::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Timestamp::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

