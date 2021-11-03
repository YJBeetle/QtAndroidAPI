#pragma once

#include "./IOException.hpp"

class JString;

namespace java::io
{
	class ObjectStreamException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectStreamException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamException(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

