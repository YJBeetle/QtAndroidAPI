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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStoreSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStoreSpi(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyStoreSpi();
		
		// Methods
		JObject engineAliases() const;
		jboolean engineContainsAlias(JString arg0) const;
		void engineDeleteEntry(JString arg0) const;
		jboolean engineEntryInstanceOf(JString arg0, JClass arg1) const;
		JObject engineGetAttributes(JString arg0) const;
		java::security::cert::Certificate engineGetCertificate(JString arg0) const;
		JString engineGetCertificateAlias(java::security::cert::Certificate arg0) const;
		JArray engineGetCertificateChain(JString arg0) const;
		java::util::Date engineGetCreationDate(JString arg0) const;
		JObject engineGetEntry(JString arg0, JObject arg1) const;
		JObject engineGetKey(JString arg0, JCharArray arg1) const;
		jboolean engineIsCertificateEntry(JString arg0) const;
		jboolean engineIsKeyEntry(JString arg0) const;
		void engineLoad(JObject arg0) const;
		void engineLoad(java::io::InputStream arg0, JCharArray arg1) const;
		jboolean engineProbe(java::io::InputStream arg0) const;
		void engineSetCertificateEntry(JString arg0, java::security::cert::Certificate arg1) const;
		void engineSetEntry(JString arg0, JObject arg1, JObject arg2) const;
		void engineSetKeyEntry(JString arg0, JByteArray arg1, JArray arg2) const;
		void engineSetKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3) const;
		jint engineSize() const;
		void engineStore(JObject arg0) const;
		void engineStore(java::io::OutputStream arg0, JCharArray arg1) const;
	};
} // namespace java::security

