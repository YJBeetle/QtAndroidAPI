#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Exception.hpp"


namespace java::lang
{
	class CloneNotSupportedException : public java::lang::Exception
	{
	public:
		// Fields
		
		CloneNotSupportedException(QAndroidJniObject obj);
		// Constructors
		CloneNotSupportedException();
		CloneNotSupportedException(jstring &arg0);
		CloneNotSupportedException(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

