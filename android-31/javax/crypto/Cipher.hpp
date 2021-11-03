#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
class JObject;
class JString;
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
	class Cipher : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Cipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Cipher(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::Cipher getInstance(JString arg0);
		static javax::crypto::Cipher getInstance(JString arg0, JString arg1);
		static javax::crypto::Cipher getInstance(JString arg0, java::security::Provider arg1);
		static jint getMaxAllowedKeyLength(JString arg0);
		static JObject getMaxAllowedParameterSpec(JString arg0);
		JByteArray doFinal();
		JByteArray doFinal(JByteArray arg0);
		JByteArray doFinal(JByteArray arg0, jint arg1, jint arg2);
		jint doFinal(JByteArray arg0, jint arg1);
		jint doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		jint doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3);
		jint doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4);
		JString getAlgorithm();
		jint getBlockSize();
		javax::crypto::ExemptionMechanism getExemptionMechanism();
		JByteArray getIV();
		jint getOutputSize(jint arg0);
		java::security::AlgorithmParameters getParameters();
		java::security::Provider getProvider();
		void init(jint arg0, JObject arg1);
		void init(jint arg0, java::security::cert::Certificate arg1);
		void init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2);
		void init(jint arg0, JObject arg1, java::security::SecureRandom arg2);
		void init(jint arg0, JObject arg1, JObject arg2);
		void init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2);
		void init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3);
		void init(jint arg0, JObject arg1, JObject arg2, java::security::SecureRandom arg3);
		JString toString();
		JObject unwrap(JByteArray arg0, JString arg1, jint arg2);
		JByteArray update(JByteArray arg0);
		JByteArray update(JByteArray arg0, jint arg1, jint arg2);
		jint update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1);
		jint update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3);
		jint update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4);
		void updateAAD(JByteArray arg0);
		void updateAAD(java::nio::ByteBuffer arg0);
		void updateAAD(JByteArray arg0, jint arg1, jint arg2);
		JByteArray wrap(JObject arg0);
	};
} // namespace javax::crypto

