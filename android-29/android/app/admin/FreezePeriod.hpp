#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::time
{
	class MonthDay;
}

namespace android::app::admin
{
	class FreezePeriod : public __JniBaseClass
	{
	public:
		// Fields
		
		FreezePeriod(QAndroidJniObject obj);
		// Constructors
		FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1);
		FreezePeriod() = default;
		
		// Methods
		QAndroidJniObject getEnd();
		QAndroidJniObject getStart();
		jstring toString();
	};
} // namespace android::app::admin

