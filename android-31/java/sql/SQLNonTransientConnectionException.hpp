#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLNonTransientConnectionException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLNonTransientConnectionException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLNonTransientConnectionException(QJniObject obj);
		
		// Constructors
		SQLNonTransientConnectionException();
		SQLNonTransientConnectionException(jstring arg0);
		SQLNonTransientConnectionException(jthrowable arg0);
		SQLNonTransientConnectionException(jstring arg0, jstring arg1);
		SQLNonTransientConnectionException(jstring arg0, jthrowable arg1);
		SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2);
		SQLNonTransientConnectionException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLNonTransientConnectionException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

