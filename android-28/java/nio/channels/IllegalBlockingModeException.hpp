#pragma once

#include "../../lang/IllegalStateException.hpp"

namespace java::nio::channels
{
	class IllegalBlockingModeException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalBlockingModeException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalBlockingModeException(QAndroidJniObject obj) : java::lang::IllegalStateException(obj) {}
		
		// Constructors
		IllegalBlockingModeException();
		
		// Methods
	};
} // namespace java::nio::channels

