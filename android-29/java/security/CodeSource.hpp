#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::net
{
	class SocketPermission;
}
namespace java::net
{
	class URL;
}
namespace java::security::cert
{
	class CertificateFactory;
}

namespace java::security
{
	class CodeSource : public __JniBaseClass
	{
	public:
		// Fields
		
		CodeSource(QAndroidJniObject obj);
		// Constructors
		CodeSource(java::net::URL arg0, jarray arg1);
		CodeSource() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getCertificates();
		jarray getCodeSigners();
		QAndroidJniObject getLocation();
		jint hashCode();
		jboolean implies(java::security::CodeSource arg0);
		jstring toString();
	};
} // namespace java::security

