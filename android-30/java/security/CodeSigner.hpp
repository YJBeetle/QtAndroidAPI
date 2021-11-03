#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::security
{
	class Timestamp;
}
namespace java::security::cert
{
	class CertPath;
}

namespace java::security
{
	class CodeSigner : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodeSigner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CodeSigner(QAndroidJniObject obj);
		
		// Constructors
		CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		java::security::cert::CertPath getSignerCertPath();
		java::security::Timestamp getTimestamp();
		jint hashCode();
		JString toString();
	};
} // namespace java::security

