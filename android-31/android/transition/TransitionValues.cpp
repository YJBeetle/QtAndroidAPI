#include "../view/View.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TransitionValues.hpp"

namespace android::transition
{
	// Fields
	JObject TransitionValues::values()
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
	
	// QJniObject forward
	TransitionValues::TransitionValues(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TransitionValues::TransitionValues()
		: JObject(
			"android.transition.TransitionValues",
			"()V"
		) {}
	TransitionValues::TransitionValues(android::view::View arg0)
		: JObject(
			"android.transition.TransitionValues",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean TransitionValues::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint TransitionValues::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString TransitionValues::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::transition

