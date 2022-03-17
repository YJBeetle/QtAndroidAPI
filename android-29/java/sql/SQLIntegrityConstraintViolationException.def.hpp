#pragma once

#include "./SQLNonTransientException.def.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLIntegrityConstraintViolationException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLIntegrityConstraintViolationException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLIntegrityConstraintViolationException(QAndroidJniObject obj) : java::sql::SQLNonTransientException(obj) {}
		
		// Constructors
		SQLIntegrityConstraintViolationException();
		SQLIntegrityConstraintViolationException(JString arg0);
		SQLIntegrityConstraintViolationException(JThrowable arg0);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1);
		SQLIntegrityConstraintViolationException(JString arg0, JThrowable arg1);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, JThrowable arg2);
		SQLIntegrityConstraintViolationException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

