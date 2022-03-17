#pragma once

#include "../../JString.hpp"
#include "./QuickViewConstants.def.hpp"

namespace android::content
{
	// Fields
	inline JString QuickViewConstants::FEATURE_DELETE()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DELETE",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickViewConstants::FEATURE_DOWNLOAD()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_DOWNLOAD",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickViewConstants::FEATURE_EDIT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_EDIT",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickViewConstants::FEATURE_PRINT()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_PRINT",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickViewConstants::FEATURE_SEND()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_SEND",
			"Ljava/lang/String;"
		);
	}
	inline JString QuickViewConstants::FEATURE_VIEW()
	{
		return getStaticObjectField(
			"android.content.QuickViewConstants",
			"FEATURE_VIEW",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::content

// Base class headers

