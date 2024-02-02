#pragma once

#include "../../../java/io/IOException.def.hpp"

class JString;
class JThrowable;

namespace android::net::http
{
	class HttpException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HttpException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		HttpException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		HttpException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::net::http

