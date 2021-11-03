#include "./Build_VERSION.hpp"

namespace android::os
{
	// Fields
	jstring Build_VERSION::BASE_OS()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"BASE_OS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::CODENAME()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"CODENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::INCREMENTAL()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"INCREMENTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::MEDIA_PERFORMANCE_CLASS()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION",
			"MEDIA_PERFORMANCE_CLASS"
		);
	}
	jint Build_VERSION::PREVIEW_SDK_INT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION",
			"PREVIEW_SDK_INT"
		);
	}
	jstring Build_VERSION::RELEASE()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::RELEASE_OR_CODENAME()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE_OR_CODENAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_VERSION::SDK()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"SDK",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_VERSION::SDK_INT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION",
			"SDK_INT"
		);
	}
	jstring Build_VERSION::SECURITY_PATCH()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"SECURITY_PATCH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Build_VERSION::Build_VERSION(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Build_VERSION::Build_VERSION()
		: JObject(
			"android.os.Build$VERSION",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

