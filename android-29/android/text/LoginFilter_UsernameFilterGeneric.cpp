#include "./LoginFilter_UsernameFilterGeneric.hpp"

namespace android::text
{
	// Fields
	
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"()V"
		);
	}
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGeneric::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

