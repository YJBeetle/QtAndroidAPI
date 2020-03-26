#pragma once

#ifndef ANDROID_NET_RTP_AUDIOGROUP
#define ANDROID_NET_RTP_AUDIOGROUP

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::net::rtp
{
	class AudioGroup : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_ECHO_SUPPRESSION();
		static jint MODE_MUTED();
		static jint MODE_NORMAL();
		static jint MODE_ON_HOLD();
		
		// Constructors
		void __constructor();
		
		// Methods
		void clear();
		jarray getStreams();
		void sendDtmf(jint arg0);
		jint getMode();
		void setMode(jint arg0);
	};
} // namespace __jni_impl::android::net::rtp


namespace __jni_impl::android::net::rtp
{
	// Fields
	jint AudioGroup::MODE_ECHO_SUPPRESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ECHO_SUPPRESSION"
		);
	}
	jint AudioGroup::MODE_MUTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_MUTED"
		);
	}
	jint AudioGroup::MODE_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_NORMAL"
		);
	}
	jint AudioGroup::MODE_ON_HOLD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.rtp.AudioGroup",
			"MODE_ON_HOLD"
		);
	}
	
	// Constructors
	void AudioGroup::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.rtp.AudioGroup",
			"()V");
	}
	
	// Methods
	void AudioGroup::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jarray AudioGroup::getStreams()
	{
		return __thiz.callObjectMethod(
			"getStreams",
			"()[Landroid/net/rtp/AudioStream;"
		).object<jarray>();
	}
	void AudioGroup::sendDtmf(jint arg0)
	{
		__thiz.callMethod<void>(
			"sendDtmf",
			"(I)V",
			arg0
		);
	}
	jint AudioGroup::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	void AudioGroup::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::android::net::rtp

namespace android::net::rtp
{
	class AudioGroup : public __jni_impl::android::net::rtp::AudioGroup
	{
	public:
		AudioGroup(QAndroidJniObject obj) { __thiz = obj; }
		AudioGroup()
		{
			__constructor();
		}
	};
} // namespace android::net::rtp

#endif // ANDROID_NET_RTP_AUDIOGROUP

