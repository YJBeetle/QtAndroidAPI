#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"

namespace java::util::concurrent::atomic
{
	class AtomicReferenceFieldUpdater;
}

namespace java::sql
{
	class SQLException : public java::lang::Exception
	{
	public:
		// Fields
		
		SQLException(QAndroidJniObject obj);
		// Constructors
		SQLException();
		SQLException(jstring arg0);
		SQLException(jthrowable arg0);
		SQLException(jstring arg0, jstring arg1);
		SQLException(jstring arg0, jthrowable arg1);
		SQLException(jstring arg0, jstring arg1, jint arg2);
		SQLException(jstring arg0, jstring arg1, jthrowable arg2);
		SQLException(jstring arg0, jstring arg1, jint arg2, jthrowable arg3);
		
		// Methods
		jint getErrorCode();
		QAndroidJniObject getNextException();
		jstring getSQLState();
		QAndroidJniObject iterator();
		void setNextException(java::sql::SQLException arg0);
	};
} // namespace java::sql

