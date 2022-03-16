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
		MessageDigest(QAndroidJniObject obj) : java::security::MessageDigestSpi(obj) {}
		
		// Constructors
		
		// Methods
		static java::security::MessageDigest getInstance(JString arg0);
		static java::security::MessageDigest getInstance(JString arg0, JString arg1);
		static java::security::MessageDigest getInstance(JString arg0, java::security::Provider arg1);
		static jboolean isEqual(JByteArray arg0, JByteArray arg1);
		JObject clone() const;
		JByteArray digest() const;
		JByteArray digest(JByteArray arg0) const;
		jint digest(JByteArray arg0, jint arg1, jint arg2) const;
		JString getAlgorithm() const;
		jint getDigestLength() const;
		java::security::Provider getProvider() const;
		void reset() const;
		JString toString() const;
		void update(JByteArray arg0) const;
		void update(jbyte arg0) const;
		void update(java::nio::ByteBuffer arg0) const;
		void update(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::security

