#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"


namespace java::io
{
	class IOException : public java::lang::Exception
	{
	public:
		// Fields
		
		IOException(QAndroidJniObject obj);
		// Constructors
		IOException();
		IOException(jstring arg0);
		IOException(jthrowable arg0);
		IOException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::io

