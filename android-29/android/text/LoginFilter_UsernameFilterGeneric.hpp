#pragma once

#include "../../__JniBaseClass.hpp"
#include "./LoginFilter.hpp"


namespace android::text
{
	class LoginFilter_UsernameFilterGeneric : public android::text::LoginFilter
	{
	public:
		// Fields
		
		LoginFilter_UsernameFilterGeneric(QAndroidJniObject obj);
		// Constructors
		LoginFilter_UsernameFilterGeneric();
		LoginFilter_UsernameFilterGeneric(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace android::text

