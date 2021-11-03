#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"
#include "./SQLNonTransientException.hpp"


namespace java::sql
{
	class SQLFeatureNotSupportedException : public java::sql::SQLNonTransientException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLFeatureNotSupportedException(const char *className, const char *sig, Ts...agv) : java::sql::SQLNonTransientException(className, sig, std::forward<Ts>(agv)...) {}
		SQLFeatureNotSupportedException(QAndroidJniObject obj);
		
		// Constructors
		SQLFeatureNotSupportedException();
		SQLFeatureNotSupportedException(jstring arg0);
		SQLFeatureNotSupportedException(jthrowable arg0);
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1);
		SQLFeatureNotSupportedException(jstring arg0, jthrowable arg1);
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2);
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLFeatureNotSupportedException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
	};
} // namespace java::sql

