#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class OverlappingFileLockException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		OverlappingFileLockException(QAndroidJniObject obj);
		// Constructors
		OverlappingFileLockException();
		
		// Methods
	};
} // namespace java::nio::channels

