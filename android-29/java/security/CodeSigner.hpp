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
		
		CodeSigner(QAndroidJniObject obj);
		// Constructors
		CodeSigner(java::security::cert::CertPath arg0, java::security::Timestamp arg1);
		CodeSigner() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getSignerCertPath();
		QAndroidJniObject getTimestamp();
		jint hashCode();
		jstring toString();
	};
} // namespace java::security

