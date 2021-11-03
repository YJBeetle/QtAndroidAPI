#pragma once

#include "./ObjectStreamException.hpp"

class JString;

namespace java::io
{
	class InvalidClassException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		JString classname();
		
		// QJniObject forward
		template<typename ...Ts> explicit InvalidClassException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		InvalidClassException(QJniObject obj);
		
		// Constructors
		InvalidClassException(JString arg0);
		InvalidClassException(JString arg0, JString arg1);
		
		// Methods
		JString getMessage();
	};
} // namespace java::io

