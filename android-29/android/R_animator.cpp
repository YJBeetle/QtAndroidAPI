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
	
	// QJniObject forward
	R_animator::R_animator(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_animator::R_animator()
		: __JniBaseClass(
			"android.R$animator",
			"()V"
		) {}
	
	// Methods
} // namespace android

