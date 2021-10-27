#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"
#include "./IncompatibleClassChangeError.hpp"


namespace java::lang
{
	class InstantiationError : public java::lang::IncompatibleClassChangeError
	{
	public:
		// Fields
		
		InstantiationError(QAndroidJniObject obj);
		// Constructors
		InstantiationError();
		InstantiationError(jstring &arg0);
		InstantiationError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

