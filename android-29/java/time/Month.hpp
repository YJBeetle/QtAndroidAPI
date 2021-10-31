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
	class Month : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject APRIL();
		static QAndroidJniObject AUGUST();
		static QAndroidJniObject DECEMBER();
		static QAndroidJniObject FEBRUARY();
		static QAndroidJniObject JANUARY();
		static QAndroidJniObject JULY();
		static QAndroidJniObject JUNE();
		static QAndroidJniObject MARCH();
		static QAndroidJniObject MAY();
		static QAndroidJniObject NOVEMBER();
		static QAndroidJniObject OCTOBER();
		static QAndroidJniObject SEPTEMBER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Month(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Month(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		jint firstDayOfYear(jboolean arg0);
		QAndroidJniObject firstMonthOfQuarter();
		jint get(__JniBaseClass arg0);
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jlong getLong(__JniBaseClass arg0);
		jint getValue();
		jboolean isSupported(__JniBaseClass arg0);
		jint length(jboolean arg0);
		jint maxLength();
		jint minLength();
		QAndroidJniObject minus(jlong arg0);
		QAndroidJniObject plus(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
	};
} // namespace java::time

