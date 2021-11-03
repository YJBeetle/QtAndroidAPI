#include "./R_animator.hpp"

namespace android
{
	// Fields
	jint R_animator::fade_in()
	{
		return getStaticField<jint>(
			"android.R$animator",
			"fade_in"
		);
	}
	jint R_animator::fade_out()
	{
		return getStaticField<jint>(
			"android.R$animator",
			"fade_out"
		);
	}
	
	// QAndroidJniObject forward
	R_animator::R_animator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_animator::R_animator()
		: JObject(
			"android.R$animator",
			"()V"
		) {}
	
	// Methods
} // namespace android

