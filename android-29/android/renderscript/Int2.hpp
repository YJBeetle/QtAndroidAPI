#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Int2 : public __JniBaseClass
	{
	public:
		// Fields
		jint x();
		jint y();
		
		Int2(QAndroidJniObject obj);
		// Constructors
		Int2();
		Int2(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::renderscript

