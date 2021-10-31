#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class ClassCircularityError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		ClassCircularityError(QAndroidJniObject obj);
		// Constructors
		ClassCircularityError();
		ClassCircularityError(jstring arg0);
		
		// Methods
	};
} // namespace java::lang

