#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Int3 : public __JniBaseClass
	{
	public:
		// Fields
		jint x();
		jint y();
		jint z();
		
		Int3(QAndroidJniObject obj);
		// Constructors
		Int3();
		Int3(jint &arg0, jint &arg1, jint &arg2);
		
		// Methods
	};
} // namespace android::renderscript

