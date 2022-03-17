#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::tv
{
	class TvContract_Channels_Logo : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract_Channels_Logo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Channels_Logo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::tv

