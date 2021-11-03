#pragma once

#include "./SignatureSpi.hpp"

class JByteArray;
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

namespace java::security
{
	class Signature : public java::security::SignatureSpi
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Signature(const char *className, const char *sig, Ts...agv) : java::security::SignatureSpi(className, sig, std::forward<Ts>(agv)...) {}
		Signature(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::Signature getInstance(JString arg0);
		static java::security::Signature getInstance(JString arg0, JString arg1);
		static java::security::Signature getInstance(JString arg0, java::security::Provider arg1);
		JObject clone() const;
		JString getAlgorithm() const;
		JObject getParameter(JString arg0) const;
		java::security::AlgorithmParameters getParameters() const;
		java::security::Provider getProvider() const;
		void initSign(JObject arg0) const;
		void initSign(JObject arg0, java::security::SecureRandom arg1) const;
		void initVerify(JObject arg0) const;
		void initVerify(java::security::cert::Certificate arg0) const;
		void setParameter(JObject arg0) const;
		void setParameter(JString arg0, JObject arg1) const;
		JByteArray sign() const;
		jint sign(JByteArray arg0, jint arg1, jint arg2) const;
		JString toString() const;
		void update(JByteArray arg0) const;
		void update(jbyte arg0) const;
		void update(java::nio::ByteBuffer arg0) const;
		void update(JByteArray arg0, jint arg1, jint arg2) const;
		jboolean verify(JByteArray arg0) const;
		jboolean verify(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::security

