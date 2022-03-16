#pragma once

#include "./Certificate.hpp"

class JByteArray;
namespace java::io
{
	class InputStream;
}
class JObject;
class JString;
namespace java::math
{
	class BigInteger;
}
namespace java::util
{
	class Date;
}

namespace javax::security::cert
{
	class X509Certificate : public javax::security::cert::Certificate
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit X509Certificate(const char *className, const char *sig, Ts...agv) : javax::security::cert::Certificate(className, sig, std::forward<Ts>(agv)...) {}
		X509Certificate(QAndroidJniObject obj) : javax::security::cert::Certificate(obj) {}
		
		// Constructors
		X509Certificate();
		
		// Methods
		static javax::security::cert::X509Certificate getInstance(JByteArray arg0);
		static javax::security::cert::X509Certificate getInstance(java::io::InputStream arg0);
		void checkValidity() const;
		void checkValidity(java::util::Date arg0) const;
		JObject getIssuerDN() const;
		java::util::Date getNotAfter() const;
		java::util::Date getNotBefore() const;
		java::math::BigInteger getSerialNumber() const;
		JString getSigAlgName() const;
		JString getSigAlgOID() const;
		JByteArray getSigAlgParams() const;
		JObject getSubjectDN() const;
		jint getVersion() const;
	};
} // namespace javax::security::cert

