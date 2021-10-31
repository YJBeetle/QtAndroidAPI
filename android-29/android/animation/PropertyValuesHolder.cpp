#include "./TypeConverter.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "./PropertyValuesHolder.hpp"

namespace android::animation
{
	// Fields
	
	// QJniObject forward
	PropertyValuesHolder::PropertyValuesHolder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofFloat(android::util::Property arg0, jfloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofFloat(jstring arg0, jfloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofInt(android::util::Property arg0, jintArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofInt(jstring arg0, jintArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofKeyframe(android::util::Property arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofKeyframe(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;[[F)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(jstring arg0, android::graphics::Path arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(jstring arg0, jarray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;[[I)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(jstring arg0, android::graphics::Path arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(android::util::Property arg0, __JniBaseClass arg1, jobjectArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(jstring arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(jstring arg0, __JniBaseClass arg1, jobjectArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.object(),
			arg2
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/PropertyValuesHolder;"
		);
	}
	jstring PropertyValuesHolder::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PropertyValuesHolder::setConverter(android::animation::TypeConverter arg0)
	{
		callMethod<void>(
			"setConverter",
			"(Landroid/animation/TypeConverter;)V",
			arg0.object()
		);
	}
	void PropertyValuesHolder::setEvaluator(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.object()
		);
	}
	void PropertyValuesHolder::setFloatValues(jfloatArray arg0)
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void PropertyValuesHolder::setIntValues(jintArray arg0)
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void PropertyValuesHolder::setKeyframes(jarray arg0)
	{
		callMethod<void>(
			"setKeyframes",
			"([Landroid/animation/Keyframe;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setObjectValues(jobjectArray arg0)
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setProperty(android::util::Property arg0)
	{
		callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.object()
		);
	}
	void PropertyValuesHolder::setPropertyName(jstring arg0)
	{
		callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring PropertyValuesHolder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation

