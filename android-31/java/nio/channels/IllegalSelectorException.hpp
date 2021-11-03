#pragma once

#include "../../lang/IllegalArgumentException.hpp"

namespace java::nio::channels
{
	class IllegalSelectorException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IllegalSelectorException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalArgumentException(className, sig, std::forward<Ts>(agv)...) {}
		IllegalSelectorException(QAndroidJniObject obj);
		
		// Constructors
		IllegalSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

