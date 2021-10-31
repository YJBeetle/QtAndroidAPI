#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Byte2 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		
		Byte2(QAndroidJniObject obj);
		// Constructors
		Byte2();
		Byte2(jbyte arg0, jbyte arg1);
		
		// Methods
	};
} // namespace android::renderscript

