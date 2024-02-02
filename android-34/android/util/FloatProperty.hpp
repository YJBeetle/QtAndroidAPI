#pragma once

#include "../../java/lang/Float.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./FloatProperty.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline FloatProperty::FloatProperty(JString arg0)
		: android::util::Property(
			"android.util.FloatProperty",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void FloatProperty::set(JObject arg0, java::lang::Float arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Float;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline void FloatProperty::set(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void FloatProperty::setValue(JObject arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;F)V",
			arg0.object<jobject>(),
			arg1
		);
	}
} // namespace android::util

// Base class headers
#include "./Property.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
