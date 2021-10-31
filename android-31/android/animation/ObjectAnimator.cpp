#include "./Animator.hpp"
#include "./TypeConverter.hpp"
#include "./ValueAnimator.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "./ObjectAnimator.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	ObjectAnimator::ObjectAnimator(QAndroidJniObject obj) : android::animation::ValueAnimator(obj) {}
	
	// Constructors
	ObjectAnimator::ObjectAnimator()
		: android::animation::ValueAnimator(
			"android.animation.ObjectAnimator",
			"()V"
		) {}
	
	// Methods
	android::animation::ObjectAnimator ObjectAnimator::ofArgb(jobject arg0, android::util::Property arg1, jintArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofArgb(jobject arg0, jstring arg1, jintArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(jobject arg0, android::util::Property arg1, jfloatArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jfloatArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofInt(jobject arg0, android::util::Property arg1, jintArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofInt(jobject arg0, jstring arg1, jintArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofInt(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofInt(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;[[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofObject(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofObject(jobject arg0, jstring arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::ofPropertyValuesHolder(jobject arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofPropertyValuesHolder",
			"(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1
		);
	}
	android::animation::ObjectAnimator ObjectAnimator::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	jstring ObjectAnimator::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ObjectAnimator::getTarget()
	{
		return callObjectMethod(
			"getTarget",
			"()Ljava/lang/Object;"
		).object<jobject>();
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
	void ObjectAnimator::setFloatValues(jfloatArray arg0)
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void ObjectAnimator::setIntValues(jintArray arg0)
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void ObjectAnimator::setObjectValues(jobjectArray arg0)
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
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
	void ObjectAnimator::setPropertyName(jstring arg0)
	{
		callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ObjectAnimator::setTarget(jobject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
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
	jstring ObjectAnimator::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation

