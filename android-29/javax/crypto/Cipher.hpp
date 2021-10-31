#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class AlgorithmParameters;
}
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class Provider_Service;
}
namespace java::security
{
	class SecureRandom;
}
namespace java::security::cert
{
	class Certificate;
}
namespace javax::crypto
{
	class CipherSpi;
}
namespace javax::crypto
{
	class ExemptionMechanism;
}

namespace javax::crypto
{
	class Cipher : public __JniBaseClass
	{
	public:
		// Fields
		static jint DECRYPT_MODE();
		static jint ENCRYPT_MODE();
		static jint PRIVATE_KEY();
		static jint PUBLIC_KEY();
		static jint SECRET_KEY();
		static jint UNWRAP_MODE();
		static jint WRAP_MODE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Cipher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Cipher(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::Cipher getInstance(jstring arg0);
		static javax::crypto::Cipher getInstance(jstring arg0, jstring arg1);
		static javax::crypto::Cipher getInstance(jstring arg0, java::security::Provider arg1);
		static jint getMaxAllowedKeyLength(jstring arg0);
		static __JniBaseClass getMaxAllowedParameterSpec(jstring arg0);
		jbyteArray doFinal();
		jbyteArray doFinal(jbyteArray arg0);
		jbyteArray doFinal(jbyteArray arg0, jint arg1, jint arg2);
		jint doFinal(jbyteArray arg0, jint arg1);
		jint doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		jint doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3);
		jint doFinal(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		jstring getAlgorithm();
		jint getBlockSize();
		javax::crypto::ExemptionMechanism getExemptionMechanism();
		jbyteArray getIV();
		jint getOutputSize(jint arg0);
		java::security::AlgorithmParameters getParameters();
		java::security::Provider getProvider();
		void init(jint arg0, __JniBaseClass arg1);
		void init(jint arg0, java::security::cert::Certificate arg1);
		void init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2);
		void init(jint arg0, __JniBaseClass arg1, java::security::SecureRandom arg2);
		void init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		void init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2);
		void init(jint arg0, __JniBaseClass arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3);
		void init(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, java::security::SecureRandom arg3);
		jstring toString();
		__JniBaseClass unwrap(jbyteArray arg0, jstring arg1, jint arg2);
		jbyteArray update(jbyteArray arg0);
		jbyteArray update(jbyteArray arg0, jint arg1, jint arg2);
		jint update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		jint update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3);
		jint update(jbyteArray arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		void updateAAD(jbyteArray arg0);
		void updateAAD(java::nio::ByteBuffer arg0);
		void updateAAD(jbyteArray arg0, jint arg1, jint arg2);
		jbyteArray wrap(__JniBaseClass arg0);
	};
} // namespace javax::crypto

