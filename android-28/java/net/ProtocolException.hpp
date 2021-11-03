#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"


namespace java::net
{
	class ProtocolException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProtocolException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ProtocolException(QAndroidJniObject obj);
		
		// Constructors
		ProtocolException();
		ProtocolException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

