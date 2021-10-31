#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class FloatMath : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FloatMath(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FloatMath(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

