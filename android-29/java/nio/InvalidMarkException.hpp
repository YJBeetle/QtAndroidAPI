#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../lang/RuntimeException.hpp"
#include "../lang/IllegalStateException.hpp"


namespace java::nio
{
	class InvalidMarkException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InvalidMarkException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidMarkException(QAndroidJniObject obj);
		
		// Constructors
		InvalidMarkException();
		
		// Methods
	};
} // namespace java::nio

