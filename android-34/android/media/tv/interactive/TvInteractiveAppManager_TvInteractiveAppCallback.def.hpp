#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppManager_TvInteractiveAppCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppManager_TvInteractiveAppCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppManager_TvInteractiveAppCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvInteractiveAppManager_TvInteractiveAppCallback();
		
		// Methods
		void onInteractiveAppServiceAdded(JString arg0) const;
		void onInteractiveAppServiceRemoved(JString arg0) const;
		void onInteractiveAppServiceUpdated(JString arg0) const;
		void onTvInteractiveAppServiceStateChanged(JString arg0, jint arg1, jint arg2, jint arg3) const;
	};
} // namespace android::media::tv::interactive

