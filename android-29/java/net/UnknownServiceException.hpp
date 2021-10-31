#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class UnknownServiceException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UnknownServiceException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownServiceException(QAndroidJniObject obj);
		
		// Constructors
		UnknownServiceException();
		UnknownServiceException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

