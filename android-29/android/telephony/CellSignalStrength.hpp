#pragma once

#include "../../JObject.hpp"

class JObject;

namespace android::telephony
{
	class CellSignalStrength : public JObject
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_GOOD();
		static jint SIGNAL_STRENGTH_GREAT();
		static jint SIGNAL_STRENGTH_MODERATE();
		static jint SIGNAL_STRENGTH_NONE_OR_UNKNOWN();
		static jint SIGNAL_STRENGTH_POOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CellSignalStrength(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CellSignalStrength(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint getAsuLevel();
		jint getDbm();
		jint getLevel();
		jint hashCode();
	};
} // namespace android::telephony

