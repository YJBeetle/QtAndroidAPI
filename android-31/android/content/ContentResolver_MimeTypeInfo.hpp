#pragma once

#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./ContentResolver_MimeTypeInfo.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString ContentResolver_MimeTypeInfo::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Icon ContentResolver_MimeTypeInfo::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString ContentResolver_MimeTypeInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
