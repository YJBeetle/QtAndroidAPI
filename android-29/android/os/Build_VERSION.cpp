#include "./Build_VERSION.hpp"

namespace android::os
{
	// Fields
	jstring Build_VERSION::BASE_OS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"BASE_OS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::CODENAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"CODENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::INCREMENTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"INCREMENTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::PREVIEW_SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"PREVIEW_SDK_INT"
		);
	}
	jstring Build_VERSION::RELEASE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::SDK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SDK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::SDK_INT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.Build$VERSION",
			"SDK_INT"
		);
	}
	jstring Build_VERSION::SECURITY_PATCH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$VERSION",
			"SECURITY_PATCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Build_VERSION::Build_VERSION(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Build_VERSION::Build_VERSION()
		: __JniBaseClass(
			"android.os.Build$VERSION",
			"()V"
		) {}
	
	// Methods
} // namespace android::os
