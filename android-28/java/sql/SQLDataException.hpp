#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLDataException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLDataException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLDataException(QAndroidJniObject obj);
		
		// Constructors
		SQLDataException();
		SQLDataException(jstring arg0);
		SQLDataException(jthrowable arg0);
		SQLDataException(jstring arg0, jstring arg1);
		SQLDataException(jstring arg0, jthrowable arg1);
		SQLDataException(jstring arg0, jstring arg1, jint arg2);
		SQLDataException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLDataException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

