#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JDoubleArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JLongArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "./Bundle.def.hpp"
#include "./ParcelFileDescriptor.def.hpp"
#include "./PersistableBundle.def.hpp"
#include "../util/ArrayMap.def.hpp"
#include "../util/Size.def.hpp"
#include "../util/SizeF.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../util/SparseBooleanArray.def.hpp"
#include "../../java/io/FileDescriptor.def.hpp"
#include "../../JClass.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../java/lang/Exception.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "../../java/util/HashMap.def.hpp"
#include "./Parcel.def.hpp"

namespace android::os
{
	// Fields
	inline JObject Parcel::STRING_CREATOR()
	{
		return getStaticObjectField(
			"android.os.Parcel",
			"STRING_CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::os::Parcel Parcel::obtain()
	{
		return callStaticObjectMethod(
			"android.os.Parcel",
			"obtain",
			"()Landroid/os/Parcel;"
		);
	}
	inline android::os::Parcel Parcel::obtain(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.os.Parcel",
			"obtain",
			"(Landroid/os/IBinder;)Landroid/os/Parcel;",
			arg0.object()
		);
	}
	inline void Parcel::appendFrom(android::os::Parcel arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"appendFrom",
			"(Landroid/os/Parcel;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JArray Parcel::createBinderArray() const
	{
		return callObjectMethod(
			"createBinderArray",
			"()[Landroid/os/IBinder;"
		);
	}
	inline java::util::ArrayList Parcel::createBinderArrayList() const
	{
		return callObjectMethod(
			"createBinderArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	inline JBooleanArray Parcel::createBooleanArray() const
	{
		return callObjectMethod(
			"createBooleanArray",
			"()[Z"
		);
	}
	inline JByteArray Parcel::createByteArray() const
	{
		return callObjectMethod(
			"createByteArray",
			"()[B"
		);
	}
	inline JCharArray Parcel::createCharArray() const
	{
		return callObjectMethod(
			"createCharArray",
			"()[C"
		);
	}
	inline JDoubleArray Parcel::createDoubleArray() const
	{
		return callObjectMethod(
			"createDoubleArray",
			"()[D"
		);
	}
	inline JObject Parcel::createFixedArray(JClass arg0, JIntArray arg1) const
	{
		return callObjectMethod(
			"createFixedArray",
			"(Ljava/lang/Class;[I)Ljava/lang/Object;",
			arg0.object<jclass>(),
			arg1.object<jintArray>()
		);
	}
	inline JObject Parcel::createFixedArray(JClass arg0, JObject arg1, JIntArray arg2) const
	{
		return callObjectMethod(
			"createFixedArray",
			"(Ljava/lang/Class;Landroid/os/Parcelable$Creator;[I)Ljava/lang/Object;",
			arg0.object<jclass>(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
	inline JFloatArray Parcel::createFloatArray() const
	{
		return callObjectMethod(
			"createFloatArray",
			"()[F"
		);
	}
	inline JIntArray Parcel::createIntArray() const
	{
		return callObjectMethod(
			"createIntArray",
			"()[I"
		);
	}
	inline JArray Parcel::createInterfaceArray(JObject arg0, JObject arg1) const
	{
		return callObjectMethod(
			"createInterfaceArray",
			"(Ljava/util/function/IntFunction;Ljava/util/function/Function;)[Landroid/os/IInterface;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::util::ArrayList Parcel::createInterfaceArrayList(JObject arg0) const
	{
		return callObjectMethod(
			"createInterfaceArrayList",
			"(Ljava/util/function/Function;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	inline JLongArray Parcel::createLongArray() const
	{
		return callObjectMethod(
			"createLongArray",
			"()[J"
		);
	}
	inline JArray Parcel::createStringArray() const
	{
		return callObjectMethod(
			"createStringArray",
			"()[Ljava/lang/String;"
		);
	}
	inline java::util::ArrayList Parcel::createStringArrayList() const
	{
		return callObjectMethod(
			"createStringArrayList",
			"()Ljava/util/ArrayList;"
		);
	}
	inline JObjectArray Parcel::createTypedArray(JObject arg0) const
	{
		return callObjectMethod(
			"createTypedArray",
			"(Landroid/os/Parcelable$Creator;)[Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::util::ArrayList Parcel::createTypedArrayList(JObject arg0) const
	{
		return callObjectMethod(
			"createTypedArrayList",
			"(Landroid/os/Parcelable$Creator;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	inline android::util::ArrayMap Parcel::createTypedArrayMap(JObject arg0) const
	{
		return callObjectMethod(
			"createTypedArrayMap",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/ArrayMap;",
			arg0.object()
		);
	}
	inline android::util::SparseArray Parcel::createTypedSparseArray(JObject arg0) const
	{
		return callObjectMethod(
			"createTypedSparseArray",
			"(Landroid/os/Parcelable$Creator;)Landroid/util/SparseArray;",
			arg0.object()
		);
	}
	inline jint Parcel::dataAvail() const
	{
		return callMethod<jint>(
			"dataAvail",
			"()I"
		);
	}
	inline jint Parcel::dataCapacity() const
	{
		return callMethod<jint>(
			"dataCapacity",
			"()I"
		);
	}
	inline jint Parcel::dataPosition() const
	{
		return callMethod<jint>(
			"dataPosition",
			"()I"
		);
	}
	inline jint Parcel::dataSize() const
	{
		return callMethod<jint>(
			"dataSize",
			"()I"
		);
	}
	inline void Parcel::enforceInterface(JString arg0) const
	{
		callMethod<void>(
			"enforceInterface",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Parcel::enforceNoDataAvail() const
	{
		callMethod<void>(
			"enforceNoDataAvail",
			"()V"
		);
	}
	inline jboolean Parcel::hasFileDescriptors() const
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	inline jboolean Parcel::hasFileDescriptors(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline JByteArray Parcel::marshall() const
	{
		return callObjectMethod(
			"marshall",
			"()[B"
		);
	}
	inline JObjectArray Parcel::readArray(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readArray",
			"(Ljava/lang/ClassLoader;)[Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObjectArray Parcel::readArray(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readArray",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)[Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline java::util::ArrayList Parcel::readArrayList(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readArrayList",
			"(Ljava/lang/ClassLoader;)Ljava/util/ArrayList;",
			arg0.object()
		);
	}
	inline java::util::ArrayList Parcel::readArrayList(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readArrayList",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)Ljava/util/ArrayList;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline void Parcel::readBinderArray(JArray arg0) const
	{
		callMethod<void>(
			"readBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0.object<jarray>()
		);
	}
	inline void Parcel::readBinderList(JObject arg0) const
	{
		callMethod<void>(
			"readBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline JByteArray Parcel::readBlob() const
	{
		return callObjectMethod(
			"readBlob",
			"()[B"
		);
	}
	inline jboolean Parcel::readBoolean() const
	{
		return callMethod<jboolean>(
			"readBoolean",
			"()Z"
		);
	}
	inline void Parcel::readBooleanArray(JBooleanArray arg0) const
	{
		callMethod<void>(
			"readBooleanArray",
			"([Z)V",
			arg0.object<jbooleanArray>()
		);
	}
	inline android::os::Bundle Parcel::readBundle() const
	{
		return callObjectMethod(
			"readBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::os::Bundle Parcel::readBundle(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline jbyte Parcel::readByte() const
	{
		return callMethod<jbyte>(
			"readByte",
			"()B"
		);
	}
	inline void Parcel::readByteArray(JByteArray arg0) const
	{
		callMethod<void>(
			"readByteArray",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Parcel::readCharArray(JCharArray arg0) const
	{
		callMethod<void>(
			"readCharArray",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline jdouble Parcel::readDouble() const
	{
		return callMethod<jdouble>(
			"readDouble",
			"()D"
		);
	}
	inline void Parcel::readDoubleArray(JDoubleArray arg0) const
	{
		callMethod<void>(
			"readDoubleArray",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	inline void Parcel::readException() const
	{
		callMethod<void>(
			"readException",
			"()V"
		);
	}
	inline void Parcel::readException(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"readException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	inline android::os::ParcelFileDescriptor Parcel::readFileDescriptor() const
	{
		return callObjectMethod(
			"readFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	inline void Parcel::readFixedArray(JObject arg0) const
	{
		callMethod<void>(
			"readFixedArray",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
	inline void Parcel::readFixedArray(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"readFixedArray",
			"(Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V",
			arg0.object<jobject>(),
			arg1.object()
		);
	}
	inline jfloat Parcel::readFloat() const
	{
		return callMethod<jfloat>(
			"readFloat",
			"()F"
		);
	}
	inline void Parcel::readFloatArray(JFloatArray arg0) const
	{
		callMethod<void>(
			"readFloatArray",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline java::util::HashMap Parcel::readHashMap(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readHashMap",
			"(Ljava/lang/ClassLoader;)Ljava/util/HashMap;",
			arg0.object()
		);
	}
	inline java::util::HashMap Parcel::readHashMap(java::lang::ClassLoader arg0, JClass arg1, JClass arg2) const
	{
		return callObjectMethod(
			"readHashMap",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/HashMap;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object<jclass>()
		);
	}
	inline jint Parcel::readInt() const
	{
		return callMethod<jint>(
			"readInt",
			"()I"
		);
	}
	inline void Parcel::readIntArray(JIntArray arg0) const
	{
		callMethod<void>(
			"readIntArray",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void Parcel::readInterfaceArray(JArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"readInterfaceArray",
			"([Landroid/os/IInterface;Ljava/util/function/Function;)V",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void Parcel::readInterfaceList(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"readInterfaceList",
			"(Ljava/util/List;Ljava/util/function/Function;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Parcel::readList(JObject arg0, java::lang::ClassLoader arg1) const
	{
		callMethod<void>(
			"readList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Parcel::readList(JObject arg0, java::lang::ClassLoader arg1, JClass arg2) const
	{
		callMethod<void>(
			"readList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jclass>()
		);
	}
	inline jlong Parcel::readLong() const
	{
		return callMethod<jlong>(
			"readLong",
			"()J"
		);
	}
	inline void Parcel::readLongArray(JLongArray arg0) const
	{
		callMethod<void>(
			"readLongArray",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline void Parcel::readMap(JObject arg0, java::lang::ClassLoader arg1) const
	{
		callMethod<void>(
			"readMap",
			"(Ljava/util/Map;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Parcel::readMap(JObject arg0, java::lang::ClassLoader arg1, JClass arg2, JClass arg3) const
	{
		callMethod<void>(
			"readMap",
			"(Ljava/util/Map;Ljava/lang/ClassLoader;Ljava/lang/Class;Ljava/lang/Class;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jclass>(),
			arg3.object<jclass>()
		);
	}
	inline JObject Parcel::readParcelable(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readParcelable",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable;",
			arg0.object()
		);
	}
	inline JObject Parcel::readParcelable(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readParcelable",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline JArray Parcel::readParcelableArray(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readParcelableArray",
			"(Ljava/lang/ClassLoader;)[Landroid/os/Parcelable;",
			arg0.object()
		);
	}
	inline JObjectArray Parcel::readParcelableArray(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readParcelableArray",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)[Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline JObject Parcel::readParcelableCreator(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readParcelableCreator",
			"(Ljava/lang/ClassLoader;)Landroid/os/Parcelable$Creator;",
			arg0.object()
		);
	}
	inline JObject Parcel::readParcelableCreator(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readParcelableCreator",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)Landroid/os/Parcelable$Creator;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline JObject Parcel::readParcelableList(JObject arg0, java::lang::ClassLoader arg1) const
	{
		return callObjectMethod(
			"readParcelableList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;)Ljava/util/List;",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Parcel::readParcelableList(JObject arg0, java::lang::ClassLoader arg1, JClass arg2) const
	{
		return callObjectMethod(
			"readParcelableList",
			"(Ljava/util/List;Ljava/lang/ClassLoader;Ljava/lang/Class;)Ljava/util/List;",
			arg0.object(),
			arg1.object(),
			arg2.object<jclass>()
		);
	}
	inline android::os::PersistableBundle Parcel::readPersistableBundle() const
	{
		return callObjectMethod(
			"readPersistableBundle",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::os::PersistableBundle Parcel::readPersistableBundle(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readPersistableBundle",
			"(Ljava/lang/ClassLoader;)Landroid/os/PersistableBundle;",
			arg0.object()
		);
	}
	inline JObject Parcel::readSerializable() const
	{
		return callObjectMethod(
			"readSerializable",
			"()Ljava/io/Serializable;"
		);
	}
	inline JObject Parcel::readSerializable(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readSerializable",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline android::util::Size Parcel::readSize() const
	{
		return callObjectMethod(
			"readSize",
			"()Landroid/util/Size;"
		);
	}
	inline android::util::SizeF Parcel::readSizeF() const
	{
		return callObjectMethod(
			"readSizeF",
			"()Landroid/util/SizeF;"
		);
	}
	inline android::util::SparseArray Parcel::readSparseArray(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readSparseArray",
			"(Ljava/lang/ClassLoader;)Landroid/util/SparseArray;",
			arg0.object()
		);
	}
	inline android::util::SparseArray Parcel::readSparseArray(java::lang::ClassLoader arg0, JClass arg1) const
	{
		return callObjectMethod(
			"readSparseArray",
			"(Ljava/lang/ClassLoader;Ljava/lang/Class;)Landroid/util/SparseArray;",
			arg0.object(),
			arg1.object<jclass>()
		);
	}
	inline android::util::SparseBooleanArray Parcel::readSparseBooleanArray() const
	{
		return callObjectMethod(
			"readSparseBooleanArray",
			"()Landroid/util/SparseBooleanArray;"
		);
	}
	inline JString Parcel::readString() const
	{
		return callObjectMethod(
			"readString",
			"()Ljava/lang/String;"
		);
	}
	inline void Parcel::readStringArray(JArray arg0) const
	{
		callMethod<void>(
			"readStringArray",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void Parcel::readStringList(JObject arg0) const
	{
		callMethod<void>(
			"readStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline JObject Parcel::readStrongBinder() const
	{
		return callObjectMethod(
			"readStrongBinder",
			"()Landroid/os/IBinder;"
		);
	}
	inline void Parcel::readTypedArray(JObjectArray arg0, JObject arg1) const
	{
		callMethod<void>(
			"readTypedArray",
			"([Ljava/lang/Object;Landroid/os/Parcelable$Creator;)V",
			arg0.object<jobjectArray>(),
			arg1.object()
		);
	}
	inline void Parcel::readTypedList(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"readTypedList",
			"(Ljava/util/List;Landroid/os/Parcelable$Creator;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline JObject Parcel::readTypedObject(JObject arg0) const
	{
		return callObjectMethod(
			"readTypedObject",
			"(Landroid/os/Parcelable$Creator;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject Parcel::readValue(java::lang::ClassLoader arg0) const
	{
		return callObjectMethod(
			"readValue",
			"(Ljava/lang/ClassLoader;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline void Parcel::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	inline void Parcel::setDataCapacity(jint arg0) const
	{
		callMethod<void>(
			"setDataCapacity",
			"(I)V",
			arg0
		);
	}
	inline void Parcel::setDataPosition(jint arg0) const
	{
		callMethod<void>(
			"setDataPosition",
			"(I)V",
			arg0
		);
	}
	inline void Parcel::setDataSize(jint arg0) const
	{
		callMethod<void>(
			"setDataSize",
			"(I)V",
			arg0
		);
	}
	inline void Parcel::setPropagateAllowBlocking() const
	{
		callMethod<void>(
			"setPropagateAllowBlocking",
			"()V"
		);
	}
	inline void Parcel::unmarshall(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"unmarshall",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Parcel::writeArray(JObjectArray arg0) const
	{
		callMethod<void>(
			"writeArray",
			"([Ljava/lang/Object;)V",
			arg0.object<jobjectArray>()
		);
	}
	inline void Parcel::writeBinderArray(JArray arg0) const
	{
		callMethod<void>(
			"writeBinderArray",
			"([Landroid/os/IBinder;)V",
			arg0.object<jarray>()
		);
	}
	inline void Parcel::writeBinderList(JObject arg0) const
	{
		callMethod<void>(
			"writeBinderList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeBlob(JByteArray arg0) const
	{
		callMethod<void>(
			"writeBlob",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Parcel::writeBlob(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"writeBlob",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Parcel::writeBoolean(jboolean arg0) const
	{
		callMethod<void>(
			"writeBoolean",
			"(Z)V",
			arg0
		);
	}
	inline void Parcel::writeBooleanArray(JBooleanArray arg0) const
	{
		callMethod<void>(
			"writeBooleanArray",
			"([Z)V",
			arg0.object<jbooleanArray>()
		);
	}
	inline void Parcel::writeBundle(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"writeBundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeByte(jbyte arg0) const
	{
		callMethod<void>(
			"writeByte",
			"(B)V",
			arg0
		);
	}
	inline void Parcel::writeByteArray(JByteArray arg0) const
	{
		callMethod<void>(
			"writeByteArray",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void Parcel::writeByteArray(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"writeByteArray",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void Parcel::writeCharArray(JCharArray arg0) const
	{
		callMethod<void>(
			"writeCharArray",
			"([C)V",
			arg0.object<jcharArray>()
		);
	}
	inline void Parcel::writeDouble(jdouble arg0) const
	{
		callMethod<void>(
			"writeDouble",
			"(D)V",
			arg0
		);
	}
	inline void Parcel::writeDoubleArray(JDoubleArray arg0) const
	{
		callMethod<void>(
			"writeDoubleArray",
			"([D)V",
			arg0.object<jdoubleArray>()
		);
	}
	inline void Parcel::writeException(java::lang::Exception arg0) const
	{
		callMethod<void>(
			"writeException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeFileDescriptor(java::io::FileDescriptor arg0) const
	{
		callMethod<void>(
			"writeFileDescriptor",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeFixedArray(JObject arg0, jint arg1, JIntArray arg2) const
	{
		callMethod<void>(
			"writeFixedArray",
			"(Ljava/lang/Object;I[I)V",
			arg0.object<jobject>(),
			arg1,
			arg2.object<jintArray>()
		);
	}
	inline void Parcel::writeFloat(jfloat arg0) const
	{
		callMethod<void>(
			"writeFloat",
			"(F)V",
			arg0
		);
	}
	inline void Parcel::writeFloatArray(JFloatArray arg0) const
	{
		callMethod<void>(
			"writeFloatArray",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void Parcel::writeInt(jint arg0) const
	{
		callMethod<void>(
			"writeInt",
			"(I)V",
			arg0
		);
	}
	inline void Parcel::writeIntArray(JIntArray arg0) const
	{
		callMethod<void>(
			"writeIntArray",
			"([I)V",
			arg0.object<jintArray>()
		);
	}
	inline void Parcel::writeInterfaceArray(JArray arg0) const
	{
		callMethod<void>(
			"writeInterfaceArray",
			"([Landroid/os/IInterface;)V",
			arg0.object<jarray>()
		);
	}
	inline void Parcel::writeInterfaceList(JObject arg0) const
	{
		callMethod<void>(
			"writeInterfaceList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeInterfaceToken(JString arg0) const
	{
		callMethod<void>(
			"writeInterfaceToken",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Parcel::writeList(JObject arg0) const
	{
		callMethod<void>(
			"writeList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeLong(jlong arg0) const
	{
		callMethod<void>(
			"writeLong",
			"(J)V",
			arg0
		);
	}
	inline void Parcel::writeLongArray(JLongArray arg0) const
	{
		callMethod<void>(
			"writeLongArray",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline void Parcel::writeMap(JObject arg0) const
	{
		callMethod<void>(
			"writeMap",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeNoException() const
	{
		callMethod<void>(
			"writeNoException",
			"()V"
		);
	}
	inline void Parcel::writeParcelable(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"writeParcelable",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Parcel::writeParcelableArray(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"writeParcelableArray",
			"([Landroid/os/Parcelable;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline void Parcel::writeParcelableCreator(JObject arg0) const
	{
		callMethod<void>(
			"writeParcelableCreator",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeParcelableList(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"writeParcelableList",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Parcel::writePersistableBundle(android::os::PersistableBundle arg0) const
	{
		callMethod<void>(
			"writePersistableBundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeSerializable(JObject arg0) const
	{
		callMethod<void>(
			"writeSerializable",
			"(Ljava/io/Serializable;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeSize(android::util::Size arg0) const
	{
		callMethod<void>(
			"writeSize",
			"(Landroid/util/Size;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeSizeF(android::util::SizeF arg0) const
	{
		callMethod<void>(
			"writeSizeF",
			"(Landroid/util/SizeF;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeSparseArray(android::util::SparseArray arg0) const
	{
		callMethod<void>(
			"writeSparseArray",
			"(Landroid/util/SparseArray;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeSparseBooleanArray(android::util::SparseBooleanArray arg0) const
	{
		callMethod<void>(
			"writeSparseBooleanArray",
			"(Landroid/util/SparseBooleanArray;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeString(JString arg0) const
	{
		callMethod<void>(
			"writeString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Parcel::writeStringArray(JArray arg0) const
	{
		callMethod<void>(
			"writeStringArray",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void Parcel::writeStringList(JObject arg0) const
	{
		callMethod<void>(
			"writeStringList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeStrongBinder(JObject arg0) const
	{
		callMethod<void>(
			"writeStrongBinder",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeStrongInterface(JObject arg0) const
	{
		callMethod<void>(
			"writeStrongInterface",
			"(Landroid/os/IInterface;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeTypedArray(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"writeTypedArray",
			"([Landroid/os/Parcelable;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline void Parcel::writeTypedArrayMap(android::util::ArrayMap arg0, jint arg1) const
	{
		callMethod<void>(
			"writeTypedArrayMap",
			"(Landroid/util/ArrayMap;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Parcel::writeTypedList(JObject arg0) const
	{
		callMethod<void>(
			"writeTypedList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void Parcel::writeTypedObject(JObject arg0, jint arg1) const
	{
		callMethod<void>(
			"writeTypedObject",
			"(Landroid/os/Parcelable;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Parcel::writeTypedSparseArray(android::util::SparseArray arg0, jint arg1) const
	{
		callMethod<void>(
			"writeTypedSparseArray",
			"(Landroid/util/SparseArray;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Parcel::writeValue(JObject arg0) const
	{
		callMethod<void>(
			"writeValue",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
