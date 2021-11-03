#include "./HapticGenerator.hpp"

namespace android::media::audiofx
{
	// Fields
	
	// QJniObject forward
	HapticGenerator::HapticGenerator(QJniObject obj) : android::media::audiofx::AudioEffect(obj) {}
	
	// Constructors
	
	// Methods
	android::media::audiofx::HapticGenerator HapticGenerator::create(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.audiofx.HapticGenerator",
			"create",
			"(I)Landroid/media/audiofx/HapticGenerator;",
			arg0
		);
	}
	jboolean HapticGenerator::isAvailable()
	{
		return callStaticMethod<jboolean>(
			"android.media.audiofx.HapticGenerator",
			"isAvailable",
			"()Z"
		);
	}
	void HapticGenerator::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void HapticGenerator::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jint HapticGenerator::setEnabled(jboolean arg0) const
	{
		return callMethod<jint>(
			"setEnabled",
			"(Z)I",
			arg0
		);
	}
} // namespace android::media::audiofx

