#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class StreamCorruptedException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		StreamCorruptedException(QAndroidJniObject obj);
		// Constructors
		StreamCorruptedException();
		StreamCorruptedException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

