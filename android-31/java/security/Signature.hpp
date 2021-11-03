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
		
		// QJniObject forward
		template<typename ...Ts> explicit Signature(const char *className, const char *sig, Ts...agv) : java::security::SignatureSpi(className, sig, std::forward<Ts>(agv)...) {}
		Signature(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::Signature getInstance(JString arg0);
		static java::security::Signature getInstance(JString arg0, JString arg1);
		static java::security::Signature getInstance(JString arg0, java::security::Provider arg1);
		JObject clone();
		JString getAlgorithm();
		JObject getParameter(JString arg0);
		java::security::AlgorithmParameters getParameters();
		java::security::Provider getProvider();
		void initSign(JObject arg0);
		void initSign(JObject arg0, java::security::SecureRandom arg1);
		void initVerify(JObject arg0);
		void initVerify(java::security::cert::Certificate arg0);
		void setParameter(JObject arg0);
		void setParameter(JString arg0, JObject arg1);
		JByteArray sign();
		jint sign(JByteArray arg0, jint arg1, jint arg2);
		JString toString();
		void update(JByteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(JByteArray arg0, jint arg1, jint arg2);
		jboolean verify(JByteArray arg0);
		jboolean verify(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::security

