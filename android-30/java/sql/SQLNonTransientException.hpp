#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


namespace java::sql
{
	class SQLNonTransientException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLNonTransientException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLNonTransientException(QAndroidJniObject obj);
		
		// Constructors
		SQLNonTransientException();
		SQLNonTransientException(jstring arg0);
		SQLNonTransientException(jthrowable arg0);
		SQLNonTransientException(jstring arg0, jstring arg1);
		SQLNonTransientException(jstring arg0, jthrowable arg1);
		SQLNonTransientException(jstring arg0, jstring arg1, jint arg2);
		SQLNonTransientException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLNonTransientException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

