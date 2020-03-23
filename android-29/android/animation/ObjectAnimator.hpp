#pragma once

#ifndef ANDROID_ANIMATION_OBJECTANIMATOR
#define ANDROID_ANIMATION_OBJECTANIMATOR

#include "ValueAnimator.hpp"

namespace __jni_impl::android::animation
{
	class Animator;
}
namespace __jni_impl::android::animation
{
	class ValueAnimator;
}
namespace __jni_impl::android::util
{
	class Property;
}
namespace __jni_impl::android::graphics
{
	class Path;
}
namespace __jni_impl::android::animation
{
	class TypeConverter;
}

namespace __jni_impl::android::animation
{
	class ObjectAnimator : public __jni_impl::android::animation::ValueAnimator
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject clone();
		void setProperty(__jni_impl::android::util::Property arg0);
		void start();
		QAndroidJniObject getTarget();
		void setTarget(jobject arg0);
		QAndroidJniObject getPropertyName();
		void setPropertyName(jstring arg0);
		static QAndroidJniObject ofInt(jobject arg0, __jni_impl::android::util::Property arg1, jintArray arg2);
		static QAndroidJniObject ofInt(jobject arg0, jstring arg1, jstring arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofInt(jobject arg0, jstring arg1, jintArray arg2);
		static QAndroidJniObject ofInt(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::util::Property arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject ofMultiInt(jobject arg0, jstring arg1, __jni_impl::android::graphics::Path arg2);
		static QAndroidJniObject ofArgb(jobject arg0, jstring arg1, jintArray arg2);
		static QAndroidJniObject ofArgb(jobject arg0, __jni_impl::android::util::Property arg1, jintArray arg2);
		static QAndroidJniObject ofFloat(jobject arg0, __jni_impl::android::util::Property arg1, jfloatArray arg2);
		static QAndroidJniObject ofFloat(jobject arg0, jstring arg1, jstring arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofFloat(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::util::Property arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofFloat(jobject arg0, jstring arg1, jfloatArray arg2);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, jarray arg2);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, __jni_impl::android::graphics::Path arg2);
		static QAndroidJniObject ofMultiFloat(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofObject(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::android::graphics::Path arg3);
		static QAndroidJniObject ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4);
		static QAndroidJniObject ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofObject(jobject arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofPropertyValuesHolder(jobject arg0, jarray arg1);
		void setIntValues(jintArray arg0);
		void setFloatValues(jfloatArray arg0);
		void setObjectValues(jobjectArray arg0);
		QAndroidJniObject setDuration(jlong arg0);
		void setupStartValues();
		void setupEndValues();
		void setAutoCancel(jboolean arg0);
	};
} // namespace __jni_impl::android::animation

#include "Animator.hpp"
#include "ValueAnimator.hpp"
#include "../util/Property.hpp"
#include "../graphics/Path.hpp"
#include "TypeConverter.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void ObjectAnimator::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.ObjectAnimator",
			"()V");
	}
	
	// Methods
	QAndroidJniObject ObjectAnimator::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ObjectAnimator::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/ObjectAnimator;");
	}
	void ObjectAnimator::setProperty(__jni_impl::android::util::Property arg0)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.__jniObject().object());
	}
	void ObjectAnimator::start()
	{
		__thiz.callMethod<void>(
			"start",
			"()V");
	}
	QAndroidJniObject ObjectAnimator::getTarget()
	{
		return __thiz.callObjectMethod(
			"getTarget",
			"()Ljava/lang/Object;");
	}
	void ObjectAnimator::setTarget(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setTarget",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ObjectAnimator::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;");
	}
	void ObjectAnimator::setPropertyName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, __jni_impl::android::util::Property arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, jstring arg1, jstring arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, jstring arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofInt(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::util::Property arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofInt",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;[[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofMultiInt(jobject arg0, jstring arg1, __jni_impl::android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiInt",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofArgb(jobject arg0, jstring arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Ljava/lang/String;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofArgb(jobject arg0, __jni_impl::android::util::Property arg1, jintArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofArgb",
			"(Ljava/lang/Object;Landroid/util/Property;[I)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, __jni_impl::android::util::Property arg1, jfloatArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jstring arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::util::Property arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/util/Property;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofFloat(jobject arg0, jstring arg1, jfloatArray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;[[F)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, __jni_impl::android::graphics::Path arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofMultiFloat(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofMultiFloat",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, jstring arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::android::graphics::Path arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/graphics/Path;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object());
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::android::animation::TypeConverter arg2, __jni_impl::__JniBaseClass arg3, jobjectArray arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeConverter;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, __jni_impl::android::util::Property arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Landroid/util/Property;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject ObjectAnimator::ofObject(jobject arg0, jstring arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofObject",
			"(Ljava/lang/Object;Ljava/lang/String;Landroid/animation/TypeEvaluator;[Ljava/lang/Object;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject ObjectAnimator::ofPropertyValuesHolder(jobject arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.ObjectAnimator",
			"ofPropertyValuesHolder",
			"(Ljava/lang/Object;[Landroid/animation/PropertyValuesHolder;)Landroid/animation/ObjectAnimator;",
			arg0,
			arg1);
	}
	void ObjectAnimator::setIntValues(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0);
	}
	void ObjectAnimator::setFloatValues(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"setFloatValues",
			"([F)V",
			arg0);
	}
	void ObjectAnimator::setObjectValues(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject ObjectAnimator::setDuration(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"setDuration",
			"(J)Landroid/animation/ObjectAnimator;",
			arg0);
	}
	void ObjectAnimator::setupStartValues()
	{
		__thiz.callMethod<void>(
			"setupStartValues",
			"()V");
	}
	void ObjectAnimator::setupEndValues()
	{
		__thiz.callMethod<void>(
			"setupEndValues",
			"()V");
	}
	void ObjectAnimator::setAutoCancel(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoCancel",
			"(Z)V",
			arg0);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class ObjectAnimator : public __jni_impl::android::animation::ObjectAnimator
	{
	public:
		ObjectAnimator(QAndroidJniObject obj) { __thiz = obj; }
		ObjectAnimator()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_OBJECTANIMATOR

