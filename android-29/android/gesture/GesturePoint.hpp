#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::gesture
{
	class GesturePoint : public __JniBaseClass
	{
	public:
		// Fields
		jlong timestamp();
		jfloat x();
		jfloat y();
		
		GesturePoint(QAndroidJniObject obj);
		// Constructors
		GesturePoint(jfloat arg0, jfloat arg1, jlong arg2);
		GesturePoint() = default;
		
		// Methods
		jobject clone();
	};
} // namespace android::gesture

