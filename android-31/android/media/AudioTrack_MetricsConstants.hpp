#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::media
{
	class AudioTrack_MetricsConstants : public JObject
	{
	public:
		// Fields
		static JString CHANNELMASK();
		static JString CONTENTTYPE();
		static JString SAMPLERATE();
		static JString STREAMTYPE();
		static JString USAGE();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioTrack_MetricsConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioTrack_MetricsConstants(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

