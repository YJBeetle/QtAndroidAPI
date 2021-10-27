#pragma once

#include "../../__JniBaseClass.hpp"

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
	class KeyStore : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyStore(QAndroidJniObject obj);
		// Constructors
		KeyStore() = default;
		
		// Methods
		static jstring getDefaultType();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(java::io::File arg0, jcharArray arg1);
		static QAndroidJniObject getInstance(java::io::File arg0, __JniBaseClass arg1);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		QAndroidJniObject aliases();
		jboolean containsAlias(jstring arg0);
		jboolean containsAlias(const QString &arg0);
		void deleteEntry(jstring arg0);
		void deleteEntry(const QString &arg0);
		jboolean entryInstanceOf(jstring arg0, jclass arg1);
		jboolean entryInstanceOf(const QString &arg0, jclass arg1);
		QAndroidJniObject getCertificate(jstring arg0);
		QAndroidJniObject getCertificate(const QString &arg0);
		jstring getCertificateAlias(java::security::cert::Certificate arg0);
		jarray getCertificateChain(jstring arg0);
		jarray getCertificateChain(const QString &arg0);
		QAndroidJniObject getCreationDate(jstring arg0);
		QAndroidJniObject getCreationDate(const QString &arg0);
		QAndroidJniObject getEntry(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject getEntry(const QString &arg0, __JniBaseClass arg1);
		QAndroidJniObject getKey(jstring arg0, jcharArray arg1);
		QAndroidJniObject getKey(const QString &arg0, jcharArray arg1);
		QAndroidJniObject getProvider();
		jstring getType();
		jboolean isCertificateEntry(jstring arg0);
		jboolean isCertificateEntry(const QString &arg0);
		jboolean isKeyEntry(jstring arg0);
		jboolean isKeyEntry(const QString &arg0);
		void load(__JniBaseClass arg0);
		void load(java::io::InputStream arg0, jcharArray arg1);
		void setCertificateEntry(jstring arg0, java::security::cert::Certificate arg1);
		void setCertificateEntry(const QString &arg0, java::security::cert::Certificate arg1);
		void setEntry(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void setEntry(const QString &arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void setKeyEntry(const QString &arg0, jbyteArray arg1, jarray arg2);
		void setKeyEntry(jstring arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3);
		void setKeyEntry(const QString &arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3);
		jint size();
		void store(__JniBaseClass arg0);
		void store(java::io::OutputStream arg0, jcharArray arg1);
	};
} // namespace java::security

