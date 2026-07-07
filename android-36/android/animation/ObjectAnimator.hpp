#pragma once

#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Animator.def.hpp"
#include "./TypeConverter.def.hpp"
#include "./ValueAnimator.def.hpp"
#include "../graphics/Path.def.hpp"
#include "../util/Property.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectAnimator.def.hpp"

namespace android::animation
{
	// Fields
	
	// Constructors
	inline ObjectAnimator::ObjectAnimator()
		: android::animation::ValueAnimator(
			"android.animation.ObjectAnimator",
			"()V"
		) {}
	
	// Methods
	inline android::animation::ObjectAnimator ObjectAnimator::ofArgb(JObject arg0, android::util::Property arg1, JIntArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofArgb(JObject arg0, JString arg1, JIntArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, android::util::Property arg1, JFloatArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object<jfloatArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, JString arg1, JFloatArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jfloatArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, android::util::Property arg1, JIntArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, JString arg1, JIntArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jintArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[[F)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object<jobjectArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;[[I)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object<jarray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object(),
			arg4.object<jobjectArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, JObject arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, JString arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, JString arg1, JObject arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object<jobjectArray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::ofPropertyValuesHolder(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofPropertyValuesHolder",
			"(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jarray>()
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	inline JString ObjectAnimator::getPropertyName() const
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	inline JObject ObjectAnimator::getTarget() const
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/Object;"
		);
	}
	inline void ObjectAnimator::setAutoCancel(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoCancel",
			"(Z)V",
			arg0
		);
	}
	inline android::animation::ObjectAnimator ObjectAnimator::setDuration(jlong arg0) const
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ObjectAnimator;",
			arg0
		);
	}
	inline void ObjectAnimator::setFloatValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void ObjectAnimator::setIntValues(JIntArray arg0) const
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void ObjectAnimator::setObjectValues(JObjectArray arg0) const
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void ObjectAnimator::setProperty(android::util::Property arg0) const
	{
		callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.object()
		);
	}
	inline void ObjectAnimator::setPropertyName(JString arg0) const
	{
		callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void ObjectAnimator::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void ObjectAnimator::setupEndValues() const
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	inline void ObjectAnimator::setupStartValues() const
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	inline void ObjectAnimator::start() const
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	inline JString ObjectAnimator::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation

// Base class headers
#include "./Animator.hpp"
#include "./ValueAnimator.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::animation;
#endif
