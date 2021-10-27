#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::file
{
	class ClosedDirectoryStreamException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		ClosedDirectoryStreamException(QAndroidJniObject obj);
		// Constructors
		ClosedDirectoryStreamException();
		
		// Methods
	};
} // namespace java::nio::file

