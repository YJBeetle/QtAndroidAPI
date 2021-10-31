#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
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
	class CodeSigner : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CodeSigner(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CodeSigner(QJniObject obj);
		
		// Constructors
		CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		java::security::cert::CertPath getSignerCertPath();
		java::security::Timestamp getTimestamp();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

