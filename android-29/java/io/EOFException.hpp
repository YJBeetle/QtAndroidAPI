#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class EOFException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EOFException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		EOFException(QAndroidJniObject obj);
		
		// Constructors
		EOFException();
		EOFException(JString arg0);
		
		// Methods
	};
} // namespace java::io

