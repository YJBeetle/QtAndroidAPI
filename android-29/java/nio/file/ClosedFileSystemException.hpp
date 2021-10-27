#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::file
{
	class ClosedFileSystemException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		ClosedFileSystemException(QAndroidJniObject obj);
		// Constructors
		ClosedFileSystemException();
		
		// Methods
	};
} // namespace java::nio::file

