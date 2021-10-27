#include "./BidirectionalTypeConverter.hpp"

namespace android::animation
{
	// Fields
	
	BidirectionalTypeConverter::BidirectionalTypeConverter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BidirectionalTypeConverter::BidirectionalTypeConverter(jclass &arg0, jclass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jobject BidirectionalTypeConverter::convertBack(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject BidirectionalTypeConverter::invert()
	{
		return __thiz.callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace android::animation

