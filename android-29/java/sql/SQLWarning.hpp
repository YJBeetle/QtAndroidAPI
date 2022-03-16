#pragma once

#include "./SQLException.hpp"

class JString;
class JThrowable;

namespace java::sql
{
	class SQLWarning : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLWarning(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		SQLWarning(QAndroidJniObject obj) : java::sql::SQLException(obj) {}
		
		// Constructors
		SQLWarning();
		SQLWarning(JString arg0);
		SQLWarning(JThrowable arg0);
		SQLWarning(JString arg0, JString arg1);
		SQLWarning(JString arg0, JThrowable arg1);
		SQLWarning(JString arg0, JString arg1, jint arg2);
		SQLWarning(JString arg0, JString arg1, JThrowable arg2);
		SQLWarning(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
		java::sql::SQLWarning getNextWarning() const;
		void setNextWarning(java::sql::SQLWarning arg0) const;
	};
} // namespace java::sql

