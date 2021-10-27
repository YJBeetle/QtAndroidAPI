#include "./GesturePoint.hpp"

namespace android::gesture
{
	// Fields
	jlong GesturePoint::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloat GesturePoint::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat GesturePoint::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	GesturePoint::GesturePoint(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	GesturePoint::GesturePoint(jfloat &arg0, jfloat &arg1, jlong &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GesturePoint",
			"(FFJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jobject GesturePoint::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace android::gesture

