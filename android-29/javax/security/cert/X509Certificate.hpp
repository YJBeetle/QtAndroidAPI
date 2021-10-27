#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		X509Certificate(QAndroidJniObject obj);
		// Constructors
		X509Certificate();
		
		// Methods
		static QAndroidJniObject getInstance(jbyteArray arg0);
		static QAndroidJniObject getInstance(java::io::InputStream arg0);
		void checkValidity();
		void checkValidity(java::util::Date arg0);
		QAndroidJniObject getIssuerDN();
		QAndroidJniObject getNotAfter();
		QAndroidJniObject getNotBefore();
		QAndroidJniObject getSerialNumber();
		jstring getSigAlgName();
		jstring getSigAlgOID();
		jbyteArray getSigAlgParams();
		QAndroidJniObject getSubjectDN();
		jint getVersion();
	};
} // namespace javax::security::cert

