#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class AcceptPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AcceptPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		AcceptPendingException(QAndroidJniObject obj);
		
		// Constructors
		AcceptPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

