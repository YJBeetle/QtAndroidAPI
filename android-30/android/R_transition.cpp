#include "./R_transition.hpp"

namespace android
{
	// Fields
	jint R_transition::explode()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"explode"
		);
	}
	jint R_transition::fade()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"fade"
		);
	}
	jint R_transition::move()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"move"
		);
	}
	jint R_transition::no_transition()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"no_transition"
		);
	}
	jint R_transition::slide_bottom()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_bottom"
		);
	}
	jint R_transition::slide_left()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_left"
		);
	}
	jint R_transition::slide_right()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_right"
		);
	}
	jint R_transition::slide_top()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_top"
		);
	}
	
	// QJniObject forward
	R_transition::R_transition(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_transition::R_transition()
		: __JniBaseClass(
			"android.R$transition",
			"()V"
		) {}
	
	// Methods
} // namespace android

