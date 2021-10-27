#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Long2 : public __JniBaseClass
	{
	public:
		// Fields
		jlong x();
		jlong y();
		
		Long2(QAndroidJniObject obj);
		// Constructors
		Long2();
		Long2(jlong &arg0, jlong &arg1);
		
		// Methods
	};
} // namespace android::renderscript

