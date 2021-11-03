#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


namespace java::sql
{
	class SQLClientInfoException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLClientInfoException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLClientInfoException(QJniObject obj);
		
		// Constructors
		SQLClientInfoException();
		SQLClientInfoException(JObject arg0);
		SQLClientInfoException(jstring arg0, JObject arg1);
		SQLClientInfoException(JObject arg0, jthrowable arg1);
		SQLClientInfoException(jstring arg0, jstring arg1, JObject arg2);
		SQLClientInfoException(jstring arg0, JObject arg1, jthrowable arg2);
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, JObject arg3);
		SQLClientInfoException(jstring arg0, jstring arg1, JObject arg2, jthrowable arg3);
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, JObject arg3, jthrowable arg4);
		
		// Methods
		JObject getFailedProperties();
	};
} // namespace java::sql

