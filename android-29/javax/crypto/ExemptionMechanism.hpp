#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class Provider;
}
namespace javax::crypto
{
	class ExemptionMechanismSpi;
}

namespace javax::crypto
{
	class ExemptionMechanism : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExemptionMechanism(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanism(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::ExemptionMechanism getInstance(JString arg0);
		static javax::crypto::ExemptionMechanism getInstance(JString arg0, JString arg1);
		static javax::crypto::ExemptionMechanism getInstance(JString arg0, java::security::Provider arg1);
		JByteArray genExemptionBlob() const;
		jint genExemptionBlob(JByteArray arg0) const;
		jint genExemptionBlob(JByteArray arg0, jint arg1) const;
		JString getName() const;
		jint getOutputSize(jint arg0) const;
		java::security::Provider getProvider() const;
		void init(JObject arg0) const;
		void init(JObject arg0, java::security::AlgorithmParameters arg1) const;
		void init(JObject arg0, JObject arg1) const;
		jboolean isCryptoAllowed(JObject arg0) const;
	};
} // namespace javax::crypto

