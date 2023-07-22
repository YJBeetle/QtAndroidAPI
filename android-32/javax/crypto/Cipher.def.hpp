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
		
		// QJniObject forward
		template<typename ...Ts> explicit Cipher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Cipher(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static javax::crypto::Cipher getInstance(JString arg0);
		static javax::crypto::Cipher getInstance(JString arg0, JString arg1);
		static javax::crypto::Cipher getInstance(JString arg0, java::security::Provider arg1);
		static jint getMaxAllowedKeyLength(JString arg0);
		static JObject getMaxAllowedParameterSpec(JString arg0);
		JByteArray doFinal() const;
		JByteArray doFinal(JByteArray arg0) const;
		JByteArray doFinal(JByteArray arg0, jint arg1, jint arg2) const;
		jint doFinal(JByteArray arg0, jint arg1) const;
		jint doFinal(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const;
		jint doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const;
		jint doFinal(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const;
		JString getAlgorithm() const;
		jint getBlockSize() const;
		javax::crypto::ExemptionMechanism getExemptionMechanism() const;
		JByteArray getIV() const;
		jint getOutputSize(jint arg0) const;
		java::security::AlgorithmParameters getParameters() const;
		java::security::Provider getProvider() const;
		void init(jint arg0, JObject arg1) const;
		void init(jint arg0, java::security::cert::Certificate arg1) const;
		void init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2) const;
		void init(jint arg0, JObject arg1, java::security::SecureRandom arg2) const;
		void init(jint arg0, JObject arg1, JObject arg2) const;
		void init(jint arg0, java::security::cert::Certificate arg1, java::security::SecureRandom arg2) const;
		void init(jint arg0, JObject arg1, java::security::AlgorithmParameters arg2, java::security::SecureRandom arg3) const;
		void init(jint arg0, JObject arg1, JObject arg2, java::security::SecureRandom arg3) const;
		JString toString() const;
		JObject unwrap(JByteArray arg0, JString arg1, jint arg2) const;
		JByteArray update(JByteArray arg0) const;
		JByteArray update(JByteArray arg0, jint arg1, jint arg2) const;
		jint update(java::nio::ByteBuffer arg0, java::nio::ByteBuffer arg1) const;
		jint update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3) const;
		jint update(JByteArray arg0, jint arg1, jint arg2, JByteArray arg3, jint arg4) const;
		void updateAAD(JByteArray arg0) const;
		void updateAAD(java::nio::ByteBuffer arg0) const;
		void updateAAD(JByteArray arg0, jint arg1, jint arg2) const;
		JByteArray wrap(JObject arg0) const;
	};
} // namespace javax::crypto

