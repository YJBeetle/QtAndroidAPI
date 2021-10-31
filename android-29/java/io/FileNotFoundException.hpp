#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class FileNotFoundException : public java::io::IOException
	{
	public:
		// Fields
		
		FileNotFoundException(QAndroidJniObject obj);
		// Constructors
		FileNotFoundException();
		FileNotFoundException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

