#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableShort : public __JniBaseClass
	{
	public:
		// Fields
		jshort value();
		
		MutableShort(QAndroidJniObject obj);
		// Constructors
		MutableShort(jshort &arg0);
		MutableShort() = default;
		
		// Methods
	};
} // namespace android::util

