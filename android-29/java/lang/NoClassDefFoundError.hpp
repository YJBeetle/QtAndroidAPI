#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class NoClassDefFoundError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		NoClassDefFoundError(QAndroidJniObject obj);
		// Constructors
		NoClassDefFoundError();
		NoClassDefFoundError(jstring &arg0);
		NoClassDefFoundError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

