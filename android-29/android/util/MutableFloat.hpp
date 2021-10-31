#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableFloat : public __JniBaseClass
	{
	public:
		// Fields
		jfloat value();
		
		MutableFloat(QAndroidJniObject obj);
		// Constructors
		MutableFloat(jfloat arg0);
		MutableFloat() = default;
		
		// Methods
	};
} // namespace android::util

