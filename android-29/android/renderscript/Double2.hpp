#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Double2 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		
		Double2(QAndroidJniObject obj);
		// Constructors
		Double2();
		Double2(jdouble arg0, jdouble arg1);
		
		// Methods
	};
} // namespace android::renderscript

