#include "./TypeConverter.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "./PropertyValuesHolder.hpp"

namespace android::animation
{
	// Fields
	
	PropertyValuesHolder::PropertyValuesHolder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject PropertyValuesHolder::ofFloat(android::util::Property arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofFloat(jstring arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofFloat(const QString &arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Ljava/lang/String;[F)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofInt(android::util::Property arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofInt(jstring arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofInt(const QString &arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Ljava/lang/String;[I)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofKeyframe(android::util::Property arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Landroid/util/Property;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofKeyframe(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofKeyframe(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofKeyframe",
			"(Ljava/lang/String;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;[[F)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;[[F)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(const QString &arg0, android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(const QString &arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(const QString &arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;[[I)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(const QString &arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;[[I)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(const QString &arg0, android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(const QString &arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Landroid/animation/Keyframe;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(const QString &arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(android::util::Property arg0, __JniBaseClass arg1, jobjectArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(jstring arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(const QString &arg0, android::animation::TypeConverter arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(jstring arg0, __JniBaseClass arg1, jobjectArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(const QString &arg0, __JniBaseClass arg1, jobjectArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(android::util::Property arg0, android::animation::TypeConverter arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofObject",
			"(Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject PropertyValuesHolder::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/PropertyValuesHolder;"
		);
	}
	jstring PropertyValuesHolder::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PropertyValuesHolder::setConverter(android::animation::TypeConverter arg0)
	{
		__thiz.callMethod<void>(
			"setConverter",
			"(Landroid/animation/TypeConverter;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyValuesHolder::setEvaluator(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyValuesHolder::setFloatValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void PropertyValuesHolder::setIntValues(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void PropertyValuesHolder::setKeyframes(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setKeyframes",
			"([Landroid/animation/Keyframe;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setObjectValues(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setProperty(android::util::Property arg0)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.__jniObject().object()
		);
	}
	void PropertyValuesHolder::setPropertyName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setPropertyName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PropertyValuesHolder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation

