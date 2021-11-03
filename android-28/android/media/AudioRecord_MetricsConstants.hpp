#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class AudioRecord_MetricsConstants : public JObject
	{
	public:
		// Fields
		static jstring CHANNELS();
		static jstring ENCODING();
		static jstring LATENCY();
		static jstring SAMPLERATE();
		static jstring SOURCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioRecord_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioRecord_MetricsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

