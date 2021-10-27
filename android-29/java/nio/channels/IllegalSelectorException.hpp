#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"


namespace java::nio::channels
{
	class IllegalSelectorException : public java::lang::IllegalArgumentException
	{
	public:
		// Fields
		
		IllegalSelectorException(QAndroidJniObject obj);
		// Constructors
		IllegalSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

