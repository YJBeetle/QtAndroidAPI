#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telephony
{
	class CellSignalStrength : public __JniBaseClass
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_GOOD();
		static jint SIGNAL_STRENGTH_GREAT();
		static jint SIGNAL_STRENGTH_MODERATE();
		static jint SIGNAL_STRENGTH_NONE_OR_UNKNOWN();
		static jint SIGNAL_STRENGTH_POOR();
		
		CellSignalStrength(QAndroidJniObject obj);
		// Constructors
		CellSignalStrength() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getDbm();
		jint getLevel();
		jint hashCode();
	};
} // namespace android::telephony

