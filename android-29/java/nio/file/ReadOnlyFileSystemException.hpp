#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/UnsupportedOperationException.hpp"


namespace java::nio::file
{
	class ReadOnlyFileSystemException : public java::lang::UnsupportedOperationException
	{
	public:
		// Fields
		
		ReadOnlyFileSystemException(QAndroidJniObject obj);
		// Constructors
		ReadOnlyFileSystemException();
		
		// Methods
	};
} // namespace java::nio::file

