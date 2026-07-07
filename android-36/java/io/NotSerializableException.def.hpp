#pragma once

#include "./ObjectStreamException.def.hpp"

class JString;

namespace java::io
{
	class NotSerializableException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotSerializableException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		NotSerializableException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
		
		// Constructors
		NotSerializableException();
		NotSerializableException(JString arg0);
		
		// Methods
	};
} // namespace java::io

