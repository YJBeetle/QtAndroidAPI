#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Double3 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		jdouble z();
		
		Double3(QAndroidJniObject obj);
		// Constructors
		Double3();
		Double3(jdouble arg0, jdouble arg1, jdouble arg2);
		
		// Methods
	};
} // namespace android::renderscript

