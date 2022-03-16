#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class NotYetConnectedException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotYetConnectedException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		NotYetConnectedException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		NotYetConnectedException();
		
		// Methods
	};
} // namespace java::nio::channels

