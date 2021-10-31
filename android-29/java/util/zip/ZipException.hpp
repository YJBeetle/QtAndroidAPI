#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"


namespace java::util::zip
{
	class ZipException : public java::io::IOException
	{
	public:
		// Fields
		
		ZipException(QAndroidJniObject obj);
		// Constructors
		ZipException();
		ZipException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::zip

