#pragma once

#include "../../../java/lang/Exception.hpp"

class JString;

namespace javax::security::auth
{
	class DestroyFailedException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DestroyFailedException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		DestroyFailedException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		DestroyFailedException();
		DestroyFailedException(JString arg0);
		
		// Methods
	};
} // namespace javax::security::auth

