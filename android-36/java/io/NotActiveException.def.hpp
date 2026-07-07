#pragma once

#include "./ObjectStreamException.def.hpp"

class JString;

namespace java::io
{
	class NotActiveException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NotActiveException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		NotActiveException(QJniObject obj) : java::io::ObjectStreamException(obj) {}
		
		// Constructors
		NotActiveException();
		NotActiveException(JString arg0);
		
		// Methods
	};
} // namespace java::io

