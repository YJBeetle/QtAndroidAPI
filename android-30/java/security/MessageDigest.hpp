#pragma once

#include "./MessageDigestSpi.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class MessageDigest : public java::security::MessageDigestSpi
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageDigest(const char *className, const char *sig, Ts...agv) : java::security::MessageDigestSpi(className, sig, std::forward<Ts>(agv)...) {}
		MessageDigest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::security::MessageDigest getInstance(JString arg0);
		static java::security::MessageDigest getInstance(JString arg0, JString arg1);
		static java::security::MessageDigest getInstance(JString arg0, java::security::Provider arg1);
		static jboolean isEqual(JByteArray arg0, JByteArray arg1);
		JObject clone();
		JByteArray digest();
		JByteArray digest(JByteArray arg0);
		jint digest(JByteArray arg0, jint arg1, jint arg2);
		JString getAlgorithm();
		jint getDigestLength();
		java::security::Provider getProvider();
		void reset();
		JString toString();
		void update(JByteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(JByteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::security

