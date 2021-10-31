#include "./Parcel.hpp"
#include "./PersistableBundle.hpp"
#include "../util/Size.hpp"
#include "../util/SizeF.hpp"
#include "../util/SparseArray.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Bundle.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Bundle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject Bundle::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"EMPTY",
			"Landroid/os/Bundle;"
		);
	}
	
	Bundle::Bundle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Bundle::Bundle()
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"()V"
		);
	}
	Bundle::Bundle(android::os::Bundle &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	Bundle::Bundle(android::os::PersistableBundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	Bundle::Bundle(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(I)V",
			arg0
		);
	}
	Bundle::Bundle(java::lang::ClassLoader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Bundle::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Bundle::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject Bundle::deepCopy()
	{
		return __thiz.callObjectMethod(
			"deepCopy",
			"()Landroid/os/Bundle;"
		);
	}
	jint Bundle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Bundle::getBinder(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getBundle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	jbyte Bundle::getByte(jstring arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0
		);
	}
	QAndroidJniObject Bundle::getByte(jstring arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			arg0,
			arg1
		);
	}
	jbyteArray Bundle::getByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jchar Bundle::getChar(jstring arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0
		);
	}
	jchar Bundle::getChar(jstring arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jcharArray Bundle::getCharArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jstring Bundle::getCharSequence(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Bundle::getCharSequence(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray Bundle::getCharSequenceArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Bundle::getCharSequenceArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jfloat Bundle::getFloat(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Bundle::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jfloatArray Bundle::getFloatArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	QAndroidJniObject Bundle::getIntegerArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getParcelable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0
		);
	}
	jarray Bundle::getParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Bundle::getParcelableArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSerializable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0
		);
	}
	jshort Bundle::getShort(jstring arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Bundle::getShort(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jshortArray Bundle::getShortArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	QAndroidJniObject Bundle::getSize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSizeF(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSparseParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getStringArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jboolean Bundle::hasFileDescriptors()
	{
		return __thiz.callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	void Bundle::putAll(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::putBinder(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putBundle(jstring arg0, android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putByte(jstring arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putChar(jstring arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharArray(jstring arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequence(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequenceArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequenceArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putFloat(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putFloatArray(jstring arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putIntegerArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelable(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelableArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putParcelableArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSerializable(jstring arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putShort(jstring arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putShortArray(jstring arg0, jshortArray arg1)
	{
		__thiz.callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putSize(jstring arg0, android::util::Size arg1)
	{
		__thiz.callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSizeF(jstring arg0, android::util::SizeF arg1)
	{
		__thiz.callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSparseParcelableArray(jstring arg0, android::util::SparseArray arg1)
	{
		__thiz.callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putStringArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Bundle::setClassLoader(java::lang::ClassLoader arg0)
	{
		__thiz.callMethod<void>(
			"setClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Bundle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Bundle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::os

