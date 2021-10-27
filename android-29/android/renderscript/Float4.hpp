#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Float4 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat w();
		jfloat x();
		jfloat y();
		jfloat z();
		
		Float4(QAndroidJniObject obj);
		// Constructors
		Float4();
		Float4(jfloat &arg0, jfloat &arg1, jfloat &arg2, jfloat &arg3);
		
		// Methods
	};
} // namespace android::renderscript

