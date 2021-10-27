#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class SecretKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		SecretKeySpec(QAndroidJniObject obj);
		// Constructors
		SecretKeySpec(jbyteArray &arg0, jstring &arg1);
		SecretKeySpec(jbyteArray &arg0, const QString &arg1);
		SecretKeySpec(jbyteArray &arg0, jint &arg1, jint &arg2, jstring &arg3);
		SecretKeySpec(jbyteArray &arg0, jint &arg1, jint &arg2, const QString &arg3);
		SecretKeySpec() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jstring getFormat();
		jint hashCode();
	};
} // namespace javax::crypto::spec

