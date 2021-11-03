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
		
		// QJniObject forward
		template<typename ...Ts> explicit CodeSigner(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CodeSigner(QJniObject obj);
		
		// Constructors
		CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::security::cert::CertPath getSignerCertPath() const;
		java::security::Timestamp getTimestamp() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::security

