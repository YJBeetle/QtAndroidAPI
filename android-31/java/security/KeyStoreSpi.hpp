#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
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
		jboolean engineContainsAlias(jstring arg0);
		void engineDeleteEntry(jstring arg0);
		jboolean engineEntryInstanceOf(jstring arg0, jclass arg1);
		java::security::cert::Certificate engineGetCertificate(jstring arg0);
		jstring engineGetCertificateAlias(java::security::cert::Certificate arg0);
		jarray engineGetCertificateChain(jstring arg0);
		java::util::Date engineGetCreationDate(jstring arg0);
		JObject engineGetEntry(jstring arg0, JObject arg1);
		JObject engineGetKey(jstring arg0, jcharArray arg1);
		jboolean engineIsCertificateEntry(jstring arg0);
		jboolean engineIsKeyEntry(jstring arg0);
		void engineLoad(JObject arg0);
		void engineLoad(java::io::InputStream arg0, jcharArray arg1);
		jboolean engineProbe(java::io::InputStream arg0);
		void engineSetCertificateEntry(jstring arg0, java::security::cert::Certificate arg1);
		void engineSetEntry(jstring arg0, JObject arg1, JObject arg2);
		void engineSetKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void engineSetKeyEntry(jstring arg0, JObject arg1, jcharArray arg2, jarray arg3);
		jint engineSize();
		void engineStore(JObject arg0);
		void engineStore(java::io::OutputStream arg0, jcharArray arg1);
	};
} // namespace java::security

