#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./Animator.hpp"
#include "./TypeConverter.hpp"
#include "./ValueAnimator.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObjectAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	ObjectAnimator::ObjectAnimator(QJniObject obj) : android::animation::ValueAnimator(obj) {}
	
	// Constructors
	ObjectAnimator::ObjectAnimator()
		: android::animation::ValueAnimator(
			"android.animation.ObjectAnimator",
			"()V"
		) {}
	
	// Methods
	android::animation::ObjectAnimator ObjectAnimator::ofArgb(JObject arg0, android::util::Property arg1, JIntArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofArgb(JObject arg0, JString arg1, JIntArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, android::util::Property arg1, JFloatArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, JString arg1, JFloatArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, android::util::Property arg1, JIntArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, JString arg1, JIntArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofInt(JObject arg0, JString arg1, JString arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, JArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, android::graphics::Path arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, JArray arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, android::graphics::Path arg2)
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
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(JObject arg0, JString arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
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
	android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, JObject arg2, JObjectArray arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, JString arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, JString arg1, JObject arg2, JObjectArray arg3)
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
	android::animation::ObjectAnimator ObjectAnimator::ofObject(JObject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, JObject arg3, JObjectArray arg4)
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
	android::animation::ObjectAnimator ObjectAnimator::ofPropertyValuesHolder(JObject arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofPropertyValuesHolder",
			"(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;",
			arg0.object<jobject>(),
			arg1.object<jarray>()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	JString ObjectAnimator::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	JObject ObjectAnimator::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/Object;"
		);
	}
	void ObjectAnimator::setAutoCancel(jboolean arg0)
	{
		callMethod<void>(
			"setAutoCancel",
			"(Z)V",
			arg0
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::setDuration(jlong arg0)
	{
		return callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ObjectAnimator;",
			arg0
		);
	}
	void ObjectAnimator::setFloatValues(JFloatArray arg0)
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void ObjectAnimator::setIntValues(JIntArray arg0)
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void ObjectAnimator::setObjectValues(JObjectArray arg0)
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	void ObjectAnimator::setProperty(android::util::Property arg0)
	{
		callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.object()
		);
	}
	void ObjectAnimator::setPropertyName(JString arg0)
	{
		callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void ObjectAnimator::setTarget(JObject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	void ObjectAnimator::setupEndValues()
	{
		callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void ObjectAnimator::setupStartValues()
	{
		callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void ObjectAnimator::start()
	{
		callMethod<void>(
			"start",
			"()V"
		);
	}
	JString ObjectAnimator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation

