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
namespace java::util
{
	class Locale;
}

namespace java::time::temporal
{
	class WeekFields : public JObject
	{
	public:
		// Fields
		static java::time::temporal::WeekFields ISO();
		static java::time::temporal::WeekFields SUNDAY_START();
		static JObject WEEK_BASED_YEARS();
		
		// QJniObject forward
		template<typename ...Ts> explicit WeekFields(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WeekFields(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::temporal::WeekFields of(java::util::Locale arg0);
		static java::time::temporal::WeekFields of(java::time::DayOfWeek arg0, jint arg1);
		JObject dayOfWeek() const;
		jboolean equals(JObject arg0) const;
		java::time::DayOfWeek getFirstDayOfWeek() const;
		jint getMinimalDaysInFirstWeek() const;
		jint hashCode() const;
		JString toString() const;
		JObject weekBasedYear() const;
		JObject weekOfMonth() const;
		JObject weekOfWeekBasedYear() const;
		JObject weekOfYear() const;
	};
} // namespace java::time::temporal

