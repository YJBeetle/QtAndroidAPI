#pragma once

#include "../../JString.hpp"
#include "./MediaStore_PickerMediaColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_PickerMediaColumns::DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_PickerMediaColumns::DATE_TAKEN()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"DATE_TAKEN",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_PickerMediaColumns::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_PickerMediaColumns::DURATION_MILLIS()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"DURATION_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_PickerMediaColumns::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_PickerMediaColumns::SIZE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$PickerMediaColumns",
			"SIZE",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
