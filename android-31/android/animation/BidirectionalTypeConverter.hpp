#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./BidirectionalTypeConverter.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline BidirectionalTypeConverter::BidirectionalTypeConverter(JClass arg0, JClass arg1)
		: android::animation::TypeConverter(
			"android.animation.BidirectionalTypeConverter",
			"(Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		) {}
	
	// Methods
	inline JObject BidirectionalTypeConverter::convertBack(JObject arg0) const
	{
		return callObjectMethod(
			"convertBack",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline android::animation::BidirectionalTypeConverter BidirectionalTypeConverter::invert() const
	{
		return callObjectMethod(
			"invert",
			"()Landroid/animation/BidirectionalTypeConverter;"
		);
	}
} // namespace android::animation

// Base class headers
#include "./TypeConverter.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif
