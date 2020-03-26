#pragma once

#ifndef ANDROID_ANIMATION_PROPERTYVALUESHOLDER
#define ANDROID_ANIMATION_PROPERTYVALUESHOLDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::util
{
	class Property;
}
namespace __jni_impl::android::animation
{
	class TypeConverter;
}
namespace __jni_impl::android::graphics
{
	class Path;
}

namespace __jni_impl::android::animation
{
	class PropertyValuesHolder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject clone();
		void setProperty(__jni_impl::android::util::Property arg0);
		void setKeyframes(jarray arg0);
		static QAndroidJniObject ofKeyframe(__jni_impl::android::util::Property arg0, jarray arg1);
		static QAndroidJniObject ofKeyframe(jstring arg0, jarray arg1);
		void setConverter(__jni_impl::android::animation::TypeConverter arg0);
		jstring getPropertyName();
		static QAndroidJniObject ofMultiInt(jstring arg0, jarray arg1);
		static QAndroidJniObject ofMultiInt(jstring arg0, __jni_impl::android::graphics::Path arg1);
		static QAndroidJniObject ofMultiInt(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		static QAndroidJniObject ofMultiInt(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3);
		void setPropertyName(jstring arg0);
		static QAndroidJniObject ofInt(jstring arg0, jintArray arg1);
		static QAndroidJniObject ofInt(__jni_impl::android::util::Property arg0, jintArray arg1);
		static QAndroidJniObject ofFloat(jstring arg0, jfloatArray arg1);
		static QAndroidJniObject ofFloat(__jni_impl::android::util::Property arg0, jfloatArray arg1);
		static QAndroidJniObject ofMultiFloat(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jarray arg3);
		static QAndroidJniObject ofMultiFloat(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofMultiFloat(jstring arg0, jarray arg1);
		static QAndroidJniObject ofMultiFloat(jstring arg0, __jni_impl::android::graphics::Path arg1);
		static QAndroidJniObject ofObject(__jni_impl::android::util::Property arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::android::graphics::Path arg2);
		static QAndroidJniObject ofObject(__jni_impl::android::util::Property arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3);
		static QAndroidJniObject ofObject(__jni_impl::android::util::Property arg0, __jni_impl::__JniBaseClass arg1, jobjectArray arg2);
		static QAndroidJniObject ofObject(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::android::graphics::Path arg2);
		static QAndroidJniObject ofObject(jstring arg0, __jni_impl::__JniBaseClass arg1, jobjectArray arg2);
		void setIntValues(jintArray arg0);
		void setFloatValues(jfloatArray arg0);
		void setObjectValues(jobjectArray arg0);
		void setEvaluator(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::animation

#include "../util/Property.hpp"
#include "TypeConverter.hpp"
#include "../graphics/Path.hpp"

namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void PropertyValuesHolder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.PropertyValuesHolder",
			"(V)V");
	}
	
	// Methods
	jstring PropertyValuesHolder::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PropertyValuesHolder::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/PropertyValuesHolder;"
		);
	}
	void PropertyValuesHolder::setProperty(__jni_impl::android::util::Property arg0)
	{
		__thiz.callMethod<void>(
			"setProperty",
			"(Landroid/util/Property;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject PropertyValuesHolder::ofKeyframe(__jni_impl::android::util::Property arg0, jarray arg1)
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
	void PropertyValuesHolder::setConverter(__jni_impl::android::animation::TypeConverter arg0)
	{
		__thiz.callMethod<void>(
			"setConverter",
			"(Landroid/animation/TypeConverter;)V",
			arg0.__jniObject().object()
		);
	}
	jstring PropertyValuesHolder::getPropertyName()
	{
		return __thiz.callObjectMethod(
			"getPropertyName",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, __jni_impl::android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiInt",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
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
	QAndroidJniObject PropertyValuesHolder::ofMultiInt(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3)
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
	void PropertyValuesHolder::setPropertyName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPropertyName",
			"(Ljava/lang/String;)V",
			arg0
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
	QAndroidJniObject PropertyValuesHolder::ofInt(__jni_impl::android::util::Property arg0, jintArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofInt",
			"(Landroid/util/Property;[I)Landroid/animation/PropertyValuesHolder;",
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
	QAndroidJniObject PropertyValuesHolder::ofFloat(__jni_impl::android::util::Property arg0, jfloatArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofFloat",
			"(Landroid/util/Property;[F)Landroid/animation/PropertyValuesHolder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jarray arg3)
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
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3)
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
	QAndroidJniObject PropertyValuesHolder::ofMultiFloat(jstring arg0, __jni_impl::android::graphics::Path arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.PropertyValuesHolder",
			"ofMultiFloat",
			"(Ljava/lang/String;Landroid/graphics/Path;)Landroid/animation/PropertyValuesHolder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject PropertyValuesHolder::ofObject(__jni_impl::android::util::Property arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::android::graphics::Path arg2)
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
	QAndroidJniObject PropertyValuesHolder::ofObject(__jni_impl::android::util::Property arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::__JniBaseClass arg2, jobjectArray arg3)
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
	QAndroidJniObject PropertyValuesHolder::ofObject(__jni_impl::android::util::Property arg0, __jni_impl::__JniBaseClass arg1, jobjectArray arg2)
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
	QAndroidJniObject PropertyValuesHolder::ofObject(jstring arg0, __jni_impl::android::animation::TypeConverter arg1, __jni_impl::android::graphics::Path arg2)
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
	QAndroidJniObject PropertyValuesHolder::ofObject(jstring arg0, __jni_impl::__JniBaseClass arg1, jobjectArray arg2)
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
	void PropertyValuesHolder::setIntValues(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"setIntValues",
			"([I)V",
			arg0
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
	void PropertyValuesHolder::setObjectValues(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"setObjectValues",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void PropertyValuesHolder::setEvaluator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEvaluator",
			"(Landroid/animation/TypeEvaluator;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class PropertyValuesHolder : public __jni_impl::android::animation::PropertyValuesHolder
	{
	public:
		PropertyValuesHolder(QAndroidJniObject obj) { __thiz = obj; }
		PropertyValuesHolder()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_PROPERTYVALUESHOLDER

