#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::net::rtp
{
	class AudioGroup : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_ECHO_SUPPRESSION();
		static jint MODE_MUTED();
		static jint MODE_NORMAL();
		static jint MODE_ON_HOLD();
		
		AudioGroup(QAndroidJniObject obj);
		// Constructors
		AudioGroup();
		
		// Methods
		void clear();
		jint getMode();
		jarray getStreams();
		void sendDtmf(jint arg0);
		void setMode(jint arg0);
	};
} // namespace android::net::rtp

