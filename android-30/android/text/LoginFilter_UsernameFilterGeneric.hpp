#pragma once

#include "../../__JniBaseClass.hpp"
#include "./LoginFilter.hpp"


namespace android::text
{
	class LoginFilter_UsernameFilterGeneric : public android::text::LoginFilter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LoginFilter_UsernameFilterGeneric(const char *className, const char *sig, Ts...agv) : android::text::LoginFilter(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter_UsernameFilterGeneric(QAndroidJniObject obj);
		
		// Constructors
		LoginFilter_UsernameFilterGeneric();
		LoginFilter_UsernameFilterGeneric(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0);
	};
} // namespace android::text
