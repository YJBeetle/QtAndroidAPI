#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JCharArray;
class JDoubleArray;
class JFloatArray;
class JIntArray;
class JLongArray;
class JArray;
class JArray;
class JArray;
class JObjectArray;
class JArray;
class JBooleanArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace android::os
{
	class PersistableBundle;
}
namespace android::util
{
	class ArrayMap;
}
namespace android::util
{
	class Size;
}
namespace android::util
{
	class SizeF;
}
namespace android::util
{
	class SparseArray;
}
namespace android::util
{
	class SparseBooleanArray;
}
namespace java::io
{
	class FileDescriptor;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Exception;
}
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}
namespace java::util
{
	class HashMap;
}

namespace android::os
{
	class Parcel : public JObject
	{
	public:
		// Fields
		static JObject STRING_CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Parcel(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Parcel(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::os::Parcel obtain();
		static android::os::Parcel obtain(JObject arg0);
		void appendFrom(android::os::Parcel arg0, jint arg1, jint arg2) const;
		JArray createBinderArray() const;
		java::util::ArrayList createBinderArrayList() const;
		JBooleanArray createBooleanArray() const;
		JByteArray createByteArray() const;
		JCharArray createCharArray() const;
		JDoubleArray createDoubleArray() const;
		JObject createFixedArray(JClass arg0, JIntArray arg1) const;
		JObject createFixedArray(JClass arg0, JObject arg1, JIntArray arg2) const;
		JFloatArray createFloatArray() const;
		JIntArray createIntArray() const;
		JArray createInterfaceArray(JObject arg0, JObject arg1) const;
		java::util::ArrayList createInterfaceArrayList(JObject arg0) const;
		JLongArray createLongArray() const;
		JArray createStringArray() const;
		java::util::ArrayList createStringArrayList() const;
		JObjectArray createTypedArray(JObject arg0) const;
		java::util::ArrayList createTypedArrayList(JObject arg0) const;
		android::util::ArrayMap createTypedArrayMap(JObject arg0) const;
		android::util::SparseArray createTypedSparseArray(JObject arg0) const;
		jint dataAvail() const;
		jint dataCapacity() const;
		jint dataPosition() const;
		jint dataSize() const;
		void enforceInterface(JString arg0) const;
		void enforceNoDataAvail() const;
		jboolean hasFileDescriptors() const;
		jboolean hasFileDescriptors(jint arg0, jint arg1) const;
		JByteArray marshall() const;
		JObjectArray readArray(java::lang::ClassLoader arg0) const;
		JObjectArray readArray(java::lang::ClassLoader arg0, JClass arg1) const;
		java::util::ArrayList readArrayList(java::lang::ClassLoader arg0) const;
		java::util::ArrayList readArrayList(java::lang::ClassLoader arg0, JClass arg1) const;
		void readBinderArray(JArray arg0) const;
		void readBinderList(JObject arg0) const;
		JByteArray readBlob() const;
		jboolean readBoolean() const;
		void readBooleanArray(JBooleanArray arg0) const;
		android::os::Bundle readBundle() const;
		android::os::Bundle readBundle(java::lang::ClassLoader arg0) const;
		jbyte readByte() const;
		void readByteArray(JByteArray arg0) const;
		void readCharArray(JCharArray arg0) const;
		jdouble readDouble() const;
		void readDoubleArray(JDoubleArray arg0) const;
		void readException() const;
		void readException(jint arg0, JString arg1) const;
		android::os::ParcelFileDescriptor readFileDescriptor() const;
		void readFixedArray(JObject arg0) const;
		void readFixedArray(JObject arg0, JObject arg1) const;
		jfloat readFloat() const;
		void readFloatArray(JFloatArray arg0) const;
		java::util::HashMap readHashMap(java::lang::ClassLoader arg0) const;
		java::util::HashMap readHashMap(java::lang::ClassLoader arg0, JClass arg1, JClass arg2) const;
		jint readInt() const;
		void readIntArray(JIntArray arg0) const;
		void readInterfaceArray(JArray arg0, JObject arg1) const;
		void readInterfaceList(JObject arg0, JObject arg1) const;
		void readList(JObject arg0, java::lang::ClassLoader arg1) const;
		void readList(JObject arg0, java::lang::ClassLoader arg1, JClass arg2) const;
		jlong readLong() const;
		void readLongArray(JLongArray arg0) const;
		void readMap(JObject arg0, java::lang::ClassLoader arg1) const;
		void readMap(JObject arg0, java::lang::ClassLoader arg1, JClass arg2, JClass arg3) const;
		JObject readParcelable(java::lang::ClassLoader arg0) const;
		JObject readParcelable(java::lang::ClassLoader arg0, JClass arg1) const;
		JArray readParcelableArray(java::lang::ClassLoader arg0) const;
		JObjectArray readParcelableArray(java::lang::ClassLoader arg0, JClass arg1) const;
		JObject readParcelableCreator(java::lang::ClassLoader arg0) const;
		JObject readParcelableCreator(java::lang::ClassLoader arg0, JClass arg1) const;
		JObject readParcelableList(JObject arg0, java::lang::ClassLoader arg1) const;
		JObject readParcelableList(JObject arg0, java::lang::ClassLoader arg1, JClass arg2) const;
		android::os::PersistableBundle readPersistableBundle() const;
		android::os::PersistableBundle readPersistableBundle(java::lang::ClassLoader arg0) const;
		JObject readSerializable() const;
		JObject readSerializable(java::lang::ClassLoader arg0, JClass arg1) const;
		android::util::Size readSize() const;
		android::util::SizeF readSizeF() const;
		android::util::SparseArray readSparseArray(java::lang::ClassLoader arg0) const;
		android::util::SparseArray readSparseArray(java::lang::ClassLoader arg0, JClass arg1) const;
		android::util::SparseBooleanArray readSparseBooleanArray() const;
		JString readString() const;
		void readStringArray(JArray arg0) const;
		void readStringList(JObject arg0) const;
		JObject readStrongBinder() const;
		void readTypedArray(JObjectArray arg0, JObject arg1) const;
		void readTypedList(JObject arg0, JObject arg1) const;
		JObject readTypedObject(JObject arg0) const;
		JObject readValue(java::lang::ClassLoader arg0) const;
		void recycle() const;
		void setDataCapacity(jint arg0) const;
		void setDataPosition(jint arg0) const;
		void setDataSize(jint arg0) const;
		void setPropagateAllowBlocking() const;
		void unmarshall(JByteArray arg0, jint arg1, jint arg2) const;
		void writeArray(JObjectArray arg0) const;
		void writeBinderArray(JArray arg0) const;
		void writeBinderList(JObject arg0) const;
		void writeBlob(JByteArray arg0) const;
		void writeBlob(JByteArray arg0, jint arg1, jint arg2) const;
		void writeBoolean(jboolean arg0) const;
		void writeBooleanArray(JBooleanArray arg0) const;
		void writeBundle(android::os::Bundle arg0) const;
		void writeByte(jbyte arg0) const;
		void writeByteArray(JByteArray arg0) const;
		void writeByteArray(JByteArray arg0, jint arg1, jint arg2) const;
		void writeCharArray(JCharArray arg0) const;
		void writeDouble(jdouble arg0) const;
		void writeDoubleArray(JDoubleArray arg0) const;
		void writeException(java::lang::Exception arg0) const;
		void writeFileDescriptor(java::io::FileDescriptor arg0) const;
		void writeFixedArray(JObject arg0, jint arg1, JIntArray arg2) const;
		void writeFloat(jfloat arg0) const;
		void writeFloatArray(JFloatArray arg0) const;
		void writeInt(jint arg0) const;
		void writeIntArray(JIntArray arg0) const;
		void writeInterfaceArray(JArray arg0) const;
		void writeInterfaceList(JObject arg0) const;
		void writeInterfaceToken(JString arg0) const;
		void writeList(JObject arg0) const;
		void writeLong(jlong arg0) const;
		void writeLongArray(JLongArray arg0) const;
		void writeMap(JObject arg0) const;
		void writeNoException() const;
		void writeParcelable(JObject arg0, jint arg1) const;
		void writeParcelableArray(JArray arg0, jint arg1) const;
		void writeParcelableCreator(JObject arg0) const;
		void writeParcelableList(JObject arg0, jint arg1) const;
		void writePersistableBundle(android::os::PersistableBundle arg0) const;
		void writeSerializable(JObject arg0) const;
		void writeSize(android::util::Size arg0) const;
		void writeSizeF(android::util::SizeF arg0) const;
		void writeSparseArray(android::util::SparseArray arg0) const;
		void writeSparseBooleanArray(android::util::SparseBooleanArray arg0) const;
		void writeString(JString arg0) const;
		void writeStringArray(JArray arg0) const;
		void writeStringList(JObject arg0) const;
		void writeStrongBinder(JObject arg0) const;
		void writeStrongInterface(JObject arg0) const;
		void writeTypedArray(JArray arg0, jint arg1) const;
		void writeTypedArrayMap(android::util::ArrayMap arg0, jint arg1) const;
		void writeTypedList(JObject arg0) const;
		void writeTypedList(JObject arg0, jint arg1) const;
		void writeTypedObject(JObject arg0, jint arg1) const;
		void writeTypedSparseArray(android::util::SparseArray arg0, jint arg1) const;
		void writeValue(JObject arg0) const;
	};
} // namespace android::os

