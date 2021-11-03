#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./TypeConverter.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PropertyValuesHolder.hpp"

namespace android::animation
{
	// Fields
	
	// QAndroidJniObject forward
	PropertyValuesHolder::PropertyValuesHolder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofFloat(android::util::Property arg0, JFloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object<jfloatArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofFloat(JString arg0, JFloatArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofInt(android::util::Property arg0, JIntArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object<jintArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofInt(JString arg0, JIntArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object<jintArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofKeyframe(android::util::Property arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofKeyframe(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;[[F)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(JString arg0, android::graphics::Path arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiFloat(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;[[I)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(JString arg0, android::graphics::Path arg1)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jarray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofMultiInt(JString arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object<jobjectArray>()
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
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(android::util::Property arg0, JObject arg1, JObjectArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jobjectArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(JString arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(JString arg0, JObject arg1, JObjectArray arg2)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object<jobjectArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, JObject arg2, JObjectArray arg3)
	{
		return callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object<jobjectArray>()
		);
	}
	android::animation::PropertyValuesHolder PropertyValuesHolder::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/animation/PropertyValuesHolder;"
		);
	}
	JString PropertyValuesHolder::getPropertyName()
	{
		return callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		);
	}
	void PropertyValuesHolder::setConverter(android::animation::TypeConverter arg0)
	{
		callMethod<void>(
			"setConverter",
			"(Landroid/animation/TypeConverter;)V",
			arg0.object()
		);
	}
	void PropertyValuesHolder::setEvaluator(JObject arg0)
	{
		callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.object()
		);
	}
	void PropertyValuesHolder::setFloatValues(JFloatArray arg0)
	{
		callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	void PropertyValuesHolder::setIntValues(JIntArray arg0)
	{
		callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	void PropertyValuesHolder::setKeyframes(JArray arg0)
	{
		callMethod<void>(
			"setKeyframes",
			"([Landroid/animation/Keyframe;)V",
			arg0.object<jarray>()
		);
	}
	void PropertyValuesHolder::setObjectValues(JObjectArray arg0)
	{
		callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
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
	void PropertyValuesHolder::setPropertyName(JString arg0)
	{
		callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString PropertyValuesHolder::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::animation

