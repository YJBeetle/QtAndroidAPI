#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::util
{
	class Base64DataException : public java::io::IOException
	{
	public:
		// Fields
		
		Base64DataException(QAndroidJniObject obj);
		// Constructors
		Base64DataException(jstring arg0);
		Base64DataException() = default;
		
		// Methods
	};
} // namespace android::util

