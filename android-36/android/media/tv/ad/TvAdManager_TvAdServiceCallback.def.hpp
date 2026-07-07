#pragma once

#include "../../../../JObject.hpp"

class JString;

namespace android::media::tv::ad
{
	class TvAdManager_TvAdServiceCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdManager_TvAdServiceCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvAdManager_TvAdServiceCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvAdManager_TvAdServiceCallback();
		
		// Methods
		void onAdServiceAdded(JString arg0) const;
		void onAdServiceRemoved(JString arg0) const;
		void onAdServiceUpdated(JString arg0) const;
	};
} // namespace android::media::tv::ad

