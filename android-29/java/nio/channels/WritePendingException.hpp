#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalStateException.hpp"


namespace java::nio::channels
{
	class WritePendingException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		
		WritePendingException(QAndroidJniObject obj);
		// Constructors
		WritePendingException();
		
		// Methods
	};
} // namespace java::nio::channels

