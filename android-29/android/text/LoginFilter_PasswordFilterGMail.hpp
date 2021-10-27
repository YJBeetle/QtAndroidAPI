#pragma once

#include "../../__JniBaseClass.hpp"
#include "./LoginFilter.hpp"


namespace android::text
{
	class LoginFilter_PasswordFilterGMail : public android::text::LoginFilter
	{
	public:
		// Fields
		
		LoginFilter_PasswordFilterGMail(QAndroidJniObject obj);
		// Constructors
		LoginFilter_PasswordFilterGMail();
		LoginFilter_PasswordFilterGMail(jboolean &arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace android::text

