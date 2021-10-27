#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::channels
{
	class InterruptedByTimeoutException : public java::io::IOException
	{
	public:
		// Fields
		
		InterruptedByTimeoutException(QAndroidJniObject obj);
		// Constructors
		InterruptedByTimeoutException();
		
		// Methods
	};
} // namespace java::nio::channels

