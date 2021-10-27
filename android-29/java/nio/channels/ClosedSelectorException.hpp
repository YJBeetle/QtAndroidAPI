#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class ClosedSelectorException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		ClosedSelectorException(QAndroidJniObject obj);
		// Constructors
		ClosedSelectorException();
		
		// Methods
	};
} // namespace java::nio::channels

