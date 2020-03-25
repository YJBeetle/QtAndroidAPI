#pragma once

#ifndef ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION
#define ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace __jni_impl::android::view
{
	class KeyCharacterMap_UnavailableException : public __jni_impl::android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void KeyCharacterMap_UnavailableException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyCharacterMap$UnavailableException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyCharacterMap_UnavailableException : public __jni_impl::android::view::KeyCharacterMap_UnavailableException
	{
	public:
		KeyCharacterMap_UnavailableException(QAndroidJniObject obj) { __thiz = obj; }
		KeyCharacterMap_UnavailableException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYCHARACTERMAP_UNAVAILABLEEXCEPTION

