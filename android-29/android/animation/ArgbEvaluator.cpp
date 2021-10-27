#include "./ArgbEvaluator.hpp"

namespace android::animation
{
	// Fields
	
	ArgbEvaluator::ArgbEvaluator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ArgbEvaluator::ArgbEvaluator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.ArgbEvaluator",
			"()V"
		);
	}
	
	// Methods
	jobject ArgbEvaluator::evaluate(jfloat arg0, jobject arg1, jobject arg2)
	{
		return __thiz.callObjectMethod(
			"evaluate",
			"(FLjava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1,
			arg2
		).object<jobject>();
	}
} // namespace android::animation

