#include "./LoginFilter_PasswordFilterGMail.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(QAndroidJniObject obj) : android::text::LoginFilter(obj) {}
	
	// Constructors
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail()
		: android::text::LoginFilter(
			"android.text.LoginFilter$PasswordFilterGMail",
			"()V"
		) {}
	LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$PasswordFilterGMail",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jboolean LoginFilter_PasswordFilterGMail::isAllowed(jchar arg0)
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

