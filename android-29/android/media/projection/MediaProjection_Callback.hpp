#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::projection
{
	class MediaProjection_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjection_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjection_Callback(QJniObject obj);
		
		// Constructors
		MediaProjection_Callback();
		
		// Methods
		void onStop();
	};
} // namespace android::media::projection

