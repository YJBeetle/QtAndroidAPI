#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class KeyPairGeneratorSpec;
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
	class KeyPairGeneratorSpec_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		KeyPairGeneratorSpec_Builder(QAndroidJniObject obj);
		// Constructors
		KeyPairGeneratorSpec_Builder(android::content::Context &arg0);
		KeyPairGeneratorSpec_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAlgorithmParameterSpec(__JniBaseClass arg0);
		QAndroidJniObject setAlias(jstring arg0);
		QAndroidJniObject setAlias(const QString &arg0);
		QAndroidJniObject setEncryptionRequired();
		QAndroidJniObject setEndDate(java::util::Date arg0);
		QAndroidJniObject setKeySize(jint arg0);
		QAndroidJniObject setKeyType(jstring arg0);
		QAndroidJniObject setKeyType(const QString &arg0);
		QAndroidJniObject setSerialNumber(java::math::BigInteger arg0);
		QAndroidJniObject setStartDate(java::util::Date arg0);
		QAndroidJniObject setSubject(javax::security::auth::x500::X500Principal arg0);
	};
} // namespace android::security

