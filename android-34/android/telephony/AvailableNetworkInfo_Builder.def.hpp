#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class AvailableNetworkInfo;
}

namespace android::telephony
{
	class AvailableNetworkInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AvailableNetworkInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AvailableNetworkInfo_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AvailableNetworkInfo_Builder(jint arg0);
		
		// Methods
		android::telephony::AvailableNetworkInfo build() const;
		android::telephony::AvailableNetworkInfo_Builder setMccMncs(JObject arg0) const;
		android::telephony::AvailableNetworkInfo_Builder setPriority(jint arg0) const;
		android::telephony::AvailableNetworkInfo_Builder setRadioAccessSpecifiers(JObject arg0) const;
	};
} // namespace android::telephony

