#include "../../JByteArray.hpp"
#include "./AudioDescriptor.hpp"

namespace android::media
{
	// Fields
	jint AudioDescriptor::STANDARD_EDID()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_EDID"
		);
	}
	jint AudioDescriptor::STANDARD_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_NONE"
		);
	}
	
	// QAndroidJniObject forward
	AudioDescriptor::AudioDescriptor(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JByteArray AudioDescriptor::getDescriptor()
	{
		return callObjectMethod(
			"getDescriptor",
			"()[B"
		);
	}
	jint AudioDescriptor::getEncapsulationType()
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	jint AudioDescriptor::getStandard()
	{
		return callMethod<jint>(
			"getStandard",
			"()I"
		);
	}
} // namespace android::media

