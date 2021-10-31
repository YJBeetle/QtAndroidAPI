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
		
		// QJniObject forward
		template<typename ...Ts> explicit FreezePeriod(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FreezePeriod(QJniObject obj);
		
		// Constructors
		FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1);
		
		// Methods
		java::time::MonthDay getEnd();
		java::time::MonthDay getStart();
		jstring toString();
	};
} // namespace android::app::admin

