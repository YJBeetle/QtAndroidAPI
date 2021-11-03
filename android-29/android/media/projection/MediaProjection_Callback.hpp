#pragma once

#include "../../../JObject.hpp"


namespace android::media::projection
{
	class MediaProjection_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaProjection_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjection_Callback(QAndroidJniObject obj);
		
		// Constructors
		MediaProjection_Callback();
		
		// Methods
		void onStop();
	};
} // namespace android::media::projection

