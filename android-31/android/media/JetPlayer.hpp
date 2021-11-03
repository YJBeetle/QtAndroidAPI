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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JetPlayer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		JetPlayer(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::media::JetPlayer getJetPlayer();
		static jint getMaxTracks();
		jboolean clearQueue() const;
		JObject clone() const;
		jboolean closeJetFile() const;
		jboolean loadJetFile(android::content::res::AssetFileDescriptor arg0) const;
		jboolean loadJetFile(JString arg0) const;
		jboolean pause() const;
		jboolean play() const;
		jboolean queueJetSegment(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jbyte arg5) const;
		jboolean queueJetSegmentMuteArray(jint arg0, jint arg1, jint arg2, jint arg3, JBooleanArray arg4, jbyte arg5) const;
		void release() const;
		void setEventListener(JObject arg0) const;
		void setEventListener(JObject arg0, android::os::Handler arg1) const;
		jboolean setMuteArray(JBooleanArray arg0, jboolean arg1) const;
		jboolean setMuteFlag(jint arg0, jboolean arg1, jboolean arg2) const;
		jboolean setMuteFlags(jint arg0, jboolean arg1) const;
		jboolean triggerClip(jint arg0) const;
	};
} // namespace android::media

