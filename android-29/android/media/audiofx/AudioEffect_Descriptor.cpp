#include "../../../java/util/UUID.hpp"
#include "./AudioEffect_Descriptor.hpp"

namespace android::media::audiofx
{
	// Fields
	jstring AudioEffect_Descriptor::connectMode()
	{
		return getObjectField(
			"connectMode",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::implementor()
	{
		return getObjectField(
			"implementor",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::UUID AudioEffect_Descriptor::type()
	{
		return getObjectField(
			"type",
			"Ljava/util/UUID;"
		);
	}
	java::util::UUID AudioEffect_Descriptor::uuid()
	{
		return getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// QAndroidJniObject forward
	AudioEffect_Descriptor::AudioEffect_Descriptor(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AudioEffect_Descriptor::AudioEffect_Descriptor()
		: __JniBaseClass(
			"android.media.audiofx.AudioEffect$Descriptor",
			"()V"
		) {}
	AudioEffect_Descriptor::AudioEffect_Descriptor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
		: __JniBaseClass(
			"android.media.audiofx.AudioEffect$Descriptor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jboolean AudioEffect_Descriptor::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioEffect_Descriptor::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::audiofx

