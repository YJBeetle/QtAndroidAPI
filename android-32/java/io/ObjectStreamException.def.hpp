#pragma once

#include "./IOException.def.hpp"

class JString;
class JThrowable;

namespace java::io
{
	class ObjectStreamException : public java::io::IOException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ObjectStreamException(const char *className, const char *sig, Ts...agv) : java::io::IOException(className, sig, std::forward<Ts>(agv)...) {}
		ObjectStreamException(QJniObject obj) : java::io::IOException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

