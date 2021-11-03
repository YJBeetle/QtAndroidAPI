#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JClass;
class JString;
namespace java::security::cert
{
	class Certificate;
}
namespace java::util
{
	class Date;
}

namespace java::security
{
	class KeyStoreSpi : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStoreSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreSpi(QJniObject obj);
		
		// Constructors
		KeyStoreSpi();
		
		// Methods
		JObject engineAliases();
		jboolean engineContainsAlias(JString arg0);
		void engineDeleteEntry(JString arg0);
		jboolean engineEntryInstanceOf(JString arg0, JClass arg1);
		java::security::cert::Certificate engineGetCertificate(JString arg0);
		JString engineGetCertificateAlias(java::security::cert::Certificate arg0);
		JArray engineGetCertificateChain(JString arg0);
		java::util::Date engineGetCreationDate(JString arg0);
		JObject engineGetEntry(JString arg0, JObject arg1);
		JObject engineGetKey(JString arg0, JCharArray arg1);
		jboolean engineIsCertificateEntry(JString arg0);
		jboolean engineIsKeyEntry(JString arg0);
		void engineLoad(JObject arg0);
		void engineLoad(java::io::InputStream arg0, JCharArray arg1);
		jboolean engineProbe(java::io::InputStream arg0);
		void engineSetCertificateEntry(JString arg0, java::security::cert::Certificate arg1);
		void engineSetEntry(JString arg0, JObject arg1, JObject arg2);
		void engineSetKeyEntry(JString arg0, JByteArray arg1, JArray arg2);
		void engineSetKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3);
		jint engineSize();
		void engineStore(JObject arg0);
		void engineStore(java::io::OutputStream arg0, JCharArray arg1);
	};
} // namespace java::security

