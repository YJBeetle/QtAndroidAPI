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
		
		TvInputManager_TvInputCallback(QAndroidJniObject obj);
		// Constructors
		TvInputManager_TvInputCallback();
		
		// Methods
		void onInputAdded(jstring arg0);
		void onInputAdded(const QString &arg0);
		void onInputRemoved(jstring arg0);
		void onInputRemoved(const QString &arg0);
		void onInputStateChanged(jstring arg0, jint arg1);
		void onInputStateChanged(const QString &arg0, jint arg1);
		void onInputUpdated(jstring arg0);
		void onInputUpdated(const QString &arg0);
		void onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0);
	};
} // namespace android::media::tv

