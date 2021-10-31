#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class HttpRetryException : public java::io::IOException
	{
	public:
		// Fields
		
		HttpRetryException(QAndroidJniObject obj);
		// Constructors
		HttpRetryException(jstring arg0, jint arg1);
		HttpRetryException(jstring arg0, jint arg1, jstring arg2);
		HttpRetryException() = default;
		
		// Methods
		jstring getLocation();
		jstring getReason();
		jint responseCode();
	};
} // namespace java::net

