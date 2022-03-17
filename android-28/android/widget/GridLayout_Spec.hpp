#pragma once

#include "./GridLayout_Alignment.def.hpp"
#include "../../JObject.hpp"
#include "./GridLayout_Spec.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean GridLayout_Spec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint GridLayout_Spec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
