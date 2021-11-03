#pragma once

#include "./ObjectStreamException.hpp"

class JString;

namespace java::io
{
	class StreamCorruptedException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamCorruptedException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		StreamCorruptedException(QJniObject obj);
		
		// Constructors
		StreamCorruptedException();
		StreamCorruptedException(JString arg0);
		
		// Methods
	};
} // namespace java::io

