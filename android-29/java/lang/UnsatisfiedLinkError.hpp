#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace java::lang
{
	class UnsatisfiedLinkError : public java::lang::LinkageError
	{
	public:
		// Fields
		
		UnsatisfiedLinkError(QAndroidJniObject obj);
		// Constructors
		UnsatisfiedLinkError();
		UnsatisfiedLinkError(jstring &arg0);
		UnsatisfiedLinkError(const QString &arg0);
		
		// Methods
	};
} // namespace java::lang

