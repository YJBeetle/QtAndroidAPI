#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "./SQLException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}

namespace java::sql
{
	class BatchUpdateException : public java::sql::SQLException
	{
	public:
		// Fields
		
		BatchUpdateException(QAndroidJniObject obj);
		// Constructors
		BatchUpdateException();
		BatchUpdateException(jintArray arg0);
		BatchUpdateException(jthrowable arg0);
		BatchUpdateException(jintArray arg0, jthrowable arg1);
		BatchUpdateException(jstring arg0, jintArray arg1);
		BatchUpdateException(jstring arg0, jintArray arg1, jthrowable arg2);
		BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2);
		BatchUpdateException(jstring arg0, jstring arg1, jintArray arg2, jthrowable arg3);
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3);
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jintArray arg3, jthrowable arg4);
		BatchUpdateException(jstring arg0, jstring arg1, jint arg2, jlongArray arg3, jthrowable arg4);
		
		// Methods
		jlongArray getLargeUpdateCounts();
		jintArray getUpdateCounts();
	};
} // namespace java::sql

