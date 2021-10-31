#include "../view/View.hpp"
#include "./TransitionValues.hpp"

namespace android::transition
{
	// Fields
	__JniBaseClass TransitionValues::values()
	{
		return getObjectField(
			"values",
			"Ljava/util/Map;"
		);
	}
	android::view::View TransitionValues::view()
	{
		return getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// QAndroidJniObject forward
	TransitionValues::TransitionValues(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TransitionValues::TransitionValues()
		: __JniBaseClass(
			"android.transition.TransitionValues",
			"()V"
		) {}
	
	// Methods
	jboolean TransitionValues::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint TransitionValues::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring TransitionValues::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::transition

