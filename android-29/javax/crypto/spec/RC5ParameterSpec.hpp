#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class RC5ParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		RC5ParameterSpec(QAndroidJniObject obj);
		// Constructors
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3);
		RC5ParameterSpec(jint arg0, jint arg1, jint arg2, jbyteArray arg3, jint arg4);
		RC5ParameterSpec() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jbyteArray getIV();
		jint getRounds();
		jint getVersion();
		jint getWordSize();
		jint hashCode();
	};
} // namespace javax::crypto::spec

