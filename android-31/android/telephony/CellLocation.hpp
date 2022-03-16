#pragma once

#include "../../JObject.hpp"

namespace android::telephony
{
	class CellLocation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellLocation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellLocation(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CellLocation();
		
		// Methods
		static android::telephony::CellLocation getEmpty();
		static void requestLocationUpdate();
	};
} // namespace android::telephony

