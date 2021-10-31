#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Long3 : public __JniBaseClass
	{
	public:
		// Fields
		jlong x();
		jlong y();
		jlong z();
		
		Long3(QAndroidJniObject obj);
		// Constructors
		Long3();
		Long3(jlong arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::renderscript

