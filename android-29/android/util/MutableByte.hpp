#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class MutableByte : public __JniBaseClass
	{
	public:
		// Fields
		jbyte value();
		
		MutableByte(QAndroidJniObject obj);
		// Constructors
		MutableByte(jbyte &arg0);
		MutableByte() = default;
		
		// Methods
	};
} // namespace android::util

