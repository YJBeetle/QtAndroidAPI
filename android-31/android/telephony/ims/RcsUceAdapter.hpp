#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::telephony::ims
{
	class RcsUceAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RcsUceAdapter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RcsUceAdapter(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean isUceSettingEnabled();
	};
} // namespace android::telephony::ims

