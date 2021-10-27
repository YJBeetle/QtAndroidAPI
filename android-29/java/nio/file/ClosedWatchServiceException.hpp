#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::file
{
	class ClosedWatchServiceException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		ClosedWatchServiceException(QAndroidJniObject obj);
		// Constructors
		ClosedWatchServiceException();
		
		// Methods
	};
} // namespace java::nio::file

