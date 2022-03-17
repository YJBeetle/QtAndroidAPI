#pragma once

#include "../view/View.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./TransitionValues.def.hpp"

namespace android::transition
{
	// Fields
	inline JObject TransitionValues::values()
	{
		return getObjectField(
			"values",
			"Ljava/util/Map;"
		);
	}
	inline android::view::View TransitionValues::view()
	{
		return getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	inline TransitionValues::TransitionValues()
		: JObject(
			"android.transition.TransitionValues",
			"()V"
		) {}
	inline TransitionValues::TransitionValues(android::view::View arg0)
		: JObject(
			"android.transition.TransitionValues",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean TransitionValues::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint TransitionValues::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString TransitionValues::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::transition

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::transition;
#endif
