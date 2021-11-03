#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;
namespace java::security
{
	class SecureRandom;
}

namespace javax::crypto
{
	class KeyAgreementSpi : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyAgreementSpi(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyAgreementSpi(QAndroidJniObject obj);
		
		// Constructors
		KeyAgreementSpi();
		
		// Methods
	};
} // namespace javax::crypto

