#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MessageDigestSpi.hpp"

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
		
		MessageDigest(QAndroidJniObject obj);
		// Constructors
		MessageDigest() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		static jboolean isEqual(jbyteArray arg0, jbyteArray arg1);
		jobject clone();
		jbyteArray digest();
		jbyteArray digest(jbyteArray arg0);
		jint digest(jbyteArray arg0, jint arg1, jint arg2);
		jstring getAlgorithm();
		jint getDigestLength();
		QAndroidJniObject getProvider();
		void reset();
		jstring toString();
		void update(jbyteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::security

