#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class KeyedFrequencyCap;
}
namespace java::time
{
	class Duration;
}

namespace android::adservices::common
{
	class KeyedFrequencyCap_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyedFrequencyCap_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyedFrequencyCap_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		KeyedFrequencyCap_Builder(jint arg0, jint arg1, java::time::Duration arg2);
		
		// Methods
		android::adservices::common::KeyedFrequencyCap build() const;
		android::adservices::common::KeyedFrequencyCap_Builder setAdCounterKey(jint arg0) const;
		android::adservices::common::KeyedFrequencyCap_Builder setInterval(java::time::Duration arg0) const;
		android::adservices::common::KeyedFrequencyCap_Builder setMaxCount(jint arg0) const;
	};
} // namespace android::adservices::common

