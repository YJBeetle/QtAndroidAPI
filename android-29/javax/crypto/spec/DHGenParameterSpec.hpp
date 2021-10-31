#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::crypto::spec
{
	class DHGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DHGenParameterSpec(QAndroidJniObject obj);
		// Constructors
		DHGenParameterSpec(jint arg0, jint arg1);
		DHGenParameterSpec() = default;
		
		// Methods
		jint getExponentSize();
		jint getPrimeSize();
	};
} // namespace javax::crypto::spec

