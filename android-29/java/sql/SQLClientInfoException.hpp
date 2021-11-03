#pragma once

#include "./SQLException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLClientInfoException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLClientInfoException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLClientInfoException(QAndroidJniObject obj);
		
		// Constructors
		SQLClientInfoException();
		SQLClientInfoException(JObject arg0);
		SQLClientInfoException(JString arg0, JObject arg1);
		SQLClientInfoException(JObject arg0, JThrowable arg1);
		SQLClientInfoException(JString arg0, JString arg1, JObject arg2);
		SQLClientInfoException(JString arg0, JObject arg1, JThrowable arg2);
		SQLClientInfoException(JString arg0, JString arg1, jint arg2, JObject arg3);
		SQLClientInfoException(JString arg0, JString arg1, JObject arg2, JThrowable arg3);
		SQLClientInfoException(JString arg0, JString arg1, jint arg2, JObject arg3, JThrowable arg4);
		
		// Methods
		JObject getFailedProperties() const;
	};
} // namespace java::sql

