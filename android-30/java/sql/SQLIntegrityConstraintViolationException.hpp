#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLIntegrityConstraintViolationException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLIntegrityConstraintViolationException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLIntegrityConstraintViolationException(QAndroidJniObject obj);
		
		// Constructors
		SQLIntegrityConstraintViolationException();
		SQLIntegrityConstraintViolationException(jstring arg0);
		SQLIntegrityConstraintViolationException(jthrowable arg0);
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1);
		SQLIntegrityConstraintViolationException(jstring arg0, jthrowable arg1);
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2);
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLIntegrityConstraintViolationException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

