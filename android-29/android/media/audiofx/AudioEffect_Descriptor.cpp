#include "../../../java/util/UUID.hpp"
#include "./AudioEffect_Descriptor.hpp"

namespace android::media::audiofx
{
	// Fields
	jstring AudioEffect_Descriptor::connectMode()
	{
		return __thiz.getObjectField(
			"connectMode",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::implementor()
	{
		return __thiz.getObjectField(
			"implementor",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AudioEffect_Descriptor::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AudioEffect_Descriptor::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/util/UUID;"
		);
	}
	QAndroidJniObject AudioEffect_Descriptor::uuid()
	{
		return __thiz.getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	AudioEffect_Descriptor::AudioEffect_Descriptor(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AudioEffect_Descriptor::AudioEffect_Descriptor()
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"()V"
		);
	}
	AudioEffect_Descriptor::AudioEffect_Descriptor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz = QAndroidJniObject(
			"android.media.audiofx.AudioEffect$Descriptor",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jboolean AudioEffect_Descriptor::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint AudioEffect_Descriptor::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::audiofx

