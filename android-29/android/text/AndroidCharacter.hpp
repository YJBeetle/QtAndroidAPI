#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class AndroidCharacter : public __JniBaseClass
	{
	public:
		// Fields
		static jint EAST_ASIAN_WIDTH_AMBIGUOUS();
		static jint EAST_ASIAN_WIDTH_FULL_WIDTH();
		static jint EAST_ASIAN_WIDTH_HALF_WIDTH();
		static jint EAST_ASIAN_WIDTH_NARROW();
		static jint EAST_ASIAN_WIDTH_NEUTRAL();
		static jint EAST_ASIAN_WIDTH_WIDE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void getDirectionalities(jcharArray arg0, jbyteArray arg1, jint arg2);
		static jint getEastAsianWidth(jchar arg0);
		static void getEastAsianWidths(jcharArray arg0, jint arg1, jint arg2, jbyteArray arg3);
		static jchar getMirror(jchar arg0);
		static jboolean mirror(jcharArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	jint AndroidCharacter::EAST_ASIAN_WIDTH_AMBIGUOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_AMBIGUOUS"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_FULL_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_FULL_WIDTH"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_HALF_WIDTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_HALF_WIDTH"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_NARROW()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NARROW"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_NEUTRAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_NEUTRAL"
		);
	}
	jint AndroidCharacter::EAST_ASIAN_WIDTH_WIDE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.AndroidCharacter",
			"EAST_ASIAN_WIDTH_WIDE"
		);
	}
	
	// Constructors
	void AndroidCharacter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.AndroidCharacter",
			"()V"
		);
	}
	
	// Methods
	void AndroidCharacter::getDirectionalities(jcharArray arg0, jbyteArray arg1, jint arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.AndroidCharacter",
			"getDirectionalities",
			"([C[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint AndroidCharacter::getEastAsianWidth(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.AndroidCharacter",
			"getEastAsianWidth",
			"(C)I",
			arg0
		);
	}
	void AndroidCharacter::getEastAsianWidths(jcharArray arg0, jint arg1, jint arg2, jbyteArray arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.AndroidCharacter",
			"getEastAsianWidths",
			"([CII[B)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jchar AndroidCharacter::getMirror(jchar arg0)
	{
		return QAndroidJniObject::callStaticMethod<jchar>(
			"android.text.AndroidCharacter",
			"getMirror",
			"(C)C",
			arg0
		);
	}
	jboolean AndroidCharacter::mirror(jcharArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.AndroidCharacter",
			"mirror",
			"([CII)Z",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class AndroidCharacter : public __jni_impl::android::text::AndroidCharacter
	{
	public:
		AndroidCharacter(QAndroidJniObject obj) { __thiz = obj; }
		AndroidCharacter()
		{
			__constructor();
		}
	};
} // namespace android::text

