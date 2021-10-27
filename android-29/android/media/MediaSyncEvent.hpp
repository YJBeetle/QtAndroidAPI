#pragma once

#ifndef ANDROID_MEDIA_MEDIASYNCEVENT
#define ANDROID_MEDIA_MEDIASYNCEVENT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MediaSyncEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jint SYNC_EVENT_NONE();
		static jint SYNC_EVENT_PRESENTATION_COMPLETE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createEvent(jint arg0);
		jint getAudioSessionId();
		jint getType();
		QAndroidJniObject setAudioSessionId(jint arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jint MediaSyncEvent::SYNC_EVENT_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_NONE"
		);
	}
	jint MediaSyncEvent::SYNC_EVENT_PRESENTATION_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.MediaSyncEvent",
			"SYNC_EVENT_PRESENTATION_COMPLETE"
		);
	}
	
	// Constructors
	void MediaSyncEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSyncEvent",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaSyncEvent::createEvent(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.MediaSyncEvent",
			"createEvent",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
	jint MediaSyncEvent::getAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getAudioSessionId",
			"()I"
		);
	}
	jint MediaSyncEvent::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	QAndroidJniObject MediaSyncEvent::setAudioSessionId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAudioSessionId",
			"(I)Landroid/media/MediaSyncEvent;",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSyncEvent : public __jni_impl::android::media::MediaSyncEvent
	{
	public:
		MediaSyncEvent(QAndroidJniObject obj) { __thiz = obj; }
		MediaSyncEvent()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASYNCEVENT

