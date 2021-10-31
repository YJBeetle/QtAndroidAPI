#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "../zip/ZipException.hpp"


namespace java::util::jar
{
	class JarException : public java::util::zip::ZipException
	{
	public:
		// Fields
		
		JarException(QAndroidJniObject obj);
		// Constructors
		JarException();
		JarException(jstring arg0);
		
		// Methods
	};
} // namespace java::util::jar

