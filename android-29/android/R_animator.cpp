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
	
	R_animator::R_animator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	R_animator::R_animator()
	{
		__thiz = QAndroidJniObject(
			"android.R$animator",
			"()V"
		);
	}
	
	// Methods
} // namespace android

