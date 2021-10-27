#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::channels
{
	class FileLockInterruptionException : public java::io::IOException
	{
	public:
		// Fields
		
		FileLockInterruptionException(QAndroidJniObject obj);
		// Constructors
		FileLockInterruptionException();
		
		// Methods
	};
} // namespace java::nio::channels

