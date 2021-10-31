#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableLong : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		MutableLong(QAndroidJniObject obj);
		// Constructors
		MutableLong(jlong arg0);
		MutableLong() = default;
		
		// Methods
	};
} // namespace android::util

