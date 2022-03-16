#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class ConnectionPendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConnectionPendingException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectionPendingException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		ConnectionPendingException();
		
		// Methods
	};
} // namespace java::nio::channels

