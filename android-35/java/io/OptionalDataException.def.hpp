#pragma once

#include "./ObjectStreamException.def.hpp"

namespace java::io
{
	class OptionalDataException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		jboolean eof();
		jint length();
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalDataException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDataException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

