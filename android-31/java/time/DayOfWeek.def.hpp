#pragma once

#include "../lang/Enum.def.hpp"

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
		DayOfWeek(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::DayOfWeek from(JObject arg0);
		static java::time::DayOfWeek of(jint arg0);
		static java::time::DayOfWeek valueOf(JString arg0);
		static JArray values();
		JObject adjustInto(JObject arg0) const;
		jint get(JObject arg0) const;
		JString getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const;
		jlong getLong(JObject arg0) const;
		jint getValue() const;
		jboolean isSupported(JObject arg0) const;
		java::time::DayOfWeek minus(jlong arg0) const;
		java::time::DayOfWeek plus(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
	};
} // namespace java::time

