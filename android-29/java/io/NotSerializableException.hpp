#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class NotSerializableException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		NotSerializableException(QAndroidJniObject obj);
		// Constructors
		NotSerializableException();
		NotSerializableException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

