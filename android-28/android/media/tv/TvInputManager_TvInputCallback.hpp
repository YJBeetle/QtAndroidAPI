#pragma once

#include "../../../JObject.hpp"

namespace android::media::tv
{
	class TvInputInfo;
}
class JString;

namespace android::media::tv
{
	class TvInputManager_TvInputCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInputManager_TvInputCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInputManager_TvInputCallback(QAndroidJniObject obj);
		
		// Constructors
		TvInputManager_TvInputCallback();
		
		// Methods
		void onInputAdded(JString arg0);
		void onInputRemoved(JString arg0);
		void onInputStateChanged(JString arg0, jint arg1);
		void onInputUpdated(JString arg0);
		void onTvInputInfoUpdated(android::media::tv::TvInputInfo arg0);
	};
} // namespace android::media::tv

