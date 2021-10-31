#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Byte4 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte w();
		jbyte x();
		jbyte y();
		jbyte z();
		
		Byte4(QAndroidJniObject obj);
		// Constructors
		Byte4();
		Byte4(jbyte arg0, jbyte arg1, jbyte arg2, jbyte arg3);
		
		// Methods
	};
} // namespace android::renderscript

