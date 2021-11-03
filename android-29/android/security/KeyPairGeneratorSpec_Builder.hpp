#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::security
{
	class KeyPairGeneratorSpec;
}
class JString;
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
	class KeyPairGeneratorSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpec_Builder(QAndroidJniObject obj);
		
		// Constructors
		KeyPairGeneratorSpec_Builder(android::content::Context arg0);
		
		// Methods
		android::security::KeyPairGeneratorSpec build() const;
		android::security::KeyPairGeneratorSpec_Builder setAlgorithmParameterSpec(JObject arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setAlias(JString arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setEncryptionRequired() const;
		android::security::KeyPairGeneratorSpec_Builder setEndDate(java::util::Date arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setKeySize(jint arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setKeyType(JString arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setSerialNumber(java::math::BigInteger arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setStartDate(java::util::Date arg0) const;
		android::security::KeyPairGeneratorSpec_Builder setSubject(javax::security::auth::x500::X500Principal arg0) const;
	};
} // namespace android::security

