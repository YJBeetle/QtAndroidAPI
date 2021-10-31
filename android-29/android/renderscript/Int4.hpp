#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Int4 : public __JniBaseClass
	{
	public:
		// Fields
		jint w();
		jint x();
		jint y();
		jint z();
		
		Int4(QAndroidJniObject obj);
		// Constructors
		Int4();
		Int4(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
	};
} // namespace android::renderscript

