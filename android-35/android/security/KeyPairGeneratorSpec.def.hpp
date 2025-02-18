#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
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
	class KeyPairGeneratorSpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyPairGeneratorSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyPairGeneratorSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAlgorithmParameterSpec() const;
		android::content::Context getContext() const;
		java::util::Date getEndDate() const;
		jint getKeySize() const;
		JString getKeyType() const;
		JString getKeystoreAlias() const;
		java::math::BigInteger getSerialNumber() const;
		java::util::Date getStartDate() const;
		javax::security::auth::x500::X500Principal getSubjectDN() const;
		jboolean isEncryptionRequired() const;
	};
} // namespace android::security

