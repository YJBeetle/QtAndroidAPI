#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/Double.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../java/lang/Long.hpp"
#include "../../java/lang/Short.hpp"
#include "./ContentValues.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject ContentValues::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ContentValues::TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ContentValues::ContentValues(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentValues::ContentValues()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"()V"
		);
	}
	ContentValues::ContentValues(android::content::ContentValues &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	ContentValues::ContentValues(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void ContentValues::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ContentValues::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint ContentValues::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentValues::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ContentValues::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	QAndroidJniObject ContentValues::getAsBoolean(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsByte(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	jbyteArray ContentValues::getAsByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	QAndroidJniObject ContentValues::getAsDouble(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsFloat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsInteger(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsLong(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsShort(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	jstring ContentValues::getAsString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint ContentValues::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ContentValues::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::put(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Boolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Byte arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Double arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Long arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, java::lang::Short arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContentValues::putAll(android::content::ContentValues arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentValues::putNull(jstring arg0)
	{
		__thiz.callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ContentValues::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jint ContentValues::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ContentValues::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContentValues::valueSet()
	{
		return __thiz.callObjectMethod(
			"valueSet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

