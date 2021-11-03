#include "./GridLayout_Spec.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	GridLayout_Spec::GridLayout_Spec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean GridLayout_Spec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GridLayout_Spec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::widget

