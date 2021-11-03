#include "./LoginFilter_UsernameFilterGMail.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(QAndroidJniObject obj) : android::text::LoginFilter(obj) {}
	
	// Constructors
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail()
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGMail",
			"()V"
		) {}
	LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGMail",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGMail::isAllowed(jchar arg0) const
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

