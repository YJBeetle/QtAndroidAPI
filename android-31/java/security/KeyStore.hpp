#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JArray;
namespace java::io
{
	class File;
}
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
namespace java::security
{
	class KeyStoreSpi;
}
namespace java::security
{
	class Provider;
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
	class KeyStore : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JString getDefaultType();
		static java::security::KeyStore getInstance(JString arg0);
		static java::security::KeyStore getInstance(java::io::File arg0, JCharArray arg1);
		static java::security::KeyStore getInstance(java::io::File arg0, JObject arg1);
		static java::security::KeyStore getInstance(JString arg0, JString arg1);
		static java::security::KeyStore getInstance(JString arg0, java::security::Provider arg1);
		JObject aliases();
		jboolean containsAlias(JString arg0);
		void deleteEntry(JString arg0);
		jboolean entryInstanceOf(JString arg0, JClass arg1);
		java::security::cert::Certificate getCertificate(JString arg0);
		JString getCertificateAlias(java::security::cert::Certificate arg0);
		JArray getCertificateChain(JString arg0);
		java::util::Date getCreationDate(JString arg0);
		JObject getEntry(JString arg0, JObject arg1);
		JObject getKey(JString arg0, JCharArray arg1);
		java::security::Provider getProvider();
		JString getType();
		jboolean isCertificateEntry(JString arg0);
		jboolean isKeyEntry(JString arg0);
		void load(JObject arg0);
		void load(java::io::InputStream arg0, JCharArray arg1);
		void setCertificateEntry(JString arg0, java::security::cert::Certificate arg1);
		void setEntry(JString arg0, JObject arg1, JObject arg2);
		void setKeyEntry(JString arg0, JByteArray arg1, JArray arg2);
		void setKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3);
		jint size();
		void store(JObject arg0);
		void store(java::io::OutputStream arg0, JCharArray arg1);
	};
} // namespace java::security

