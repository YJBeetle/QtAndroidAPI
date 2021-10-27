#include "./Parcel.hpp"
#include "./PatternMatcher.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject PatternMatcher::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.PatternMatcher",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PatternMatcher::PATTERN_ADVANCED_GLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_ADVANCED_GLOB"
		);
	}
	jint PatternMatcher::PATTERN_LITERAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_LITERAL"
		);
	}
	jint PatternMatcher::PATTERN_PREFIX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_PREFIX"
		);
	}
	jint PatternMatcher::PATTERN_SIMPLE_GLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.os.PatternMatcher",
			"PATTERN_SIMPLE_GLOB"
		);
	}
	
	PatternMatcher::PatternMatcher(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PatternMatcher::PatternMatcher(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.PatternMatcher",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	PatternMatcher::PatternMatcher(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	PatternMatcher::PatternMatcher(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.os.PatternMatcher",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint PatternMatcher::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring PatternMatcher::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PatternMatcher::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean PatternMatcher::match(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean PatternMatcher::match(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"match",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring PatternMatcher::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PatternMatcher::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

