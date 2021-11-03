#pragma once

#include "../../../JObject.hpp"


namespace android::telephony::ims
{
	class RcsUceAdapter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RcsUceAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RcsUceAdapter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isUceSettingEnabled();
	};
} // namespace android::telephony::ims

