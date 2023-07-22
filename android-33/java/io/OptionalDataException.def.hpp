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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OptionalDataException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDataException(QAndroidJniObject obj) : java::io::ObjectStreamException(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::io

