#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::ims
{
	class RcsUceAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RcsUceAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RcsUceAdapter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isUceSettingEnabled() const;
	};
} // namespace android::telephony::ims

