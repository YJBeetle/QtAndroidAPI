#pragma once

#ifndef ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA
#define ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class KeyCharacterMap_KeyData : public __JniBaseClass
	{
	public:
		// Fields
		static jint META_LENGTH();
		jchar displayLabel();
		jcharArray meta();
		jchar number();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
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
	
	// Constructors
	void KeyCharacterMap_KeyData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyCharacterMap$KeyData",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyCharacterMap_KeyData : public __jni_impl::android::view::KeyCharacterMap_KeyData
	{
	public:
		KeyCharacterMap_KeyData(QAndroidJniObject obj) { __thiz = obj; }
		KeyCharacterMap_KeyData()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYCHARACTERMAP_KEYDATA

