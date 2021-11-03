#pragma once

#include "./ObjectStreamException.hpp"

class JString;

namespace java::io
{
	class NotSerializableException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotSerializableException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		NotSerializableException(QAndroidJniObject obj);
		
		// Constructors
		NotSerializableException();
		NotSerializableException(JString arg0);
		
		// Methods
	};
} // namespace java::io

