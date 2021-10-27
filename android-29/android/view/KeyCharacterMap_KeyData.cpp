#include "./KeyCharacterMap_KeyData.hpp"

namespace android::view
{
	// Fields
	jint KeyCharacterMap_KeyData::META_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap$KeyData",
			"META_LENGTH"
		);
	}
	jchar KeyCharacterMap_KeyData::displayLabel()
	{
		return __thiz.getField<jchar>(
			"displayLabel"
		);
	}
	jcharArray KeyCharacterMap_KeyData::meta()
	{
		return __thiz.getObjectField(
			"meta",
			"[C"
		).object<jcharArray>();
	}
	jchar KeyCharacterMap_KeyData::number()
	{
		return __thiz.getField<jchar>(
			"number"
		);
	}
	
	KeyCharacterMap_KeyData::KeyCharacterMap_KeyData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyCharacterMap_KeyData::KeyCharacterMap_KeyData()
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyCharacterMap$KeyData",
			"()V"
		);
	}
	
	// Methods
} // namespace android::view

