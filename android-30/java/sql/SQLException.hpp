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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SQLException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
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
		java::sql::SQLException getNextException();
		jstring getSQLState();
		__JniBaseClass iterator();
		void setNextException(java::sql::SQLException arg0);
	};
} // namespace java::sql

