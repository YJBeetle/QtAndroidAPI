#include "./R_transition.hpp"

namespace android
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
	
	R_transition::R_transition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_transition::R_transition()
	{
		__thiz = QAndroidJniObject(
			"android.R$transition",
			"()V"
		);
	}
	
	// Methods
} // namespace android

