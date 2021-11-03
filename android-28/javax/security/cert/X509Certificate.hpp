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
		X509Certificate(QAndroidJniObject obj);
		
		// Constructors
		X509Certificate();
		
		// Methods
		static javax::security::cert::X509Certificate getInstance(JByteArray arg0);
		static javax::security::cert::X509Certificate getInstance(java::io::InputStream arg0);
		void checkValidity();
		void checkValidity(java::util::Date arg0);
		JObject getIssuerDN();
		java::util::Date getNotAfter();
		java::util::Date getNotBefore();
		java::math::BigInteger getSerialNumber();
		JString getSigAlgName();
		JString getSigAlgOID();
		JByteArray getSigAlgParams();
		JObject getSubjectDN();
		jint getVersion();
	};
} // namespace javax::security::cert

