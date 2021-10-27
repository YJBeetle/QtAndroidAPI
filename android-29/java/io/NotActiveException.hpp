#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./IOException.hpp"
#include "./ObjectStreamException.hpp"


namespace java::io
{
	class NotActiveException : public java::io::ObjectStreamException
	{
	public:
		// Fields
		
		NotActiveException(QAndroidJniObject obj);
		// Constructors
		NotActiveException();
		NotActiveException(jstring &arg0);
		NotActiveException(const QString &arg0);
		
		// Methods
	};
} // namespace java::io

