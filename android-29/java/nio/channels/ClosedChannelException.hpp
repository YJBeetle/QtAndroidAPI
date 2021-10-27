#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::nio::channels
{
	class ClosedChannelException : public java::io::IOException
	{
	public:
		// Fields
		
		ClosedChannelException(QAndroidJniObject obj);
		// Constructors
		ClosedChannelException();
		
		// Methods
	};
} // namespace java::nio::channels

