#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableChar : public __JniBaseClass
	{
	public:
		// Fields
		jchar value();
		
		MutableChar(QAndroidJniObject obj);
		// Constructors
		MutableChar(jchar arg0);
		MutableChar() = default;
		
		// Methods
	};
} // namespace android::util

