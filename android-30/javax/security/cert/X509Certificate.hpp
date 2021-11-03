#pragma once

#include "../../../JObject.hpp"
#include "./Certificate.hpp"

namespace java::io
{
	class InputStream;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit X509Certificate(const char *className, const char *sig, Ts...agv) : javax::security::cert::Certificate(className, sig, std::forward<Ts>(agv)...) {}
		X509Certificate(QJniObject obj);
		
		// Constructors
		X509Certificate();
		
		// Methods
		static javax::security::cert::X509Certificate getInstance(jbyteArray arg0);
		static javax::security::cert::X509Certificate getInstance(java::io::InputStream arg0);
		void checkValidity();
		void checkValidity(java::util::Date arg0);
		JObject getIssuerDN();
		java::util::Date getNotAfter();
		java::util::Date getNotBefore();
		java::math::BigInteger getSerialNumber();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		JObject getSubjectDN();
		jint getVersion();
	};
} // namespace javax::security::cert

