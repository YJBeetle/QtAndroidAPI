#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLTransientException.hpp"


namespace java::sql
{
	class SQLTransientConnectionException : public java::sql::SQLTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLTransientConnectionException(const char *className, const char *sig, Ts...agv) : java::sql::SQLTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLTransientConnectionException(QAndroidJniObject obj);
		
		// Constructors
		SQLTransientConnectionException();
		SQLTransientConnectionException(jstring arg0);
		SQLTransientConnectionException(jthrowable arg0);
		SQLTransientConnectionException(jstring arg0, jstring arg1);
		SQLTransientConnectionException(jstring arg0, jthrowable arg1);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

