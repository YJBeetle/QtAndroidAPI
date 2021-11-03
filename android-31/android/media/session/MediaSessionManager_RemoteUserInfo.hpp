#pragma once

#include "../../../JObject.hpp"


namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSessionManager_RemoteUserInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSessionManager_RemoteUserInfo(QJniObject obj);
		
		// Constructors
		MediaSessionManager_RemoteUserInfo(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getPackageName();
		jint getPid();
		jint getUid();
		jint hashCode();
	};
} // namespace android::media::session

