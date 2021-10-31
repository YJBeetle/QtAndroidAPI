#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ExemptionMechanism : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExemptionMechanism(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExemptionMechanism(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::ExemptionMechanism getInstance(jstring arg0);
		static javax::crypto::ExemptionMechanism getInstance(jstring arg0, jstring arg1);
		static javax::crypto::ExemptionMechanism getInstance(jstring arg0, java::security::Provider arg1);
		jbyteArray genExemptionBlob();
		jint genExemptionBlob(jbyteArray arg0);
		jint genExemptionBlob(jbyteArray arg0, jint arg1);
		jstring getName();
		jint getOutputSize(jint arg0);
		java::security::Provider getProvider();
		void init(__JniBaseClass arg0);
		void init(__JniBaseClass arg0, java::security::AlgorithmParameters arg1);
		void init(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isCryptoAllowed(__JniBaseClass arg0);
	};
} // namespace javax::crypto

