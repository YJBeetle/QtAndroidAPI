#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Float2 : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		
		Float2(QAndroidJniObject obj);
		// Constructors
		Float2();
		Float2(jfloat &arg0, jfloat &arg1);
		
		// Methods
	};
} // namespace android::renderscript

