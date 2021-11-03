#include "../../../java/time/MonthDay.hpp"
#include "./FreezePeriod.hpp"

namespace android::app::admin
{
	// Fields
	
	// QJniObject forward
	FreezePeriod::FreezePeriod(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FreezePeriod::FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1)
		: JObject(
			"android.app.admin.FreezePeriod",
			"(Ljava/time/MonthDay;Ljava/time/MonthDay;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::time::MonthDay FreezePeriod::getEnd()
	{
		return callObjectMethod(
			"getEnd",
			"()Ljava/time/MonthDay;"
		);
	}
	java::time::MonthDay FreezePeriod::getStart()
	{
		return callObjectMethod(
			"getStart",
			"()Ljava/time/MonthDay;"
		);
	}
	jstring FreezePeriod::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::admin

