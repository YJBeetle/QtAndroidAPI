#pragma once

#include "../util/Date.hpp"

class JCharArray;
class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDate;
}

namespace java::sql
{
	class Date : public java::util::Date
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Date(const char *className, const char *sig, Ts...agv) : java::util::Date(className, sig, std::forward<Ts>(agv)...) {}
		Date(QAndroidJniObject obj) : java::util::Date(obj) {}
		
		// Constructors
		Date(jlong arg0);
		Date(jint arg0, jint arg1, jint arg2);
		
		// Methods
		static java::sql::Date valueOf(JString arg0);
		static java::sql::Date valueOf(java::time::LocalDate arg0);
		jint getHours() const;
		jint getMinutes() const;
		jint getSeconds() const;
		void setHours(jint arg0) const;
		void setMinutes(jint arg0) const;
		void setSeconds(jint arg0) const;
		void setTime(jlong arg0) const;
		java::time::Instant toInstant() const;
		java::time::LocalDate toLocalDate() const;
		JString toString() const;
	};
} // namespace java::sql

