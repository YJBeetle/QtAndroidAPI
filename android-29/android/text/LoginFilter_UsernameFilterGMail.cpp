#include "./LoginFilter_UsernameFilterGMail.hpp"

namespace android::text
{
	// Fields
	
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGMail",
			"()V"
		);
	}
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(jboolean &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$UsernameFilterGMail",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGMail::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

