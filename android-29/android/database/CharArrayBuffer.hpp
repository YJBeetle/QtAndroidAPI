#pragma once

#ifndef ANDROID_DATABASE_CHARARRAYBUFFER
#define ANDROID_DATABASE_CHARARRAYBUFFER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::database
{
	class CharArrayBuffer : public __JniBaseClass
	{
	public:
		// Fields
		jcharArray data();
		jint sizeCopied();
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jcharArray arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	jcharArray CharArrayBuffer::data()
	{
		return __thiz.getObjectField(
			"data",
			"[C"
		).object<jcharArray>();
	}
	jint CharArrayBuffer::sizeCopied()
	{
		return __thiz.getField<jint>(
			"sizeCopied"
		);
	}
	
	// Constructors
	void CharArrayBuffer::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CharArrayBuffer",
			"(I)V",
			arg0
		);
	}
	void CharArrayBuffer::__constructor(jcharArray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CharArrayBuffer",
			"([C)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database

namespace android::database
{
	class CharArrayBuffer : public __jni_impl::android::database::CharArrayBuffer
	{
	public:
		CharArrayBuffer(QAndroidJniObject obj) { __thiz = obj; }
		CharArrayBuffer(jint arg0)
		{
			__constructor(
				arg0);
		}
		CharArrayBuffer(jcharArray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CHARARRAYBUFFER

