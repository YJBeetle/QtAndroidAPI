#pragma once

#ifndef ANDROID_OS_PATTERNMATCHER
#define ANDROID_OS_PATTERNMATCHER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::os
{
	class PatternMatcher : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PATTERN_ADVANCED_GLOB();
		static jint PATTERN_LITERAL();
		static jint PATTERN_PREFIX();
		static jint PATTERN_SIMPLE_GLOB();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		QAndroidJniObject toString();
		jboolean match(jstring arg0);
		jint getType();
		QAndroidJniObject getPath();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject PatternMatcher::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PatternMatcher",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PatternMatcher::PATTERN_ADVANCED_GLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_ADVANCED_GLOB");
	}
	jint PatternMatcher::PATTERN_LITERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_LITERAL");
	}
	jint PatternMatcher::PATTERN_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_PREFIX");
	}
	jint PatternMatcher::PATTERN_SIMPLE_GLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_SIMPLE_GLOB");
	}
	
	// Constructors
	void PatternMatcher::__constructor(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1);
	}
	void PatternMatcher::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PatternMatcher",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject PatternMatcher::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean PatternMatcher::match(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint PatternMatcher::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I");
	}
	QAndroidJniObject PatternMatcher::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;");
	}
	jint PatternMatcher::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PatternMatcher::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class PatternMatcher : public __jni_impl::android::os::PatternMatcher
	{
	public:
		PatternMatcher(QAndroidJniObject obj) { __thiz = obj; }
		PatternMatcher(jstring arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PatternMatcher(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_PATTERNMATCHER

