#pragma once

#include "./LoginFilter.hpp"

namespace android::text
{
	class LoginFilter_PasswordFilterGMail : public android::text::LoginFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LoginFilter_PasswordFilterGMail(const char *className, const char *sig, Ts...agv) : android::text::LoginFilter(className, sig, std::forward<Ts>(agv)...) {}
		LoginFilter_PasswordFilterGMail(QJniObject obj);
		
		// Constructors
		LoginFilter_PasswordFilterGMail();
		LoginFilter_PasswordFilterGMail(jboolean arg0);
		
		// Methods
		jboolean isAllowed(jchar arg0) const;
	};
} // namespace android::text

