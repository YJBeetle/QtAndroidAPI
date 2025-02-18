#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Contacts.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.Contacts",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jint Contacts::KIND_EMAIL()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_EMAIL"
		);
	}
	inline jint Contacts::KIND_IM()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_IM"
		);
	}
	inline jint Contacts::KIND_ORGANIZATION()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_ORGANIZATION"
		);
	}
	inline jint Contacts::KIND_PHONE()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_PHONE"
		);
	}
	inline jint Contacts::KIND_POSTAL()
	{
		return getStaticField<jint>(
			"android.provider.Contacts",
			"KIND_POSTAL"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
