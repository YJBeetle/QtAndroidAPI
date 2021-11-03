#include "./GridLayout_Alignment.hpp"
#include "../../JObject.hpp"
#include "./GridLayout_Spec.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	GridLayout_Spec::GridLayout_Spec(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean GridLayout_Spec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint GridLayout_Spec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::widget

