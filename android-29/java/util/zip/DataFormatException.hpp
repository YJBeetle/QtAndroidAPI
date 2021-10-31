#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"


namespace java::util::zip
{
	class DataFormatException : public java::lang::Exception
	{
	public:
		// Fields
		
		DataFormatException(QAndroidJniObject obj);
		// Constructors
		DataFormatException();
		DataFormatException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::zip

