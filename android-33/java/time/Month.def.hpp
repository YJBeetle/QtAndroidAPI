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
	class Month : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::Month APRIL();
		static java::time::Month AUGUST();
		static java::time::Month DECEMBER();
		static java::time::Month FEBRUARY();
		static java::time::Month JANUARY();
		static java::time::Month JULY();
		static java::time::Month JUNE();
		static java::time::Month MARCH();
		static java::time::Month MAY();
		static java::time::Month NOVEMBER();
		static java::time::Month OCTOBER();
		static java::time::Month SEPTEMBER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Month(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Month(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::Month from(JObject arg0);
		static java::time::Month of(jint arg0);
		static java::time::Month valueOf(JString arg0);
		static JArray values();
		JObject adjustInto(JObject arg0) const;
		jint firstDayOfYear(jboolean arg0) const;
		java::time::Month firstMonthOfQuarter() const;
		jint get(JObject arg0) const;
		JString getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const;
		jlong getLong(JObject arg0) const;
		jint getValue() const;
		jboolean isSupported(JObject arg0) const;
		jint length(jboolean arg0) const;
		jint maxLength() const;
		jint minLength() const;
		java::time::Month minus(jlong arg0) const;
		java::time::Month plus(jlong arg0) const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
	};
} // namespace java::time

