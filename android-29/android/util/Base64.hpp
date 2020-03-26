#pragma once

#ifndef ANDROID_UTIL_BASE64
#define ANDROID_UTIL_BASE64

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Base64 : public __JniBaseClass
	{
	public:
		// Fields
		static jint CRLF();
		static jint DEFAULT();
		static jint NO_CLOSE();
		static jint NO_PADDING();
		static jint NO_WRAP();
		static jint URL_SAFE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jbyteArray decode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jbyteArray decode(jbyteArray arg0, jint arg1);
		static jbyteArray decode(jstring arg0, jint arg1);
		static jbyteArray encode(jbyteArray arg0, jint arg1);
		static jbyteArray encode(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring encodeToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3);
		static jstring encodeToString(jbyteArray arg0, jint arg1);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jint Base64::CRLF()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"CRLF"
		);
	}
	jint Base64::DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"DEFAULT"
		);
	}
	jint Base64::NO_CLOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"NO_CLOSE"
		);
	}
	jint Base64::NO_PADDING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"NO_PADDING"
		);
	}
	jint Base64::NO_WRAP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"NO_WRAP"
		);
	}
	jint Base64::URL_SAFE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.util.Base64",
			"URL_SAFE"
		);
	}
	
	// Constructors
	void Base64::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.Base64",
			"(V)V");
	}
	
	// Methods
	jbyteArray Base64::decode(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BIII)[B",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jbyteArray>();
	}
	jbyteArray Base64::decode(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"([BI)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::decode(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"decode",
			"(Ljava/lang/String;I)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::encode(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BI)[B",
			arg0,
			arg1
		).object<jbyteArray>();
	}
	jbyteArray Base64::encode(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"encode",
			"([BIII)[B",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jbyteArray>();
	}
	jstring Base64::encodeToString(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BIII)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	jstring Base64::encodeToString(jbyteArray arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Base64",
			"encodeToString",
			"([BI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Base64 : public __jni_impl::android::util::Base64
	{
	public:
		Base64(QAndroidJniObject obj) { __thiz = obj; }
		Base64()
		{
			__constructor();
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_BASE64

