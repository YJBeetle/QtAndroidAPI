#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class ZoneOffsetTransitionRule : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneOffsetTransitionRule(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffsetTransitionRule(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(java::time::Month arg0, jint arg1, java::time::DayOfWeek arg2, java::time::LocalTime arg3, jboolean arg4, java::time::zone::ZoneOffsetTransitionRule_TimeDefinition arg5, java::time::ZoneOffset arg6, java::time::ZoneOffset arg7, java::time::ZoneOffset arg8);
		QAndroidJniObject createTransition(jint arg0);
		jboolean equals(jobject arg0);
		jint getDayOfMonthIndicator();
		QAndroidJniObject getDayOfWeek();
		QAndroidJniObject getLocalTime();
		QAndroidJniObject getMonth();
		QAndroidJniObject getOffsetAfter();
		QAndroidJniObject getOffsetBefore();
		QAndroidJniObject getStandardOffset();
		QAndroidJniObject getTimeDefinition();
		jint hashCode();
		jboolean isMidnightEndOfDay();
		jstring toString();
	};
} // namespace java::time::zone

