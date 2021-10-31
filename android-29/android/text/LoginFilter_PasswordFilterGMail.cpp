#include "./LoginFilter_PasswordFilterGMail.hpp"

namespace android::text
{
	// Fields
	
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail()
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$PasswordFilterGMail",
			"()V"
		);
	}
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.LoginFilter$PasswordFilterGMail",
			"(Z)V",
			arg0
		);
	}
	
	// Methods
	jboolean LoginFilter_PasswordFilterGMail::isAllowed(jchar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

