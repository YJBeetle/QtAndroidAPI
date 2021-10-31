#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::tv
{
	class TvInputInfo;
}

namespace android::media::tv
{
	class TvInputManager_TvInputCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInputManager_TvInputCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvInputManager_TvInputCallback(QAndroidJniObject obj);
		
		// Constructors
		TvInputManager_TvInputCallback();
		
		// Methods
		void onInputAdded(jstring arg0);
		void onInputRemoved(jstring arg0);
		void onInputStateChanged(jstring arg0, jint arg1);
		void onInputUpdated(jstring arg0);
		void onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0);
	};
} // namespace android::media::tv

