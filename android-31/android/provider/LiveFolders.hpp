#pragma once

#include "../../JString.hpp"
#include "./LiveFolders.def.hpp"

namespace android::provider
{
	// Fields
	inline JString LiveFolders::ACTION_CREATE_LIVE_FOLDER()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"ACTION_CREATE_LIVE_FOLDER",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::DESCRIPTION()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"DESCRIPTION",
			"Ljava/lang/String;"
		);
	}
	inline jint LiveFolders::DISPLAY_MODE_GRID()
	{
		return getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_GRID"
		);
	}
	inline jint LiveFolders::DISPLAY_MODE_LIST()
	{
		return getStaticField<jint>(
			"android.provider.LiveFolders",
			"DISPLAY_MODE_LIST"
		);
	}
	inline JString LiveFolders::EXTRA_LIVE_FOLDER_BASE_INTENT()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_BASE_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::EXTRA_LIVE_FOLDER_DISPLAY_MODE()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_DISPLAY_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::EXTRA_LIVE_FOLDER_ICON()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_ICON",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::EXTRA_LIVE_FOLDER_NAME()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"EXTRA_LIVE_FOLDER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::ICON_BITMAP()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_BITMAP",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::ICON_PACKAGE()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_PACKAGE",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::ICON_RESOURCE()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"ICON_RESOURCE",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::INTENT()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString LiveFolders::NAME()
	{
		return getStaticObjectField(
			"android.provider.LiveFolders",
			"NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

