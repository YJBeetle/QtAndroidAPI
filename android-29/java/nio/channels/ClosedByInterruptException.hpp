#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "./ClosedChannelException.hpp"
#include "./AsynchronousCloseException.hpp"


namespace java::nio::channels
{
	class ClosedByInterruptException : public java::nio::channels::AsynchronousCloseException
	{
	public:
		// Fields
		
		ClosedByInterruptException(QAndroidJniObject obj);
		// Constructors
		ClosedByInterruptException();
		
		// Methods
	};
} // namespace java::nio::channels

