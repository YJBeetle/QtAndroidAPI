#pragma once

#include "../../JObject.hpp"

class JBooleanArray;
namespace android::content::res
{
	class AssetFileDescriptor;
}
namespace android::os
{
	class Handler;
}
class JObject;
class JString;

namespace android::media
{
	class JetPlayer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JetPlayer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JetPlayer(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::JetPlayer getJetPlayer();
		static jint getMaxTracks();
		jboolean clearQueue();
		JObject clone();
		jboolean closeJetFile();
		jboolean loadJetFile(android::content::res::AssetFileDescriptor arg0);
		jboolean loadJetFile(JString arg0);
		jboolean pause();
		jboolean play();
		jboolean queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5);
		jboolean queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, JBooleanArray arg4, jbyte arg5);
		void release();
		void setEventListener(JObject arg0);
		void setEventListener(JObject arg0, android::os::Handler arg1);
		jboolean setMuteArray(JBooleanArray arg0, jboolean arg1);
		jboolean setMuteFlag(jint arg0, jboolean arg1, jboolean arg2);
		jboolean setMuteFlags(jint arg0, jboolean arg1);
		jboolean triggerClip(jint arg0);
	};
} // namespace android::media

