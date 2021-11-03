#pragma once

#include "./LoginFilter.hpp"

namespace android::text
{
	class LoginFilter_UsernameFilterGMail : public android::text::LoginFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoginFilter_UsernameFilterGMail(const char *className, const char *sig, Ts...agv) : android::text::LoginFilter(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter_UsernameFilterGMail(QJniObject obj);
		
		// Constructors
		LoginFilter_UsernameFilterGMail();
		LoginFilter_UsernameFilterGMail(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0) const;
	};
} // namespace android::text

