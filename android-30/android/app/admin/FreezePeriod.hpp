#pragma once

#include "../../../JString.hpp"
#include "../../../java/time/MonthDay.def.hpp"
#include "./FreezePeriod.def.hpp"

namespace android::app::admin
{
	// Fields
	
	// Constructors
	inline FreezePeriod::FreezePeriod(java::time::MonthDay arg0, java::time::MonthDay arg1)
		: JObject(
			"android.app.admin.FreezePeriod",
			"(Ljava/time/MonthDay;Ljava/time/MonthDay;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::time::MonthDay FreezePeriod::getEnd() const
	{
		return callObjectMethod(
			"getEnd",
			"()Ljava/time/MonthDay;"
		);
	}
	inline java::time::MonthDay FreezePeriod::getStart() const
	{
		return callObjectMethod(
			"getStart",
			"()Ljava/time/MonthDay;"
		);
	}
	inline JString FreezePeriod::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::admin

// Base class headers

