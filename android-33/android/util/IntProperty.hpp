#pragma once

#include "../../java/lang/Integer.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IntProperty.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline IntProperty::IntProperty(JString arg0)
		: android::util::Property(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline void IntProperty::set(JObject arg0, java::lang::Integer arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Integer;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline void IntProperty::set(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline void IntProperty::setValue(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;I)V",
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
