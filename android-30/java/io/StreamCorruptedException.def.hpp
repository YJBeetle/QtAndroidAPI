#pragma once

#include "./ObjectStreamException.def.hpp"

class JString;

namespace java::io
{
	class StreamCorruptedException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamCorruptedException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		StreamCorruptedException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
		
		// Constructors
		StreamCorruptedException();
		StreamCorruptedException(JString arg0);
		
		// Methods
	};
} // namespace java::io

