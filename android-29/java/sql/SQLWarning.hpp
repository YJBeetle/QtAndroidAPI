#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"


namespace java::sql
{
	class SQLWarning : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLWarning(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLWarning(QAndroidJniObject obj);
		
		// Constructors
		SQLWarning();
		SQLWarning(jstring arg0);
		SQLWarning(jthrowable arg0);
		SQLWarning(jstring arg0, jstring arg1);
		SQLWarning(jstring arg0, jthrowable arg1);
		SQLWarning(jstring arg0, jstring arg1, jint arg2);
		SQLWarning(jstring arg0, jstring arg1, jthrowable arg2);
		SQLWarning(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
		QAndroidJniObject getNextWarning();
		void setNextWarning(java::sql::SQLWarning arg0);
	};
} // namespace java::sql

