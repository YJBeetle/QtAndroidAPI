#pragma once

#include "../lang/Exception.hpp"

class JString;
class JThrowable;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SQLException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SQLException(QJniObject obj);
		
		// Constructors
		SQLException();
		SQLException(JString arg0);
		SQLException(JThrowable arg0);
		SQLException(JString arg0, JString arg1);
		SQLException(JString arg0, JThrowable arg1);
		SQLException(JString arg0, JString arg1, jint arg2);
		SQLException(JString arg0, JString arg1, JThrowable arg2);
		SQLException(JString arg0, JString arg1, jint arg2, JThrowable arg3);
		
		// Methods
		jint getErrorCode();
		java::sql::SQLException getNextException();
		JString getSQLState();
		JObject iterator();
		void setNextException(java::sql::SQLException arg0);
	};
} // namespace java::sql

