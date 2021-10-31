#include "../view/View.hpp"
#include "./TransitionValues.hpp"

namespace android::transition
{
	// Fields
	QAndroidJniObject TransitionValues::values()
	{
		return __thiz.getObjectField(
			"values",
			"Ljava/util/Map;"
		);
	}
	QAndroidJniObject TransitionValues::view()
	{
		return __thiz.getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	TransitionValues::TransitionValues(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TransitionValues::TransitionValues()
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionValues",
			"()V"
		);
	}
	TransitionValues::TransitionValues(android::view::View arg0)
	{
		__thiz = QAndroidJniObject(
			"android.transition.TransitionValues",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jboolean TransitionValues::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint TransitionValues::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TransitionValues::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::transition

