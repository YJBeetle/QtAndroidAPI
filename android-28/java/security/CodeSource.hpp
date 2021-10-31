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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodeSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CodeSource(QAndroidJniObject obj);
		
		// Constructors
		CodeSource(java::net::URL arg0, jarray arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getCertificates();
		jarray getCodeSigners();
		java::net::URL getLocation();
		jint hashCode();
		jboolean implies(java::security::CodeSource arg0);
		jstring toString();
	};
} // namespace java::security

