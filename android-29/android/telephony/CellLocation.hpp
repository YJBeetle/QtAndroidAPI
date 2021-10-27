#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CellLocation : public __JniBaseClass
	{
	public:
		// Fields
		
		CellLocation(QAndroidJniObject obj);
		// Constructors
		CellLocation();
		
		// Methods
		static QAndroidJniObject getEmpty();
		static void requestLocationUpdate();
	};
} // namespace android::telephony

