#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class Int64Ref : public __JniBaseClass
	{
	public:
		// Fields
		jlong value();
		
		Int64Ref(QAndroidJniObject obj);
		// Constructors
		Int64Ref(jlong arg0);
		Int64Ref() = default;
		
		// Methods
	};
} // namespace android::system

