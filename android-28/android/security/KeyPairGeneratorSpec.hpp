#pragma once

#include "../../JObject.hpp"

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
	class KeyPairGeneratorSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpec(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getAlgorithmParameterSpec();
		android::content::Context getContext();
		java::util::Date getEndDate();
		jint getKeySize();
		jstring getKeyType();
		jstring getKeystoreAlias();
		java::math::BigInteger getSerialNumber();
		java::util::Date getStartDate();
		javax::security::auth::x500::X500Principal getSubjectDN();
		jboolean isEncryptionRequired();
	};
} // namespace android::security

