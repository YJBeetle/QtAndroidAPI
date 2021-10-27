#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Byte3 : public __JniBaseClass
	{
	public:
		// Fields
		jbyte x();
		jbyte y();
		jbyte z();
		
		Byte3(QAndroidJniObject obj);
		// Constructors
		Byte3();
		Byte3(jbyte &arg0, jbyte &arg1, jbyte &arg2);
		
		// Methods
	};
} // namespace android::renderscript

