#include "../os/Parcel.hpp"
#include "./DocumentsContract_Path.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject DocumentsContract_Path::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.DocumentsContract$Path",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	DocumentsContract_Path::DocumentsContract_Path(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DocumentsContract_Path::DocumentsContract_Path(jstring &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract$Path",
			"(Ljava/lang/String;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	DocumentsContract_Path::DocumentsContract_Path(const QString &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.provider.DocumentsContract$Path",
			"(Ljava/lang/String;Ljava/util/List;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint DocumentsContract_Path::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DocumentsContract_Path::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject DocumentsContract_Path::getPath()
	{
		return __thiz.callObjectMethod(
			"getPath",
			"()Ljava/util/List;"
		);
	}
	jstring DocumentsContract_Path::getRootId()
	{
		return __thiz.callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DocumentsContract_Path::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DocumentsContract_Path::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DocumentsContract_Path::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::provider

