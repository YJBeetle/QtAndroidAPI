#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSessionManager_RemoteUserInfo(QAndroidJniObject obj);
		// Constructors
		MediaSessionManager_RemoteUserInfo(jstring &arg0, jint &arg1, jint &arg2);
		MediaSessionManager_RemoteUserInfo(const QString &arg0, jint &arg1, jint &arg2);
		MediaSessionManager_RemoteUserInfo() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getPackageName();
		jint getPid();
		jint getUid();
		jint hashCode();
	};
} // namespace android::media::session

