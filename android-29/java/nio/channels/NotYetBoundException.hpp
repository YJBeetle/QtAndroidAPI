#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class NotYetBoundException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		NotYetBoundException(QAndroidJniObject obj);
		// Constructors
		NotYetBoundException();
		
		// Methods
	};
} // namespace java::nio::channels

