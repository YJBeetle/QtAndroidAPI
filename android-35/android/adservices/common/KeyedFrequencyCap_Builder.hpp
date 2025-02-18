#pragma once

#include "./KeyedFrequencyCap.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./KeyedFrequencyCap_Builder.def.hpp"

namespace android::adservices::common
{
	// Fields
	
	// Constructors
	inline KeyedFrequencyCap_Builder::KeyedFrequencyCap_Builder(jint arg0, jint arg1, java::time::Duration arg2)
		: JObject(
			"android.adservices.common.KeyedFrequencyCap$Builder",
			"(IILjava/time/Duration;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline android::adservices::common::KeyedFrequencyCap KeyedFrequencyCap_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/common/KeyedFrequencyCap;"
		);
	}
	inline android::adservices::common::KeyedFrequencyCap_Builder KeyedFrequencyCap_Builder::setAdCounterKey(jint arg0) const
	{
		return callObjectMethod(
			"setAdCounterKey",
			"(I)Landroid/adservices/common/KeyedFrequencyCap$Builder;",
			arg0
		);
	}
	inline android::adservices::common::KeyedFrequencyCap_Builder KeyedFrequencyCap_Builder::setInterval(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setInterval",
			"(Ljava/time/Duration;)Landroid/adservices/common/KeyedFrequencyCap$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::KeyedFrequencyCap_Builder KeyedFrequencyCap_Builder::setMaxCount(jint arg0) const
	{
		return callObjectMethod(
			"setMaxCount",
			"(I)Landroid/adservices/common/KeyedFrequencyCap$Builder;",
			arg0
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
