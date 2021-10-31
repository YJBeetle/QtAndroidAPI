#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableDouble : public __JniBaseClass
	{
	public:
		// Fields
		jdouble value();
		
		MutableDouble(QAndroidJniObject obj);
		// Constructors
		MutableDouble(jdouble arg0);
		MutableDouble() = default;
		
		// Methods
	};
} // namespace android::util

