#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::channels
{
	class UnresolvedAddressException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		UnresolvedAddressException(QAndroidJniObject obj);
		// Constructors
		UnresolvedAddressException();
		
		// Methods
	};
} // namespace java::nio::channels

