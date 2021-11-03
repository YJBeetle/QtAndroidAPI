#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class UnknownHostException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UnknownHostException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		UnknownHostException(QJniObject obj);
		
		// Constructors
		UnknownHostException();
		UnknownHostException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

