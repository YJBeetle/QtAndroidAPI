#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class IvParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		IvParameterSpec(QAndroidJniObject obj);
		// Constructors
		IvParameterSpec(jbyteArray &arg0);
		IvParameterSpec(jbyteArray &arg0, jint &arg1, jint &arg2);
		IvParameterSpec() = default;
		
		// Methods
		jbyteArray getIV();
	};
} // namespace javax::crypto::spec

