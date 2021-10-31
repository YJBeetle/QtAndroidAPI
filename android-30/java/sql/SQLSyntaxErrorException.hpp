#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLSyntaxErrorException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLSyntaxErrorException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLSyntaxErrorException(QAndroidJniObject obj);
		
		// Constructors
		SQLSyntaxErrorException();
		SQLSyntaxErrorException(jstring arg0);
		SQLSyntaxErrorException(jthrowable arg0);
		SQLSyntaxErrorException(jstring arg0, jstring arg1);
		SQLSyntaxErrorException(jstring arg0, jthrowable arg1);
		SQLSyntaxErrorException(jstring arg0, jstring arg1, jint arg2);
		SQLSyntaxErrorException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLSyntaxErrorException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

