#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::security::auth
{
	class DestroyFailedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DestroyFailedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DestroyFailedException(QAndroidJniObject obj);
		
		// Constructors
		DestroyFailedException();
		DestroyFailedException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::auth

