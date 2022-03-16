#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./TypeConverter.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline TypeConverter::TypeConverter(JClass arg0, JClass arg1)
		: JObject(
			"android.animation.TypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	inline JObject TypeConverter::convert(JObject arg0) const
	{
		return callObjectMethod(
			"convert",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
} // namespace android::animation

// Base class headers

