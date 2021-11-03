#pragma once

#include "./SQLNonTransientException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLFeatureNotSupportedException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLFeatureNotSupportedException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLFeatureNotSupportedException(QJniObject obj);
		
		// Constructors
		SQLFeatureNotSupportedException();
		SQLFeatureNotSupportedException(JString arg0);
		SQLFeatureNotSupportedException(JThrowable arg0);
		SQLFeatureNotSupportedException(JString arg0, JString arg1);
		SQLFeatureNotSupportedException(JString arg0, JThrowable arg1);
		SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2);
		SQLFeatureNotSupportedException(JString arg0, JString arg1, JThrowable arg2);
		SQLFeatureNotSupportedException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
	};
} // namespace java::sql

