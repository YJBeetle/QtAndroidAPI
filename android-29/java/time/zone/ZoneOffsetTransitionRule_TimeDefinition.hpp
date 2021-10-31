#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace java::time
{
	class LocalDateTime;
}
namespace java::time
{
	class ZoneOffset;
}

namespace java::time::zone
{
	class ZoneOffsetTransitionRule_TimeDefinition : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject STANDARD();
		static QAndroidJniObject UTC();
		static QAndroidJniObject WALL();
		
		ZoneOffsetTransitionRule_TimeDefinition(QAndroidJniObject obj);
		// Constructors
		ZoneOffsetTransitionRule_TimeDefinition() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		QAndroidJniObject createDateTime(java::time::LocalDateTime arg0, java::time::ZoneOffset arg1, java::time::ZoneOffset arg2);
	};
} // namespace java::time::zone

