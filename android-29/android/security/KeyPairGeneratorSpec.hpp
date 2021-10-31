#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace java::math
{
	class BigInteger;
}
namespace java::util
{
	class Date;
}
namespace javax::security::auth::x500
{
	class X500Principal;
}

namespace android::security
{
	class KeyPairGeneratorSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		QAndroidJniObject getAlgorithmParameterSpec();
		QAndroidJniObject getContext();
		QAndroidJniObject getEndDate();
		jint getKeySize();
		jstring getKeyType();
		jstring getKeystoreAlias();
		QAndroidJniObject getSerialNumber();
		QAndroidJniObject getStartDate();
		QAndroidJniObject getSubjectDN();
		jboolean isEncryptionRequired();
	};
} // namespace android::security

