#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::util
{
	class Base64DataException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Base64DataException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		Base64DataException(QAndroidJniObject obj);
		
		// Constructors
		Base64DataException(jstring arg0);
		
		// Methods
	};
} // namespace android::util

