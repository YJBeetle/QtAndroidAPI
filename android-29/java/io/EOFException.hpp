#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class EOFException : public java::io::IOException
	{
	public:
		// Fields
		
		EOFException(QAndroidJniObject obj);
		// Constructors
		EOFException();
		EOFException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

