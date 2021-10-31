#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AudioGroup(QAndroidJniObject obj);
		
		// Constructors
		AudioGroup();
		AudioGroup(android::content::Context arg0);
		
		// Methods
		void clear();
		jint getMode();
		jarray getStreams();
		void sendDtmf(jint arg0);
		void setMode(jint arg0);
	};
} // namespace android::net::rtp

