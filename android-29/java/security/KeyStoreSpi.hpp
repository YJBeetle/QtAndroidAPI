#pragma once

#include "../../__JniBaseClass.hpp"

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
	class KeyStoreSpi : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStoreSpi(QAndroidJniObject obj);
		// Constructors
		KeyStoreSpi();
		
		// Methods
		QAndroidJniObject engineAliases();
		jboolean engineContainsAlias(jstring arg0);
		jboolean engineContainsAlias(const QString &arg0);
		void engineDeleteEntry(jstring arg0);
		void engineDeleteEntry(const QString &arg0);
		jboolean engineEntryInstanceOf(jstring arg0, jclass arg1);
		jboolean engineEntryInstanceOf(const QString &arg0, jclass arg1);
		QAndroidJniObject engineGetCertificate(jstring arg0);
		QAndroidJniObject engineGetCertificate(const QString &arg0);
		jstring engineGetCertificateAlias(java::security::cert::Certificate arg0);
		jarray engineGetCertificateChain(jstring arg0);
		jarray engineGetCertificateChain(const QString &arg0);
		QAndroidJniObject engineGetCreationDate(jstring arg0);
		QAndroidJniObject engineGetCreationDate(const QString &arg0);
		QAndroidJniObject engineGetEntry(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject engineGetEntry(const QString &arg0, __JniBaseClass arg1);
		QAndroidJniObject engineGetKey(jstring arg0, jcharArray arg1);
		QAndroidJniObject engineGetKey(const QString &arg0, jcharArray arg1);
		jboolean engineIsCertificateEntry(jstring arg0);
		jboolean engineIsCertificateEntry(const QString &arg0);
		jboolean engineIsKeyEntry(jstring arg0);
		jboolean engineIsKeyEntry(const QString &arg0);
		void engineLoad(__JniBaseClass arg0);
		void engineLoad(java::io::InputStream arg0, jcharArray arg1);
		jboolean engineProbe(java::io::InputStream arg0);
		void engineSetCertificateEntry(jstring arg0, java::security::cert::Certificate arg1);
		void engineSetCertificateEntry(const QString &arg0, java::security::cert::Certificate arg1);
		void engineSetEntry(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void engineSetEntry(const QString &arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void engineSetKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void engineSetKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2);
		void engineSetKeyEntry(jstring arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void engineSetKeyEntry(const QString &arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3);
		jint engineSize();
		void engineStore(__JniBaseClass arg0);
		void engineStore(java::io::OutputStream arg0, jcharArray arg1);
	};
} // namespace java::security

