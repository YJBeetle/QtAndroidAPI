#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
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
	class CodeSource : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodeSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CodeSource(QAndroidJniObject obj);
		
		// Constructors
		CodeSource(java::net::URL arg0, JArray arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JArray getCertificates();
		JArray getCodeSigners();
		java::net::URL getLocation();
		jint hashCode();
		jboolean implies(java::security::CodeSource arg0);
		JString toString();
	};
} // namespace java::security

