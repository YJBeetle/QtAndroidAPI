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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getDefaultType();
		static java::security::KeyStore getInstance(jstring arg0);
		static java::security::KeyStore getInstance(java::io::File arg0, jcharArray arg1);
		static java::security::KeyStore getInstance(java::io::File arg0, __JniBaseClass arg1);
		static java::security::KeyStore getInstance(jstring arg0, jstring arg1);
		static java::security::KeyStore getInstance(jstring arg0, java::security::Provider arg1);
		__JniBaseClass aliases();
		jboolean containsAlias(jstring arg0);
		void deleteEntry(jstring arg0);
		jboolean entryInstanceOf(jstring arg0, jclass arg1);
		java::security::cert::Certificate getCertificate(jstring arg0);
		jstring getCertificateAlias(java::security::cert::Certificate arg0);
		jarray getCertificateChain(jstring arg0);
		java::util::Date getCreationDate(jstring arg0);
		__JniBaseClass getEntry(jstring arg0, __JniBaseClass arg1);
		__JniBaseClass getKey(jstring arg0, jcharArray arg1);
		java::security::Provider getProvider();
		jstring getType();
		jboolean isCertificateEntry(jstring arg0);
		jboolean isKeyEntry(jstring arg0);
		void load(__JniBaseClass arg0);
		void load(java::io::InputStream arg0, jcharArray arg1);
		void setCertificateEntry(jstring arg0, java::security::cert::Certificate arg1);
		void setEntry(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void setKeyEntry(jstring arg0, jbyteArray arg1, jarray arg2);
		void setKeyEntry(jstring arg0, __JniBaseClass arg1, jcharArray arg2, jarray arg3);
		jint size();
		void store(__JniBaseClass arg0);
		void store(java::io::OutputStream arg0, jcharArray arg1);
	};
} // namespace java::security
