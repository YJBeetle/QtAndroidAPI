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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamCorruptedException(const char *className, const char *sig, Ts...agv) : java::io::ObjectStreamException(className, sig, std::forward<Ts>(agv)...) {}
		StreamCorruptedException(QAndroidJniObject obj);
		
		// Constructors
		StreamCorruptedException();
		StreamCorruptedException(jstring arg0);
		
		// Methods
	};
} // namespace java::io

