#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::os
{
	class Handler;
}

namespace android::media
{
	class JetPlayer : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JetPlayer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		JetPlayer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::JetPlayer getJetPlayer();
		static jint getMaxTracks();
		jboolean clearQueue();
		jobject clone();
		jboolean closeJetFile();
		jboolean loadJetFile(android::content::res::AssetFileDescriptor arg0);
		jboolean loadJetFile(jstring arg0);
		jboolean pause();
		jboolean play();
		jboolean queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5);
		jboolean queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, jbooleanArray arg4, jbyte arg5);
		void release();
		void setEventListener(__JniBaseClass arg0);
		void setEventListener(__JniBaseClass arg0, android::os::Handler arg1);
		jboolean setMuteArray(jbooleanArray arg0, jboolean arg1);
		jboolean setMuteFlag(jint arg0, jboolean arg1, jboolean arg2);
		jboolean setMuteFlags(jint arg0, jboolean arg1);
		jboolean triggerClip(jint arg0);
	};
} // namespace android::media

