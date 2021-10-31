#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Date.hpp"

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
		
		Time(QAndroidJniObject obj);
		// Constructors
		Time(jlong arg0);
		Time(jint arg0, jint arg1, jint arg2);
		Time() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(java::time::LocalTime arg0);
		jint getDate();
		jint getDay();
		jint getMonth();
		jint getYear();
		void setDate(jint arg0);
		void setMonth(jint arg0);
		void setTime(jlong arg0);
		void setYear(jint arg0);
		QAndroidJniObject toInstant();
		QAndroidJniObject toLocalTime();
		jstring toString();
	};
} // namespace java::sql

