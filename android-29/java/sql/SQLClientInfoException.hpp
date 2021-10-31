#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


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
		SQLClientInfoException(__JniBaseClass arg0);
		SQLClientInfoException(jstring arg0, __JniBaseClass arg1);
		SQLClientInfoException(__JniBaseClass arg0, jthrowable arg1);
		SQLClientInfoException(jstring arg0, jstring arg1, __JniBaseClass arg2);
		SQLClientInfoException(jstring arg0, __JniBaseClass arg1, jthrowable arg2);
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3);
		SQLClientInfoException(jstring arg0, jstring arg1, __JniBaseClass arg2, jthrowable arg3);
		SQLClientInfoException(jstring arg0, jstring arg1, jint arg2, __JniBaseClass arg3, jthrowable arg4);
		
		// Methods
		QAndroidJniObject getFailedProperties();
	};
} // namespace java::sql

