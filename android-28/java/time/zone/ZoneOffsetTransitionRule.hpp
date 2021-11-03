#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time
{
	class DayOfWeek;
}
namespace java::time
{
	class LocalTime;
}
namespace java::time
{
	class Month;
}
namespace java::time
{
	class ZoneOffset;
}
namespace java::time::zone
{
	class ZoneOffsetTransition;
}
namespace java::time::zone
{
	class ZoneOffsetTransitionRule_TimeDefinition;
}

namespace java::time::zone
{
	class ZoneOffsetTransitionRule : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneOffsetTransitionRule(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffsetTransitionRule(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneOffsetTransitionRule of(java::time::Month arg0, jint arg1, java::time::DayOfWeek arg2, java::time::LocalTime arg3, jboolean arg4, java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, java::time::ZoneOffset arg6, java::time::ZoneOffset arg7, java::time::ZoneOffset arg8);
		java::time::zone::ZoneOffsetTransition createTransition(jint arg0);
		jboolean equals(jobject arg0);
		jint getDayOfMonthIndicator();
		java::time::DayOfWeek getDayOfWeek();
		java::time::LocalTime getLocalTime();
		java::time::Month getMonth();
		java::time::ZoneOffset getOffsetAfter();
		java::time::ZoneOffset getOffsetBefore();
		java::time::ZoneOffset getStandardOffset();
		java::time::zone::ZoneOffsetTransitionRule_TimeDefinition getTimeDefinition();
		jint hashCode();
		jboolean isMidnightEndOfDay();
		jstring toString();
	};
} // namespace java::time::zone

