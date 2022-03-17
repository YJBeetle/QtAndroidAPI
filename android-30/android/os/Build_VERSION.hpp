#pragma once

#include "../../JString.hpp"
#include "./Build_VERSION.def.hpp"

namespace android::os
{
	// Fields
	inline JString Build_VERSION::BASE_OS()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"BASE_OS",
			"Ljava/lang/String;"
		);
	}
	inline JString Build_VERSION::CODENAME()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"CODENAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Build_VERSION::INCREMENTAL()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"INCREMENTAL",
			"Ljava/lang/String;"
		);
	}
	inline jint Build_VERSION::PREVIEW_SDK_INT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION",
			"PREVIEW_SDK_INT"
		);
	}
	inline JString Build_VERSION::RELEASE()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE",
			"Ljava/lang/String;"
		);
	}
	inline JString Build_VERSION::RELEASE_OR_CODENAME()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"RELEASE_OR_CODENAME",
			"Ljava/lang/String;"
		);
	}
	inline JString Build_VERSION::SDK()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"SDK",
			"Ljava/lang/String;"
		);
	}
	inline jint Build_VERSION::SDK_INT()
	{
		return getStaticField<jint>(
			"android.os.Build$VERSION",
			"SDK_INT"
		);
	}
	inline JString Build_VERSION::SECURITY_PATCH()
	{
		return getStaticObjectField(
			"android.os.Build$VERSION",
			"SECURITY_PATCH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline Build_VERSION::Build_VERSION()
		: JObject(
			"android.os.Build$VERSION",
			"()V"
		) {}
	
	// Methods
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
