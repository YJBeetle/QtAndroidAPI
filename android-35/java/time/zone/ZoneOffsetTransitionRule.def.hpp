#pragma once

#include "../../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
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
		ZoneOffsetTransitionRule(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::zone::ZoneOffsetTransitionRule of(java::time::Month arg0, jint arg1, java::time::DayOfWeek arg2, java::time::LocalTime arg3, jboolean arg4, java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, java::time::ZoneOffset arg6, java::time::ZoneOffset arg7, java::time::ZoneOffset arg8);
		java::time::zone::ZoneOffsetTransition createTransition(jint arg0) const;
		jboolean equals(JObject arg0) const;
		jint getDayOfMonthIndicator() const;
		java::time::DayOfWeek getDayOfWeek() const;
		java::time::LocalTime getLocalTime() const;
		java::time::Month getMonth() const;
		java::time::ZoneOffset getOffsetAfter() const;
		java::time::ZoneOffset getOffsetBefore() const;
		java::time::ZoneOffset getStandardOffset() const;
		java::time::zone::ZoneOffsetTransitionRule_TimeDefinition getTimeDefinition() const;
		jint hashCode() const;
		jboolean isMidnightEndOfDay() const;
		JString toString() const;
	};
} // namespace java::time::zone

