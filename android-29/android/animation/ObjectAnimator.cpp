#include "./Animator.hpp"
#include "./TypeConverter.hpp"
#include "./ValueAnimator.hpp"
#include "../graphics/Path.hpp"
#include "../util/Property.hpp"
#include "./ObjectAnimator.hpp"

namespace android::animation
{
	// Fields
	
	ObjectAnimator::ObjectAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ObjectAnimator::ObjectAnimator()
	{
		__thiz = QAndroidJniObject(
			"android.animation.ObjectAnimator",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ObjectAnimator::ofArgb(jobject arg0, android::util::Property arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofArgb(jobject arg0, jstring arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofArgb(jobject arg0, const QString &arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, android::util::Property arg1, jfloatArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jfloatArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, const QString &arg1, jfloatArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, const QString &arg1, const QString &arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, android::util::Property arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, jstring arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, const QString &arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, android::util::Property arg1, android::util::Property arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, jstring arg1, jstring arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, const QString &arg1, const QString &arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[[F)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, const QString &arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, const QString &arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;[[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, const QString &arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;[[I)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, const QString &arg1, android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, const QString &arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, jstring arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, const QString &arg1, android::animation::TypeConverter arg2, android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, jstring arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, const QString &arg1, __JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, android::util::Property arg1, android::animation::TypeConverter arg2, __JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject ObjectAnimator::ofPropertyValuesHolder(jobject arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofPropertyValuesHolder",
			"(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ObjectAnimator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	jstring ObjectAnimator::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject ObjectAnimator::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	void ObjectAnimator::setAutoCancel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoCancel",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject ObjectAnimator::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ObjectAnimator;",
			arg0
		);
	}
	void ObjectAnimator::setFloatValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0
		);
	}
	void ObjectAnimator::setIntValues(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
		);
	}
	void ObjectAnimator::setObjectValues(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void ObjectAnimator::setProperty(android::util::Property arg0)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.__jniObject().object()
		);
	}
	void ObjectAnimator::setPropertyName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ObjectAnimator::setPropertyName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ObjectAnimator::setTarget(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void ObjectAnimator::setupEndValues()
	{
		__thiz.callMethod<void>(
			"setupEndValues",
			"()V"
		);
	}
	void ObjectAnimator::setupStartValues()
	{
		__thiz.callMethod<void>(
			"setupStartValues",
			"()V"
		);
	}
	void ObjectAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V"
		);
	}
	jstring ObjectAnimator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::animation

