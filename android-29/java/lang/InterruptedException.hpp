#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class InterruptedException : public java::lang::Exception
	{
	public:
		// Fields
		
		InterruptedException(QAndroidJniObject obj);
		// Constructors
		InterruptedException();
		InterruptedException(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

