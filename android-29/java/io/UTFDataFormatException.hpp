#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"


namespace java::io
{
	class UTFDataFormatException : public java::io::IOException
	{
	public:
		// Fields
		
		UTFDataFormatException(QAndroidJniObject obj);
		// Constructors
		UTFDataFormatException();
		UTFDataFormatException(jstring &arg0);
		UTFDataFormatException(const QString &arg0);
		
		// Methods
	};
} // namespace java::io

