#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
class JString;

namespace android::media::tv::ad
{
	class TvAdView_TvAdCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdView_TvAdCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvAdView_TvAdCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvAdView_TvAdCallback();
		
		// Methods
		void onRequestCurrentChannelUri(JString arg0) const;
		void onRequestCurrentTvInputId(JString arg0) const;
		void onRequestCurrentVideoBounds(JString arg0) const;
		void onRequestSigning(JString arg0, JString arg1, JString arg2, JString arg3, JByteArray arg4) const;
		void onRequestTrackInfoList(JString arg0) const;
		void onStateChanged(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace android::media::tv::ad

