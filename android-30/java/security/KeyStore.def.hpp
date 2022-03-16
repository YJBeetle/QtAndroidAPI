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
		KeyStore(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getDefaultType();
		static java::security::KeyStore getInstance(JString arg0);
		static java::security::KeyStore getInstance(java::io::File arg0, JCharArray arg1);
		static java::security::KeyStore getInstance(java::io::File arg0, JObject arg1);
		static java::security::KeyStore getInstance(JString arg0, JString arg1);
		static java::security::KeyStore getInstance(JString arg0, java::security::Provider arg1);
		JObject aliases() const;
		jboolean containsAlias(JString arg0) const;
		void deleteEntry(JString arg0) const;
		jboolean entryInstanceOf(JString arg0, JClass arg1) const;
		java::security::cert::Certificate getCertificate(JString arg0) const;
		JString getCertificateAlias(java::security::cert::Certificate arg0) const;
		JArray getCertificateChain(JString arg0) const;
		java::util::Date getCreationDate(JString arg0) const;
		JObject getEntry(JString arg0, JObject arg1) const;
		JObject getKey(JString arg0, JCharArray arg1) const;
		java::security::Provider getProvider() const;
		JString getType() const;
		jboolean isCertificateEntry(JString arg0) const;
		jboolean isKeyEntry(JString arg0) const;
		void load(JObject arg0) const;
		void load(java::io::InputStream arg0, JCharArray arg1) const;
		void setCertificateEntry(JString arg0, java::security::cert::Certificate arg1) const;
		void setEntry(JString arg0, JObject arg1, JObject arg2) const;
		void setKeyEntry(JString arg0, JByteArray arg1, JArray arg2) const;
		void setKeyEntry(JString arg0, JObject arg1, JCharArray arg2, JArray arg3) const;
		jint size() const;
		void store(JObject arg0) const;
		void store(java::io::OutputStream arg0, JCharArray arg1) const;
	};
} // namespace java::security

