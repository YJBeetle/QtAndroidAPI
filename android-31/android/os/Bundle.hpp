#pragma once

#include "../../JObject.hpp"
#include "./BaseBundle.hpp"

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
namespace java::lang
{
	class ClassLoader;
}
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
		Bundle(QJniObject obj);
		
		// Constructors
		Bundle();
		Bundle(android::os::Bundle &arg0);
		Bundle(android::os::PersistableBundle arg0);
		Bundle(jint arg0);
		Bundle(java::lang::ClassLoader arg0);
		
		// Methods
		void clear();
		jobject clone();
		android::os::Bundle deepCopy();
		jint describeContents();
		JObject getBinder(jstring arg0);
		android::os::Bundle getBundle(jstring arg0);
		jbyte getByte(jstring arg0);
		java::lang::Byte getByte(jstring arg0, jbyte arg1);
		jbyteArray getByteArray(jstring arg0);
		jchar getChar(jstring arg0);
		jchar getChar(jstring arg0, jchar arg1);
		jcharArray getCharArray(jstring arg0);
		jstring getCharSequence(jstring arg0);
		jstring getCharSequence(jstring arg0, jstring arg1);
		jarray getCharSequenceArray(jstring arg0);
		java::util::ArrayList getCharSequenceArrayList(jstring arg0);
		java::lang::ClassLoader getClassLoader();
		jfloat getFloat(jstring arg0);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jfloatArray getFloatArray(jstring arg0);
		java::util::ArrayList getIntegerArrayList(jstring arg0);
		JObject getParcelable(jstring arg0);
		jarray getParcelableArray(jstring arg0);
		java::util::ArrayList getParcelableArrayList(jstring arg0);
		JObject getSerializable(jstring arg0);
		jshort getShort(jstring arg0);
		jshort getShort(jstring arg0, jshort arg1);
		jshortArray getShortArray(jstring arg0);
		android::util::Size getSize(jstring arg0);
		android::util::SizeF getSizeF(jstring arg0);
		android::util::SparseArray getSparseParcelableArray(jstring arg0);
		java::util::ArrayList getStringArrayList(jstring arg0);
		jboolean hasFileDescriptors();
		void putAll(android::os::Bundle arg0);
		void putBinder(jstring arg0, JObject arg1);
		void putBundle(jstring arg0, android::os::Bundle arg1);
		void putByte(jstring arg0, jbyte arg1);
		void putByteArray(jstring arg0, jbyteArray arg1);
		void putChar(jstring arg0, jchar arg1);
		void putCharArray(jstring arg0, jcharArray arg1);
		void putCharSequence(jstring arg0, jstring arg1);
		void putCharSequenceArray(jstring arg0, jarray arg1);
		void putCharSequenceArrayList(jstring arg0, java::util::ArrayList arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void putFloatArray(jstring arg0, jfloatArray arg1);
		void putIntegerArrayList(jstring arg0, java::util::ArrayList arg1);
		void putParcelable(jstring arg0, JObject arg1);
		void putParcelableArray(jstring arg0, jarray arg1);
		void putParcelableArrayList(jstring arg0, java::util::ArrayList arg1);
		void putSerializable(jstring arg0, JObject arg1);
		void putShort(jstring arg0, jshort arg1);
		void putShortArray(jstring arg0, jshortArray arg1);
		void putSize(jstring arg0, android::util::Size arg1);
		void putSizeF(jstring arg0, android::util::SizeF arg1);
		void putSparseParcelableArray(jstring arg0, android::util::SparseArray arg1);
		void putStringArrayList(jstring arg0, java::util::ArrayList arg1);
		void readFromParcel(android::os::Parcel arg0);
		void remove(jstring arg0);
		void setClassLoader(java::lang::ClassLoader arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

