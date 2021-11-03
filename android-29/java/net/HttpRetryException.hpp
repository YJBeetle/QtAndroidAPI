#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class HttpRetryException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpRetryException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		HttpRetryException(QJniObject obj);
		
		// Constructors
		HttpRetryException(jstring arg0, jint arg1);
		HttpRetryException(jstring arg0, jint arg1, jstring arg2);
		
		// Methods
		jstring getLocation();
		jstring getReason();
		jint responseCode();
	};
} // namespace java::net

