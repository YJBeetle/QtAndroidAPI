#pragma once

#include "../lang/Enum.hpp"

class JArray;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DayOfWeek(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DayOfWeek(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::DayOfWeek from(JObject arg0);
		static java::time::DayOfWeek of(jint arg0);
		static java::time::DayOfWeek valueOf(JString arg0);
		static JArray values();
		JObject adjustInto(JObject arg0);
		jint get(JObject arg0);
		JString getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jlong getLong(JObject arg0);
		jint getValue();
		jboolean isSupported(JObject arg0);
		java::time::DayOfWeek minus(jlong arg0);
		java::time::DayOfWeek plus(jlong arg0);
		JObject query(JObject arg0);
		java::time::temporal::ValueRange range(JObject arg0);
	};
} // namespace java::time

