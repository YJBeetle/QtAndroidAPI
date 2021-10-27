#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::util
{
	class MalformedJsonException : public java::io::IOException
	{
	public:
		// Fields
		
		MalformedJsonException(QAndroidJniObject obj);
		// Constructors
		MalformedJsonException(jstring &arg0);
		MalformedJsonException(const QString &arg0);
		MalformedJsonException() = default;
		
		// Methods
	};
} // namespace android::util

