#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/io/IOException.hpp"


namespace android::util
{
	class MalformedJsonException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedJsonException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedJsonException(QAndroidJniObject obj);
		
		// Constructors
		MalformedJsonException(jstring arg0);
		
		// Methods
	};
} // namespace android::util

