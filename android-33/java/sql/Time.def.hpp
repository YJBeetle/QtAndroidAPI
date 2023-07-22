#pragma once

#include "../util/Date.def.hpp"

class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalTime;
}

namespace java::sql
{
	class Time : public java::util::Date
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Time(const char *className, const char *sig, Ts...agv) : java::util::Date(className, sig, std::forward<Ts>(agv)...) {}
		Time(QAndroidJniObject obj) : java::util::Date(obj) {}
		
		// Constructors
		Time(jlong arg0);
		Time(jint arg0, jint arg1, jint arg2);
		
		// Methods
		static java::sql::Time valueOf(JString arg0);
		static java::sql::Time valueOf(java::time::LocalTime arg0);
		jint getDate() const;
		jint getDay() const;
		jint getMonth() const;
		jint getYear() const;
		void setDate(jint arg0) const;
		void setMonth(jint arg0) const;
		void setTime(jlong arg0) const;
		void setYear(jint arg0) const;
		java::time::Instant toInstant() const;
		java::time::LocalTime toLocalTime() const;
		JString toString() const;
	};
} // namespace java::sql

