#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class ObjectStreamException : public java::io::IOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ObjectStreamException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamException(QAndroidJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

