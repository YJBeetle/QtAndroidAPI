#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Long4 : public __JniBaseClass
	{
	public:
		// Fields
		jlong w();
		jlong x();
		jlong y();
		jlong z();
		
		Long4(QAndroidJniObject obj);
		// Constructors
		Long4();
		Long4(jlong arg0, jlong arg1, jlong arg2, jlong arg3);
		
		// Methods
	};
} // namespace android::renderscript

