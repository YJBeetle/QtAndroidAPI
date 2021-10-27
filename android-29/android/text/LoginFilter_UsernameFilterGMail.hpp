#pragma once

#include "../../__JniBaseClass.hpp"
#include "./LoginFilter.hpp"


namespace android::text
{
	class LoginFilter_UsernameFilterGMail : public android::text::LoginFilter
	{
	public:
		// Fields
		
		LoginFilter_UsernameFilterGMail(QAndroidJniObject obj);
		// Constructors
		LoginFilter_UsernameFilterGMail();
		LoginFilter_UsernameFilterGMail(jboolean &arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace android::text

