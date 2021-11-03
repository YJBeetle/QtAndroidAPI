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
		
		// QJniObject forward
		template<typename ...Ts> explicit ExemptionMechanism(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanism(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::ExemptionMechanism getInstance(JString arg0);
		static javax::crypto::ExemptionMechanism getInstance(JString arg0, JString arg1);
		static javax::crypto::ExemptionMechanism getInstance(JString arg0, java::security::Provider arg1);
		JByteArray genExemptionBlob();
		jint genExemptionBlob(JByteArray arg0);
		jint genExemptionBlob(JByteArray arg0, jint arg1);
		JString getName();
		jint getOutputSize(jint arg0);
		java::security::Provider getProvider();
		void init(JObject arg0);
		void init(JObject arg0, java::security::AlgorithmParameters arg1);
		void init(JObject arg0, JObject arg1);
		jboolean isCryptoAllowed(JObject arg0);
	};
} // namespace javax::crypto

