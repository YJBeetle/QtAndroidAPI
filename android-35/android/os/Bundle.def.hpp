#pragma once

#include "./BaseBundle.def.hpp"

class JByteArray;
class JCharArray;
class JFloatArray;
class JArray;
class JArray;
class JObjectArray;
class JShortArray;
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
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
namespace java::lang
{
	class Byte;
}
class JString;
class JClass;
namespace java::lang
{
	class ClassLoader;
}
class JObject;
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::os
{
	class Bundle : public android::os::BaseBundle
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::os::Bundle EMPTY();
		
		// QJniObject forward
		template<typename ...Ts> explicit Bundle(const char *className, const char *sig, Ts...agv) : android::os::BaseBundle(className, sig, std::forward<Ts>(agv)...) {}
		Bundle(QJniObject obj) : android::os::BaseBundle(obj) {}
		
		// Constructors
		Bundle();
		Bundle(android::os::Bundle &arg0);
		Bundle(android::os::PersistableBundle arg0);
		Bundle(jint arg0);
		Bundle(java::lang::ClassLoader arg0);
		
		// Methods
		void clear() const;
		JObject clone() const;
		android::os::Bundle deepCopy() const;
		jint describeContents() const;
		JObject getBinder(JString arg0) const;
		android::os::Bundle getBundle(JString arg0) const;
		jbyte getByte(JString arg0) const;
		java::lang::Byte getByte(JString arg0, jbyte arg1) const;
		JByteArray getByteArray(JString arg0) const;
		jchar getChar(JString arg0) const;
		jchar getChar(JString arg0, jchar arg1) const;
		JCharArray getCharArray(JString arg0) const;
		JString getCharSequence(JString arg0) const;
		JString getCharSequence(JString arg0, JString arg1) const;
		JArray getCharSequenceArray(JString arg0) const;
		java::util::ArrayList getCharSequenceArrayList(JString arg0) const;
		java::lang::ClassLoader getClassLoader() const;
		jfloat getFloat(JString arg0) const;
		jfloat getFloat(JString arg0, jfloat arg1) const;
		JFloatArray getFloatArray(JString arg0) const;
		java::util::ArrayList getIntegerArrayList(JString arg0) const;
		JObject getParcelable(JString arg0) const;
		JObject getParcelable(JString arg0, JClass arg1) const;
		JArray getParcelableArray(JString arg0) const;
		JObjectArray getParcelableArray(JString arg0, JClass arg1) const;
		java::util::ArrayList getParcelableArrayList(JString arg0) const;
		java::util::ArrayList getParcelableArrayList(JString arg0, JClass arg1) const;
		JObject getSerializable(JString arg0) const;
		JObject getSerializable(JString arg0, JClass arg1) const;
		jshort getShort(JString arg0) const;
		jshort getShort(JString arg0, jshort arg1) const;
		JShortArray getShortArray(JString arg0) const;
		android::util::Size getSize(JString arg0) const;
		android::util::SizeF getSizeF(JString arg0) const;
		android::util::SparseArray getSparseParcelableArray(JString arg0) const;
		android::util::SparseArray getSparseParcelableArray(JString arg0, JClass arg1) const;
		java::util::ArrayList getStringArrayList(JString arg0) const;
		jboolean hasFileDescriptors() const;
		void putAll(android::os::Bundle arg0) const;
		void putBinder(JString arg0, JObject arg1) const;
		void putBundle(JString arg0, android::os::Bundle arg1) const;
		void putByte(JString arg0, jbyte arg1) const;
		void putByteArray(JString arg0, JByteArray arg1) const;
		void putChar(JString arg0, jchar arg1) const;
		void putCharArray(JString arg0, JCharArray arg1) const;
		void putCharSequence(JString arg0, JString arg1) const;
		void putCharSequenceArray(JString arg0, JArray arg1) const;
		void putCharSequenceArrayList(JString arg0, java::util::ArrayList arg1) const;
		void putFloat(JString arg0, jfloat arg1) const;
		void putFloatArray(JString arg0, JFloatArray arg1) const;
		void putIntegerArrayList(JString arg0, java::util::ArrayList arg1) const;
		void putParcelable(JString arg0, JObject arg1) const;
		void putParcelableArray(JString arg0, JArray arg1) const;
		void putParcelableArrayList(JString arg0, java::util::ArrayList arg1) const;
		void putSerializable(JString arg0, JObject arg1) const;
		void putShort(JString arg0, jshort arg1) const;
		void putShortArray(JString arg0, JShortArray arg1) const;
		void putSize(JString arg0, android::util::Size arg1) const;
		void putSizeF(JString arg0, android::util::SizeF arg1) const;
		void putSparseParcelableArray(JString arg0, android::util::SparseArray arg1) const;
		void putStringArrayList(JString arg0, java::util::ArrayList arg1) const;
		void readFromParcel(android::os::Parcel arg0) const;
		void remove(JString arg0) const;
		void setClassLoader(java::lang::ClassLoader arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

