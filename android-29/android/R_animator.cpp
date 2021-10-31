#include "./R_animator.hpp"

namespace android
{
	// Fields
	jint R_animator::fade_in()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$animator",
			"fade_in"
		);
	}
	jint R_animator::fade_out()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$animator",
			"fade_out"
		);
	}
	
	// QAndroidJniObject forward
	R_animator::R_animator(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_animator::R_animator()
		: __JniBaseClass(
			"android.R$animator",
			"()V"
		) {}
	
	// Methods
} // namespace android

