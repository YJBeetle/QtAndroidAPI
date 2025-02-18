#pragma once

#include "../../JCharArray.hpp"
#include "./KeyCharacterMap_KeyData.def.hpp"

namespace android::view
{
	// Fields
	inline jint KeyCharacterMap_KeyData::META_LENGTH()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap$KeyData",
			"META_LENGTH"
		);
	}
	inline jchar KeyCharacterMap_KeyData::displayLabel()
	{
		return getField<jchar>(
			"displayLabel"
		);
	}
	inline JCharArray KeyCharacterMap_KeyData::meta()
	{
		return getObjectField(
			"meta",
			"[C"
		);
	}
	inline jchar KeyCharacterMap_KeyData::number()
	{
		return getField<jchar>(
			"number"
		);
	}
	
	// Constructors
	inline KeyCharacterMap_KeyData::KeyCharacterMap_KeyData()
		: JObject(
			"android.view.KeyCharacterMap$KeyData",
			"()V"
		) {}
	
	// Methods
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
