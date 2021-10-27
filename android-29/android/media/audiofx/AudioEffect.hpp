#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::audiofx
{
	class AudioEffect_Descriptor;
}
namespace java::util
{
	class UUID;
}

namespace android::media::audiofx
{
	class AudioEffect : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CLOSE_AUDIO_EFFECT_CONTROL_SESSION();
		static jstring ACTION_DISPLAY_AUDIO_EFFECT_CONTROL_PANEL();
		static jstring ACTION_OPEN_AUDIO_EFFECT_CONTROL_SESSION();
		static jint ALREADY_EXISTS();
		static jint CONTENT_TYPE_GAME();
		static jint CONTENT_TYPE_MOVIE();
		static jint CONTENT_TYPE_MUSIC();
		static jint CONTENT_TYPE_VOICE();
		static jstring EFFECT_AUXILIARY();
		static jstring EFFECT_INSERT();
		static QAndroidJniObject EFFECT_TYPE_AEC();
		static QAndroidJniObject EFFECT_TYPE_AGC();
		static QAndroidJniObject EFFECT_TYPE_BASS_BOOST();
		static QAndroidJniObject EFFECT_TYPE_DYNAMICS_PROCESSING();
		static QAndroidJniObject EFFECT_TYPE_ENV_REVERB();
		static QAndroidJniObject EFFECT_TYPE_EQUALIZER();
		static QAndroidJniObject EFFECT_TYPE_LOUDNESS_ENHANCER();
		static QAndroidJniObject EFFECT_TYPE_NS();
		static QAndroidJniObject EFFECT_TYPE_PRESET_REVERB();
		static QAndroidJniObject EFFECT_TYPE_VIRTUALIZER();
		static jint ERROR();
		static jint ERROR_BAD_VALUE();
		static jint ERROR_DEAD_OBJECT();
		static jint ERROR_INVALID_OPERATION();
		static jint ERROR_NO_INIT();
		static jint ERROR_NO_MEMORY();
		static jstring EXTRA_AUDIO_SESSION();
		static jstring EXTRA_CONTENT_TYPE();
		static jstring EXTRA_PACKAGE_NAME();
		static jint SUCCESS();
		
		AudioEffect(QAndroidJniObject obj);
		// Constructors
		AudioEffect() = default;
		
		// Methods
		static jarray queryEffects();
		QAndroidJniObject getDescriptor();
		jboolean getEnabled();
		jint getId();
		jboolean hasControl();
		void release();
		void setControlStatusListener(__JniBaseClass arg0);
		void setEnableStatusListener(__JniBaseClass arg0);
		jint setEnabled(jboolean arg0);
	};
} // namespace android::media::audiofx

