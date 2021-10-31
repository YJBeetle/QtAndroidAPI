#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CellLocation : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellLocation(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CellLocation(QAndroidJniObject obj);
		
		// Constructors
		CellLocation();
		
		// Methods
		static android::telephony::CellLocation getEmpty();
		static void requestLocationUpdate();
	};
} // namespace android::telephony

