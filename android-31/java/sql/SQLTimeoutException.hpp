#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"


namespace java::sql
{
	class SQLTimeoutException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLTimeoutException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTimeoutException(QAndroidJniObject obj);
		
		// Constructors
		SQLTimeoutException();
		SQLTimeoutException(jstring arg0);
		SQLTimeoutException(jthrowable arg0);
		SQLTimeoutException(jstring arg0, jstring arg1);
		SQLTimeoutException(jstring arg0, jthrowable arg1);
		SQLTimeoutException(jstring arg0, jstring arg1, jint arg2);
		SQLTimeoutException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLTimeoutException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

