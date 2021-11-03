#include "../../../JString.hpp"
#include "../../../java/time/MonthDay.hpp"
#include "./FreezePeriod.hpp"

namespace android::app::admin
{
	// Fields
	
	// QAndroidJniObject forward
	FreezePeriod::FreezePeriod(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	FreezePeriod::FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1)
		: JObject(
			"android.app.admin.FreezePeriod",
			"(Ljava/time/MonthDay;Ljava/time/MonthDay;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::time::MonthDay FreezePeriod::getEnd() const
	{
		return callObjectMethod(
			"getEnd",
			"()Ljava/time/MonthDay;"
		);
	}
	java::time::MonthDay FreezePeriod::getStart() const
	{
		return callObjectMethod(
			"getStart",
			"()Ljava/time/MonthDay;"
		);
	}
	JString FreezePeriod::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::admin

