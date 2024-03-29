#pragma once

#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "./Entity_NamedContentValues.def.hpp"

namespace android::content
{
	// Fields
	inline android::net::Uri Entity_NamedContentValues::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	inline android::content::ContentValues Entity_NamedContentValues::values()
	{
		return getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	// Constructors
	inline Entity_NamedContentValues::Entity_NamedContentValues(android::net::Uri arg0, android::content::ContentValues arg1)
		: JObject(
			"android.content.Entity$NamedContentValues",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
