#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class ThreadDeath : public java::lang::Error
	{
	public:
		// Fields
		
		ThreadDeath(QAndroidJniObject obj);
		// Constructors
		ThreadDeath();
		
		// Methods
	};
} // namespace java::lang

