#include "./Bundle.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "./PersistableBundle.hpp"
#include "../util/ArrayMap.hpp"
#include "../util/Size.hpp"
#include "../util/SizeF.hpp"
#include "../util/SparseArray.hpp"
#include "../util/SparseBooleanArray.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../../java/util/HashMap.hpp"
#include "./Parcel.hpp"

namespace android::os
{
	// Fields
	QAndroidJniObject Parcel::STRING_CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Parcel",
			"STRING_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	Parcel::Parcel(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Parcel::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.Parcel",
			"obtain",
			"()Landroid/os/Parcel;"
		);
	}
	void Parcel::appendFrom(android::os::Parcel arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"appendFrom",
			"(Landroid/os/Parcel;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jarray Parcel::createBinderArray()
	{
		return __thiz.callObjectMethod(
			"createBinderArray",
			"()[Landroid/os/IBinder;"
		).object<jarray>();
	}
	QAndroidJniObject Parcel::createBinderArrayList()
	{
		return __thiz.callObjectMethod(
			"createBinderArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	jbooleanArray Parcel::createBooleanArray()
	{
		return __thiz.callObjectMethod(
			"createBooleanArray",
			"()[Z"
		).object<jbooleanArray>();
	}
	jbyteArray Parcel::createByteArray()
	{
		return __thiz.callObjectMethod(
			"createByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jcharArray Parcel::createCharArray()
	{
		return __thiz.callObjectMethod(
			"createCharArray",
			"()[C"
		).object<jcharArray>();
	}
	jdoubleArray Parcel::createDoubleArray()
	{
		return __thiz.callObjectMethod(
			"createDoubleArray",
			"()[D"
		).object<jdoubleArray>();
	}
	jfloatArray Parcel::createFloatArray()
	{
		return __thiz.callObjectMethod(
			"createFloatArray",
			"()[F"
		).object<jfloatArray>();
	}
	jintArray Parcel::createIntArray()
	{
		return __thiz.callObjectMethod(
			"createIntArray",
			"()[I"
		).object<jintArray>();
	}
	jlongArray Parcel::createLongArray()
	{
		return __thiz.callObjectMethod(
			"createLongArray",
			"()[J"
		).object<jlongArray>();
	}
	jarray Parcel::createStringArray()
	{
		return __thiz.callObjectMethod(
			"createStringArray",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject Parcel::createStringArrayList()
	{
		return __thiz.callObjectMethod(
			"createStringArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	jobjectArray Parcel::createTypedArray(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"createTypedArray",
			"(Landroid/os/Parcelable$Creator;)[Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobjectArray>();
	}
	QAndroidJniObject Parcel::createTypedArrayList(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"createTypedArrayList",
			"(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::createTypedArrayMap(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"createTypedArrayMap",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/ArrayMap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::createTypedSparseArray(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"createTypedSparseArray",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/SparseArray;",
			arg0.__jniObject().object()
		);
	}
	jint Parcel::dataAvail()
	{
		return __thiz.callMethod<jint>(
			"dataAvail",
			"()I"
		);
	}
	jint Parcel::dataCapacity()
	{
		return __thiz.callMethod<jint>(
			"dataCapacity",
			"()I"
		);
	}
	jint Parcel::dataPosition()
	{
		return __thiz.callMethod<jint>(
			"dataPosition",
			"()I"
		);
	}
	jint Parcel::dataSize()
	{
		return __thiz.callMethod<jint>(
			"dataSize",
			"()I"
		);
	}
	void Parcel::enforceInterface(jstring arg0)
	{
		__thiz.callMethod<void>(
			"enforceInterface",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::enforceInterface(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"enforceInterface",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Parcel::hasFileDescriptors()
	{
		return __thiz.callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	jbyteArray Parcel::marshall()
	{
		return __thiz.callObjectMethod(
			"marshall",
			"()[B"
		).object<jbyteArray>();
	}
	jobjectArray Parcel::readArray(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readArray",
			"(Ljava/lang/ClassLoader;)[Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobjectArray>();
	}
	QAndroidJniObject Parcel::readArrayList(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readArrayList",
			"(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;",
			arg0.__jniObject().object()
		);
	}
	void Parcel::readBinderArray(jarray arg0)
	{
		__thiz.callMethod<void>(
			"readBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0
		);
	}
	void Parcel::readBinderList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"readBinderList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Parcel::readBoolean()
	{
		return __thiz.callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	void Parcel::readBooleanArray(jbooleanArray arg0)
	{
		__thiz.callMethod<void>(
			"readBooleanArray",
			"([Z)V",
			arg0
		);
	}
	QAndroidJniObject Parcel::readBundle()
	{
		return __thiz.callObjectMethod(
			"readBundle",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Parcel::readBundle(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/Bundle;",
			arg0.__jniObject().object()
		);
	}
	jbyte Parcel::readByte()
	{
		return __thiz.callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	void Parcel::readByteArray(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"readByteArray",
			"([B)V",
			arg0
		);
	}
	void Parcel::readCharArray(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"readCharArray",
			"([C)V",
			arg0
		);
	}
	jdouble Parcel::readDouble()
	{
		return __thiz.callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void Parcel::readDoubleArray(jdoubleArray arg0)
	{
		__thiz.callMethod<void>(
			"readDoubleArray",
			"([D)V",
			arg0
		);
	}
	void Parcel::readException()
	{
		__thiz.callMethod<void>(
			"readException",
			"()V"
		);
	}
	void Parcel::readException(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"readException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Parcel::readException(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"readException",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Parcel::readFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"readFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jfloat Parcel::readFloat()
	{
		return __thiz.callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void Parcel::readFloatArray(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"readFloatArray",
			"([F)V",
			arg0
		);
	}
	QAndroidJniObject Parcel::readHashMap(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readHashMap",
			"(Ljava/lang/ClassLoader;)Ljava/util/HashMap;",
			arg0.__jniObject().object()
		);
	}
	jint Parcel::readInt()
	{
		return __thiz.callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	void Parcel::readIntArray(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"readIntArray",
			"([I)V",
			arg0
		);
	}
	void Parcel::readList(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		__thiz.callMethod<void>(
			"readList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jlong Parcel::readLong()
	{
		return __thiz.callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	void Parcel::readLongArray(jlongArray arg0)
	{
		__thiz.callMethod<void>(
			"readLongArray",
			"([J)V",
			arg0
		);
	}
	void Parcel::readMap(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		__thiz.callMethod<void>(
			"readMap",
			"(Ljava/util/Map;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::readParcelable(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readParcelable",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;",
			arg0.__jniObject().object()
		);
	}
	jarray Parcel::readParcelableArray(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readParcelableArray",
			"(Ljava/lang/ClassLoader;)[Landroid/os/Parcelable;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	QAndroidJniObject Parcel::readParcelableList(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		return __thiz.callObjectMethod(
			"readParcelableList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)Ljava/util/List;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::readPersistableBundle()
	{
		return __thiz.callObjectMethod(
			"readPersistableBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	QAndroidJniObject Parcel::readPersistableBundle(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readPersistableBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/PersistableBundle;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::readSerializable()
	{
		return __thiz.callObjectMethod(
			"readSerializable",
			"()Ljava/io/Serializable;"
		);
	}
	QAndroidJniObject Parcel::readSize()
	{
		return __thiz.callObjectMethod(
			"readSize",
			"()Landroid/util/Size;"
		);
	}
	QAndroidJniObject Parcel::readSizeF()
	{
		return __thiz.callObjectMethod(
			"readSizeF",
			"()Landroid/util/SizeF;"
		);
	}
	QAndroidJniObject Parcel::readSparseArray(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readSparseArray",
			"(Ljava/lang/ClassLoader;)Landroid/util/SparseArray;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::readSparseBooleanArray()
	{
		return __thiz.callObjectMethod(
			"readSparseBooleanArray",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	jstring Parcel::readString()
	{
		return __thiz.callObjectMethod(
			"readString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Parcel::readStringArray(jarray arg0)
	{
		__thiz.callMethod<void>(
			"readStringArray",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::readStringList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"readStringList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Parcel::readStrongBinder()
	{
		return __thiz.callObjectMethod(
			"readStrongBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void Parcel::readTypedArray(jobjectArray arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"readTypedArray",
			"([Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Parcel::readTypedList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"readTypedList",
			"(Ljava/util/List;Landroid/os/Parcelable$Creator;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jobject Parcel::readTypedObject(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"readTypedObject",
			"(Landroid/os/Parcelable$Creator;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	jobject Parcel::readValue(java::lang::ClassLoader arg0)
	{
		return __thiz.callObjectMethod(
			"readValue",
			"(Ljava/lang/ClassLoader;)Ljava/lang/Object;",
			arg0.__jniObject().object()
		).object<jobject>();
	}
	void Parcel::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Parcel::setDataCapacity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDataCapacity",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataPosition(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDataPosition",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDataSize",
			"(I)V",
			arg0
		);
	}
	void Parcel::unmarshall(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"unmarshall",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Parcel::writeArray(jobjectArray arg0)
	{
		__thiz.callMethod<void>(
			"writeArray",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void Parcel::writeBinderArray(jarray arg0)
	{
		__thiz.callMethod<void>(
			"writeBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0
		);
	}
	void Parcel::writeBinderList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeBinderList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeBoolean(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	void Parcel::writeBooleanArray(jbooleanArray arg0)
	{
		__thiz.callMethod<void>(
			"writeBooleanArray",
			"([Z)V",
			arg0
		);
	}
	void Parcel::writeBundle(android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"writeBundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeByte(jbyte arg0)
	{
		__thiz.callMethod<void>(
			"writeByte",
			"(B)V",
			arg0
		);
	}
	void Parcel::writeByteArray(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"writeByteArray",
			"([B)V",
			arg0
		);
	}
	void Parcel::writeByteArray(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"writeByteArray",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Parcel::writeCharArray(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"writeCharArray",
			"([C)V",
			arg0
		);
	}
	void Parcel::writeDouble(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void Parcel::writeDoubleArray(jdoubleArray arg0)
	{
		__thiz.callMethod<void>(
			"writeDoubleArray",
			"([D)V",
			arg0
		);
	}
	void Parcel::writeException(java::lang::Exception arg0)
	{
		__thiz.callMethod<void>(
			"writeException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeFileDescriptor(java::io::FileDescriptor arg0)
	{
		__thiz.callMethod<void>(
			"writeFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeFloat(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void Parcel::writeFloatArray(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"writeFloatArray",
			"([F)V",
			arg0
		);
	}
	void Parcel::writeInt(jint arg0)
	{
		__thiz.callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void Parcel::writeIntArray(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"writeIntArray",
			"([I)V",
			arg0
		);
	}
	void Parcel::writeInterfaceToken(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeInterfaceToken",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeInterfaceToken(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"writeInterfaceToken",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Parcel::writeList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeLong(jlong arg0)
	{
		__thiz.callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void Parcel::writeLongArray(jlongArray arg0)
	{
		__thiz.callMethod<void>(
			"writeLongArray",
			"([J)V",
			arg0
		);
	}
	void Parcel::writeMap(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeMap",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeNoException()
	{
		__thiz.callMethod<void>(
			"writeNoException",
			"()V"
		);
	}
	void Parcel::writeParcelable(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeParcelable",
			"(Landroid/os/Parcelable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Parcel::writeParcelableArray(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeParcelableArray",
			"([Landroid/os/Parcelable;I)V",
			arg0,
			arg1
		);
	}
	void Parcel::writeParcelableList(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeParcelableList",
			"(Ljava/util/List;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Parcel::writePersistableBundle(android::os::PersistableBundle arg0)
	{
		__thiz.callMethod<void>(
			"writePersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeSerializable(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeSerializable",
			"(Ljava/io/Serializable;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeSize(android::util::Size arg0)
	{
		__thiz.callMethod<void>(
			"writeSize",
			"(Landroid/util/Size;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeSizeF(android::util::SizeF arg0)
	{
		__thiz.callMethod<void>(
			"writeSizeF",
			"(Landroid/util/SizeF;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeSparseArray(android::util::SparseArray arg0)
	{
		__thiz.callMethod<void>(
			"writeSparseArray",
			"(Landroid/util/SparseArray;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeSparseBooleanArray(android::util::SparseBooleanArray arg0)
	{
		__thiz.callMethod<void>(
			"writeSparseBooleanArray",
			"(Landroid/util/SparseBooleanArray;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"writeString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"writeString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Parcel::writeStringArray(jarray arg0)
	{
		__thiz.callMethod<void>(
			"writeStringArray",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeStringList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeStringList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeStrongBinder(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeStrongBinder",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeStrongInterface(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeStrongInterface",
			"(Landroid/os/IInterface;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeTypedArray(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeTypedArray",
			"([Landroid/os/Parcelable;I)V",
			arg0,
			arg1
		);
	}
	void Parcel::writeTypedArrayMap(android::util::ArrayMap arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeTypedArrayMap",
			"(Landroid/util/ArrayMap;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Parcel::writeTypedList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"writeTypedList",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void Parcel::writeTypedObject(__JniBaseClass arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeTypedObject",
			"(Landroid/os/Parcelable;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Parcel::writeTypedSparseArray(android::util::SparseArray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeTypedSparseArray",
			"(Landroid/util/SparseArray;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Parcel::writeValue(jobject arg0)
	{
		__thiz.callMethod<void>(
			"writeValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::os

