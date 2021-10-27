#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class RC2ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		RC2ParameterSpec(QAndroidJniObject obj);
		// Constructors
		RC2ParameterSpec(jint &arg0);
		RC2ParameterSpec(jint &arg0, jbyteArray &arg1);
		RC2ParameterSpec(jint &arg0, jbyteArray &arg1, jint &arg2);
		RC2ParameterSpec() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getEffectiveKeyBits();
		jbyteArray getIV();
		jint hashCode();
	};
} // namespace javax::crypto::spec

