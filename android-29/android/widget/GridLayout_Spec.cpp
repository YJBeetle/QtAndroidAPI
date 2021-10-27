#include "./GridLayout_Alignment.hpp"
#include "./GridLayout_Spec.hpp"

namespace android::widget
{
	// Fields
	
	GridLayout_Spec::GridLayout_Spec(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean GridLayout_Spec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GridLayout_Spec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::widget

