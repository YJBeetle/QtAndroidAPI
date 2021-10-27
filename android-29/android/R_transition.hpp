#pragma once

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_transition : public __JniBaseClass
	{
	public:
		// Fields
		static jint explode();
		static jint fade();
		static jint move();
		static jint no_transition();
		static jint slide_bottom();
		static jint slide_left();
		static jint slide_right();
		static jint slide_top();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	jint R_transition::explode()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"explode"
		);
	}
	jint R_transition::fade()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"fade"
		);
	}
	jint R_transition::move()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"move"
		);
	}
	jint R_transition::no_transition()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"no_transition"
		);
	}
	jint R_transition::slide_bottom()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"slide_bottom"
		);
	}
	jint R_transition::slide_left()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"slide_left"
		);
	}
	jint R_transition::slide_right()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"slide_right"
		);
	}
	jint R_transition::slide_top()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$transition",
			"slide_top"
		);
	}
	
	// Constructors
	void R_transition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$transition",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_transition : public __jni_impl::android::R_transition
	{
	public:
		R_transition(QAndroidJniObject obj) { __thiz = obj; }
		R_transition()
		{
			__constructor();
		}
	};
} // namespace android

