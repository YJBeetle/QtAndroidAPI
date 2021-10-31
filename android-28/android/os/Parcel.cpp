#include "./Bundle.hpp"
#include "./ParcelFileDescriptor.hpp"
#include "./PersistableBundle.hpp"
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
	__JniBaseClass Parcel::STRING_CREATOR()
	{
		return getStaticObjectField(
			"android.os.Parcel",
			"STRING_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	Parcel::Parcel(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::os::Parcel Parcel::obtain()
	{
		return callStaticObjectMethod(
			"android.os.Parcel",
			"obtain",
			"()Landroid/os/Parcel;"
		);
	}
	void Parcel::appendFrom(android::os::Parcel arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"appendFrom",
			"(Landroid/os/Parcel;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jarray Parcel::createBinderArray()
	{
		return callObjectMethod(
			"createBinderArray",
			"()[Landroid/os/IBinder;"
		).object<jarray>();
	}
	java::util::ArrayList Parcel::createBinderArrayList()
	{
		return callObjectMethod(
			"createBinderArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	jbooleanArray Parcel::createBooleanArray()
	{
		return callObjectMethod(
			"createBooleanArray",
			"()[Z"
		).object<jbooleanArray>();
	}
	jbyteArray Parcel::createByteArray()
	{
		return callObjectMethod(
			"createByteArray",
			"()[B"
		).object<jbyteArray>();
	}
	jcharArray Parcel::createCharArray()
	{
		return callObjectMethod(
			"createCharArray",
			"()[C"
		).object<jcharArray>();
	}
	jdoubleArray Parcel::createDoubleArray()
	{
		return callObjectMethod(
			"createDoubleArray",
			"()[D"
		).object<jdoubleArray>();
	}
	jfloatArray Parcel::createFloatArray()
	{
		return callObjectMethod(
			"createFloatArray",
			"()[F"
		).object<jfloatArray>();
	}
	jintArray Parcel::createIntArray()
	{
		return callObjectMethod(
			"createIntArray",
			"()[I"
		).object<jintArray>();
	}
	jlongArray Parcel::createLongArray()
	{
		return callObjectMethod(
			"createLongArray",
			"()[J"
		).object<jlongArray>();
	}
	jarray Parcel::createStringArray()
	{
		return callObjectMethod(
			"createStringArray",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	java::util::ArrayList Parcel::createStringArrayList()
	{
		return callObjectMethod(
			"createStringArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	jobjectArray Parcel::createTypedArray(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"createTypedArray",
			"(Landroid/os/Parcelable$Creator;)[Ljava/lang/Object;",
			arg0.object()
		).object<jobjectArray>();
	}
	java::util::ArrayList Parcel::createTypedArrayList(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"createTypedArrayList",
			"(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	jint Parcel::dataAvail()
	{
		return callMethod<jint>(
			"dataAvail",
			"()I"
		);
	}
	jint Parcel::dataCapacity()
	{
		return callMethod<jint>(
			"dataCapacity",
			"()I"
		);
	}
	jint Parcel::dataPosition()
	{
		return callMethod<jint>(
			"dataPosition",
			"()I"
		);
	}
	jint Parcel::dataSize()
	{
		return callMethod<jint>(
			"dataSize",
			"()I"
		);
	}
	void Parcel::enforceInterface(jstring arg0)
	{
		callMethod<void>(
			"enforceInterface",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean Parcel::hasFileDescriptors()
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	jbyteArray Parcel::marshall()
	{
		return callObjectMethod(
			"marshall",
			"()[B"
		).object<jbyteArray>();
	}
	jobjectArray Parcel::readArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readArray",
			"(Ljava/lang/ClassLoader;)[Ljava/lang/Object;",
			arg0.object()
		).object<jobjectArray>();
	}
	java::util::ArrayList Parcel::readArrayList(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readArrayList",
			"(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	void Parcel::readBinderArray(jarray arg0)
	{
		callMethod<void>(
			"readBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0
		);
	}
	void Parcel::readBinderList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"readBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::readBooleanArray(jbooleanArray arg0)
	{
		callMethod<void>(
			"readBooleanArray",
			"([Z)V",
			arg0
		);
	}
	android::os::Bundle Parcel::readBundle()
	{
		return callObjectMethod(
			"readBundle",
			"()Landroid/os/Bundle;"
		);
	}
	android::os::Bundle Parcel::readBundle(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	jbyte Parcel::readByte()
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	void Parcel::readByteArray(jbyteArray arg0)
	{
		callMethod<void>(
			"readByteArray",
			"([B)V",
			arg0
		);
	}
	void Parcel::readCharArray(jcharArray arg0)
	{
		callMethod<void>(
			"readCharArray",
			"([C)V",
			arg0
		);
	}
	jdouble Parcel::readDouble()
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	void Parcel::readDoubleArray(jdoubleArray arg0)
	{
		callMethod<void>(
			"readDoubleArray",
			"([D)V",
			arg0
		);
	}
	void Parcel::readException()
	{
		callMethod<void>(
			"readException",
			"()V"
		);
	}
	void Parcel::readException(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"readException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	android::os::ParcelFileDescriptor Parcel::readFileDescriptor()
	{
		return callObjectMethod(
			"readFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jfloat Parcel::readFloat()
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	void Parcel::readFloatArray(jfloatArray arg0)
	{
		callMethod<void>(
			"readFloatArray",
			"([F)V",
			arg0
		);
	}
	java::util::HashMap Parcel::readHashMap(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readHashMap",
			"(Ljava/lang/ClassLoader;)Ljava/util/HashMap;",
			arg0.object()
		);
	}
	jint Parcel::readInt()
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	void Parcel::readIntArray(jintArray arg0)
	{
		callMethod<void>(
			"readIntArray",
			"([I)V",
			arg0
		);
	}
	void Parcel::readList(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		callMethod<void>(
			"readList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jlong Parcel::readLong()
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	void Parcel::readLongArray(jlongArray arg0)
	{
		callMethod<void>(
			"readLongArray",
			"([J)V",
			arg0
		);
	}
	void Parcel::readMap(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		callMethod<void>(
			"readMap",
			"(Ljava/util/Map;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	__JniBaseClass Parcel::readParcelable(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readParcelable",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;",
			arg0.object()
		);
	}
	jarray Parcel::readParcelableArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readParcelableArray",
			"(Ljava/lang/ClassLoader;)[Landroid/os/Parcelable;",
			arg0.object()
		).object<jarray>();
	}
	android::os::PersistableBundle Parcel::readPersistableBundle()
	{
		return callObjectMethod(
			"readPersistableBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	android::os::PersistableBundle Parcel::readPersistableBundle(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readPersistableBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
	__JniBaseClass Parcel::readSerializable()
	{
		return callObjectMethod(
			"readSerializable",
			"()Ljava/io/Serializable;"
		);
	}
	android::util::Size Parcel::readSize()
	{
		return callObjectMethod(
			"readSize",
			"()Landroid/util/Size;"
		);
	}
	android::util::SizeF Parcel::readSizeF()
	{
		return callObjectMethod(
			"readSizeF",
			"()Landroid/util/SizeF;"
		);
	}
	android::util::SparseArray Parcel::readSparseArray(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readSparseArray",
			"(Ljava/lang/ClassLoader;)Landroid/util/SparseArray;",
			arg0.object()
		);
	}
	android::util::SparseBooleanArray Parcel::readSparseBooleanArray()
	{
		return callObjectMethod(
			"readSparseBooleanArray",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	jstring Parcel::readString()
	{
		return callObjectMethod(
			"readString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Parcel::readStringArray(jarray arg0)
	{
		callMethod<void>(
			"readStringArray",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::readStringList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"readStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	__JniBaseClass Parcel::readStrongBinder()
	{
		return callObjectMethod(
			"readStrongBinder",
			"()Landroid/os/IBinder;"
		);
	}
	void Parcel::readTypedArray(jobjectArray arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"readTypedArray",
			"([Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V",
			arg0,
			arg1.object()
		);
	}
	void Parcel::readTypedList(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"readTypedList",
			"(Ljava/util/List;Landroid/os/Parcelable$Creator;)V",
			arg0.object(),
			arg1.object()
		);
	}
	jobject Parcel::readTypedObject(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"readTypedObject",
			"(Landroid/os/Parcelable$Creator;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	jobject Parcel::readValue(java::lang::ClassLoader arg0)
	{
		return callObjectMethod(
			"readValue",
			"(Ljava/lang/ClassLoader;)Ljava/lang/Object;",
			arg0.object()
		).object<jobject>();
	}
	void Parcel::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void Parcel::setDataCapacity(jint arg0)
	{
		callMethod<void>(
			"setDataCapacity",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataPosition(jint arg0)
	{
		callMethod<void>(
			"setDataPosition",
			"(I)V",
			arg0
		);
	}
	void Parcel::setDataSize(jint arg0)
	{
		callMethod<void>(
			"setDataSize",
			"(I)V",
			arg0
		);
	}
	void Parcel::unmarshall(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"unmarshall",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Parcel::writeArray(jobjectArray arg0)
	{
		callMethod<void>(
			"writeArray",
			"([Ljava/lang/Object;)V",
			arg0
		);
	}
	void Parcel::writeBinderArray(jarray arg0)
	{
		callMethod<void>(
			"writeBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0
		);
	}
	void Parcel::writeBinderList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeBooleanArray(jbooleanArray arg0)
	{
		callMethod<void>(
			"writeBooleanArray",
			"([Z)V",
			arg0
		);
	}
	void Parcel::writeBundle(android::os::Bundle arg0)
	{
		callMethod<void>(
			"writeBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Parcel::writeByte(jbyte arg0)
	{
		callMethod<void>(
			"writeByte",
			"(B)V",
			arg0
		);
	}
	void Parcel::writeByteArray(jbyteArray arg0)
	{
		callMethod<void>(
			"writeByteArray",
			"([B)V",
			arg0
		);
	}
	void Parcel::writeByteArray(jbyteArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"writeByteArray",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Parcel::writeCharArray(jcharArray arg0)
	{
		callMethod<void>(
			"writeCharArray",
			"([C)V",
			arg0
		);
	}
	void Parcel::writeDouble(jdouble arg0)
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	void Parcel::writeDoubleArray(jdoubleArray arg0)
	{
		callMethod<void>(
			"writeDoubleArray",
			"([D)V",
			arg0
		);
	}
	void Parcel::writeException(java::lang::Exception arg0)
	{
		callMethod<void>(
			"writeException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		);
	}
	void Parcel::writeFileDescriptor(java::io::FileDescriptor arg0)
	{
		callMethod<void>(
			"writeFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	void Parcel::writeFloat(jfloat arg0)
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	void Parcel::writeFloatArray(jfloatArray arg0)
	{
		callMethod<void>(
			"writeFloatArray",
			"([F)V",
			arg0
		);
	}
	void Parcel::writeInt(jint arg0)
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	void Parcel::writeIntArray(jintArray arg0)
	{
		callMethod<void>(
			"writeIntArray",
			"([I)V",
			arg0
		);
	}
	void Parcel::writeInterfaceToken(jstring arg0)
	{
		callMethod<void>(
			"writeInterfaceToken",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeLong(jlong arg0)
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	void Parcel::writeLongArray(jlongArray arg0)
	{
		callMethod<void>(
			"writeLongArray",
			"([J)V",
			arg0
		);
	}
	void Parcel::writeMap(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void Parcel::writeNoException()
	{
		callMethod<void>(
			"writeNoException",
			"()V"
		);
	}
	void Parcel::writeParcelable(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"writeParcelable",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeParcelableArray(jarray arg0, jint arg1)
	{
		callMethod<void>(
			"writeParcelableArray",
			"([Landroid/os/Parcelable;I)V",
			arg0,
			arg1
		);
	}
	void Parcel::writePersistableBundle(android::os::PersistableBundle arg0)
	{
		callMethod<void>(
			"writePersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	void Parcel::writeSerializable(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeSerializable",
			"(Ljava/io/Serializable;)V",
			arg0.object()
		);
	}
	void Parcel::writeSize(android::util::Size arg0)
	{
		callMethod<void>(
			"writeSize",
			"(Landroid/util/Size;)V",
			arg0.object()
		);
	}
	void Parcel::writeSizeF(android::util::SizeF arg0)
	{
		callMethod<void>(
			"writeSizeF",
			"(Landroid/util/SizeF;)V",
			arg0.object()
		);
	}
	void Parcel::writeSparseArray(android::util::SparseArray arg0)
	{
		callMethod<void>(
			"writeSparseArray",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	void Parcel::writeSparseBooleanArray(android::util::SparseBooleanArray arg0)
	{
		callMethod<void>(
			"writeSparseBooleanArray",
			"(Landroid/util/SparseBooleanArray;)V",
			arg0.object()
		);
	}
	void Parcel::writeString(jstring arg0)
	{
		callMethod<void>(
			"writeString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeStringArray(jarray arg0)
	{
		callMethod<void>(
			"writeStringArray",
			"([Ljava/lang/String;)V",
			arg0
		);
	}
	void Parcel::writeStringList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeStrongBinder(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeStrongBinder",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	void Parcel::writeStrongInterface(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeStrongInterface",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	void Parcel::writeTypedArray(jarray arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedArray",
			"([Landroid/os/Parcelable;I)V",
			arg0,
			arg1
		);
	}
	void Parcel::writeTypedList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"writeTypedList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void Parcel::writeTypedObject(__JniBaseClass arg0, jint arg1)
	{
		callMethod<void>(
			"writeTypedObject",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	void Parcel::writeValue(jobject arg0)
	{
		callMethod<void>(
			"writeValue",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
} // namespace android::os

