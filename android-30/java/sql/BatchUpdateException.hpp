#pragma once

#include "./SQLException.hpp"

class JIntArray;
class JLongArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JString;
class JThrowable;

namespace java::sql
{
	class BatchUpdateException : public java::sql::SQLException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BatchUpdateException(const char *className, const char *sig, Ts...agv) : java::sql::SQLException(className, sig, std::forward<Ts>(agv)...) {}
		BatchUpdateException(QJniObject obj);
		
		// Constructors
		BatchUpdateException();
		BatchUpdateException(JIntArray arg0);
		BatchUpdateException(JThrowable arg0);
		BatchUpdateException(JIntArray arg0, JThrowable arg1);
		BatchUpdateException(JString arg0, JIntArray arg1);
		BatchUpdateException(JString arg0, JIntArray arg1, JThrowable arg2);
		BatchUpdateException(JString arg0, JString arg1, JIntArray arg2);
		BatchUpdateException(JString arg0, JString arg1, JIntArray arg2, JThrowable arg3);
		BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3);
		BatchUpdateException(JString arg0, JString arg1, jint arg2, JIntArray arg3, JThrowable arg4);
		BatchUpdateException(JString arg0, JString arg1, jint arg2, JLongArray arg3, JThrowable arg4);
		
		// Methods
		JLongArray getLargeUpdateCounts();
		JIntArray getUpdateCounts();
	};
} // namespace java::sql

