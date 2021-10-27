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
		static QAndroidJniObject FRIDAY();
		static QAndroidJniObject MONDAY();
		static QAndroidJniObject SATURDAY();
		static QAndroidJniObject SUNDAY();
		static QAndroidJniObject THURSDAY();
		static QAndroidJniObject TUESDAY();
		static QAndroidJniObject WEDNESDAY();
		
		DayOfWeek(QAndroidJniObject obj);
		// Constructors
		DayOfWeek() = default;
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject of(jint arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		jint get(__JniBaseClass arg0);
		jstring getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1);
		jlong getLong(__JniBaseClass arg0);
		jint getValue();
		jboolean isSupported(__JniBaseClass arg0);
		QAndroidJniObject minus(jlong arg0);
		QAndroidJniObject plus(jlong arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
	};
} // namespace java::time

