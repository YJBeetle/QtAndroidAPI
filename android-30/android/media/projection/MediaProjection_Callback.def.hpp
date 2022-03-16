#pragma once

#include "../../../JObject.hpp"

namespace android::media::projection
{
	class MediaProjection_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjection_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjection_Callback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaProjection_Callback();
		
		// Methods
		void onStop() const;
	};
} // namespace android::media::projection

