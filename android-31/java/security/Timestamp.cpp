#include "../io/ObjectInputStream.hpp"
#include "./cert/CertPath.hpp"
#include "../util/Date.hpp"
#include "./Timestamp.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	Timestamp::Timestamp(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Timestamp::Timestamp(java::util::Date arg0, java::security::cert::CertPath arg1)
		: JObject(
			"java.security.Timestamp",
			"(Ljava/util/Date;Ljava/security/cert/CertPath;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	jboolean Timestamp::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::security::cert::CertPath Timestamp::getSignerCertPath()
	{
		return callObjectMethod(
			"getSignerCertPath",
			"()Ljava/security/cert/CertPath;"
		);
	}
	java::util::Date Timestamp::getTimestamp()
	{
		return callObjectMethod(
			"getTimestamp",
			"()Ljava/util/Date;"
		);
	}
	jint Timestamp::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Timestamp::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

