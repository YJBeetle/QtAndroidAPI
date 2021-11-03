#pragma once

#include "../io/IOException.hpp"

class JString;

namespace java::net
{
	class MalformedURLException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MalformedURLException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		MalformedURLException(QAndroidJniObject obj);
		
		// Constructors
		MalformedURLException();
		MalformedURLException(JString arg0);
		
		// Methods
	};
} // namespace java::net

