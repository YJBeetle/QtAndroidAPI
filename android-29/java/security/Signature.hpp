#pragma once

#include "../../__JniBaseClass.hpp"
#include "./SignatureSpi.hpp"

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
		
		Signature(QAndroidJniObject obj);
		// Constructors
		Signature() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(const QString &arg0, const QString &arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		static QAndroidJniObject getInstance(const QString &arg0, java::security::Provider arg1);
		jobject clone();
		jstring getAlgorithm();
		jobject getParameter(jstring arg0);
		jobject getParameter(const QString &arg0);
		QAndroidJniObject getParameters();
		QAndroidJniObject getProvider();
		void initSign(__JniBaseClass arg0);
		void initSign(__JniBaseClass arg0, java::security::SecureRandom arg1);
		void initVerify(__JniBaseClass arg0);
		void initVerify(java::security::cert::Certificate arg0);
		void setParameter(__JniBaseClass arg0);
		void setParameter(jstring arg0, jobject arg1);
		void setParameter(const QString &arg0, jobject arg1);
		jbyteArray sign();
		jint sign(jbyteArray arg0, jint arg1, jint arg2);
		jstring toString();
		void update(jbyteArray arg0);
		void update(jbyte arg0);
		void update(java::nio::ByteBuffer arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
		jboolean verify(jbyteArray arg0);
		jboolean verify(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::security

