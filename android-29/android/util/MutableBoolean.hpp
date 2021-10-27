#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableBoolean : public __JniBaseClass
	{
	public:
		// Fields
		jboolean value();
		
		MutableBoolean(QAndroidJniObject obj);
		// Constructors
		MutableBoolean(jboolean &arg0);
		MutableBoolean() = default;
		
		// Methods
	};
} // namespace android::util

