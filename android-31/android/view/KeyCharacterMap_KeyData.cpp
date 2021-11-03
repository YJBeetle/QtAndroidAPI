#include "../../JCharArray.hpp"
#include "./KeyCharacterMap_KeyData.hpp"

namespace android::view
{
	// Fields
	jint KeyCharacterMap_KeyData::META_LENGTH()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap$KeyData",
			"META_LENGTH"
		);
	}
	jchar KeyCharacterMap_KeyData::displayLabel()
	{
		return getField<jchar>(
			"displayLabel"
		);
	}
	JCharArray KeyCharacterMap_KeyData::meta()
	{
		return getObjectField(
			"meta",
			"[C"
		);
	}
	jchar KeyCharacterMap_KeyData::number()
	{
		return getField<jchar>(
			"number"
		);
	}
	
	// QAndroidJniObject forward
	KeyCharacterMap_KeyData::KeyCharacterMap_KeyData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	KeyCharacterMap_KeyData::KeyCharacterMap_KeyData()
		: JObject(
			"android.view.KeyCharacterMap$KeyData",
			"()V"
		) {}
	
	// Methods
} // namespace android::view

