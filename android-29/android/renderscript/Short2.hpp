#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::renderscript
{
	class Short2 : public __JniBaseClass
	{
	public:
		// Fields
		jshort x();
		jshort y();
		
		Short2(QAndroidJniObject obj);
		// Constructors
		Short2();
		Short2(jshort arg0, jshort arg1);
		
		// Methods
	};
} // namespace android::renderscript

