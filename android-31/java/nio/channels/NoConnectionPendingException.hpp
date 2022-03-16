#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class NoConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NoConnectionPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NoConnectionPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NoConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

