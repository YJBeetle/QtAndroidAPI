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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GesturePoint(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GesturePoint(QAndroidJniObject obj);
		
		// Constructors
		GesturePoint(jfloat arg0, jfloat arg1, jlong arg2);
		
		// Methods
		jobject clone();
	};
} // namespace android::gesture

