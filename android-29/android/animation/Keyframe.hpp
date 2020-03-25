#pragma once

#ifndef ANDROID_ANIMATION_KEYFRAME
#define ANDROID_ANIMATION_KEYFRAME

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::animation
{
	class Keyframe : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clone();
		QAndroidJniObject getValue();
		void setValue(jobject arg0);
		QAndroidJniObject getType();
		jboolean hasValue();
		void setFraction(jfloat arg0);
		static QAndroidJniObject ofInt(jfloat arg0, jint arg1);
		static QAndroidJniObject ofInt(jfloat arg0);
		static QAndroidJniObject ofFloat(jfloat arg0, jfloat arg1);
		static QAndroidJniObject ofFloat(jfloat arg0);
		static QAndroidJniObject ofObject(jfloat arg0, jobject arg1);
		static QAndroidJniObject ofObject(jfloat arg0);
		jfloat getFraction();
		void setInterpolator(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getInterpolator();
	};
} // namespace __jni_impl::android::animation


namespace __jni_impl::android::animation
{
	// Fields
	
	// Constructors
	void Keyframe::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.animation.Keyframe",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Keyframe::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/animation/Keyframe;");
	}
	QAndroidJniObject Keyframe::getValue()
	{
		return __thiz.callObjectMethod(
			"getValue",
			"()Ljava/lang/Object;");
	}
	void Keyframe::setValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;)V",
			arg0);
	}
	QAndroidJniObject Keyframe::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/Class;");
	}
	jboolean Keyframe::hasValue()
	{
		return __thiz.callMethod<jboolean>(
			"hasValue",
			"()Z");
	}
	void Keyframe::setFraction(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setFraction",
			"(F)V",
			arg0);
	}
	QAndroidJniObject Keyframe::ofInt(jfloat arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(FI)Landroid/animation/Keyframe;",
			arg0,
			arg1);
	}
	QAndroidJniObject Keyframe::ofInt(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofInt",
			"(F)Landroid/animation/Keyframe;",
			arg0);
	}
	QAndroidJniObject Keyframe::ofFloat(jfloat arg0, jfloat arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(FF)Landroid/animation/Keyframe;",
			arg0,
			arg1);
	}
	QAndroidJniObject Keyframe::ofFloat(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofFloat",
			"(F)Landroid/animation/Keyframe;",
			arg0);
	}
	QAndroidJniObject Keyframe::ofObject(jfloat arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(FLjava/lang/Object;)Landroid/animation/Keyframe;",
			arg0,
			arg1);
	}
	QAndroidJniObject Keyframe::ofObject(jfloat arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.animation.Keyframe",
			"ofObject",
			"(F)Landroid/animation/Keyframe;",
			arg0);
	}
	jfloat Keyframe::getFraction()
	{
		return __thiz.callMethod<jfloat>(
			"getFraction",
			"()F");
	}
	void Keyframe::setInterpolator(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setInterpolator",
			"(Landroid/animation/TimeInterpolator;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject Keyframe::getInterpolator()
	{
		return __thiz.callObjectMethod(
			"getInterpolator",
			"()Landroid/animation/TimeInterpolator;");
	}
} // namespace __jni_impl::android::animation

namespace android::animation
{
	class Keyframe : public __jni_impl::android::animation::Keyframe
	{
	public:
		Keyframe(QAndroidJniObject obj) { __thiz = obj; }
		Keyframe()
		{
			__constructor();
		}
	};
} // namespace android::animation

#endif // ANDROID_ANIMATION_KEYFRAME

