#include "./GesturePoint.hpp"

namespace android::gesture
{
	// Fields
	jlong GesturePoint::timestamp()
	{
		return getField<jlong>(
			"timestamp"
		);
	}
	jfloat GesturePoint::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat GesturePoint::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// QAndroidJniObject forward
	GesturePoint::GesturePoint(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GesturePoint::GesturePoint(jfloat arg0, jfloat arg1, jlong arg2)
		: JObject(
			"android.gesture.GesturePoint",
			"(FFJ)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jobject GesturePoint::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace android::gesture

