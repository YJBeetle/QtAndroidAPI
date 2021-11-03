#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class AudioRecord_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString CHANNELS();
		static JString ENCODING();
		static JString LATENCY();
		static JString SAMPLERATE();
		static JString SOURCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioRecord_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord_MetricsConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

