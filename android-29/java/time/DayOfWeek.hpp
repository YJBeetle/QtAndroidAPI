#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Enum.hpp"

namespace java::time::format
{
	class TextStyle;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Locale;
}

namespace java::time
{
	class DayOfWeek : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::DayOfWeek FRIDAY();
		static java::time::DayOfWeek MONDAY();
		static java::time::DayOfWeek SATURDAY();
		static java::time::DayOfWeek SUNDAY();
		static java::time::DayOfWeek THURSDAY();
		static java::time::DayOfWeek TUESDAY();
		static java::time::DayOfWeek WEDNESDAY();
		
		// QJniObject forward
		template<typename ...Ts> explicit DayOfWeek(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DayOfWeek(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::DayOfWeek from(__JniBaseClass arg0);
		static java::time::DayOfWeek of(jint arg0);
		static java::time::DayOfWeek valueOf(jstring arg0);
		static jarray values();
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		jint get(__JniBaseClass arg0);
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jlong getLong(__JniBaseClass arg0);
		jint getValue();
		jboolean isSupported(__JniBaseClass arg0);
		java::time::DayOfWeek minus(jlong arg0);
		java::time::DayOfWeek plus(jlong arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
	};
} // namespace java::time

