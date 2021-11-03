#pragma once

#include "./BaseBundle.hpp"

class JByteArray;
class JCharArray;
class JFloatArray;
class JArray;
class JArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Bundle(const char *className, const char *sig, Ts...agv) : android::os::BaseBundle(className, sig, std::forward<Ts>(agv)...) {}
		Bundle(QAndroidJniObject obj);
		
		// Constructors
		Bundle();
		Bundle(android::os::Bundle &arg0);
		Bundle(android::os::PersistableBundle arg0);
		Bundle(jint arg0);
		Bundle(java::lang::ClassLoader arg0);
		
		// Methods
		void clear();
		JObject clone();
		android::os::Bundle deepCopy();
		jint describeContents();
		JObject getBinder(JString arg0);
		android::os::Bundle getBundle(JString arg0);
		jbyte getByte(JString arg0);
		java::lang::Byte getByte(JString arg0, jbyte arg1);
		JByteArray getByteArray(JString arg0);
		jchar getChar(JString arg0);
		jchar getChar(JString arg0, jchar arg1);
		JCharArray getCharArray(JString arg0);
		JString getCharSequence(JString arg0);
		JString getCharSequence(JString arg0, JString arg1);
		JArray getCharSequenceArray(JString arg0);
		java::util::ArrayList getCharSequenceArrayList(JString arg0);
		java::lang::ClassLoader getClassLoader();
		jfloat getFloat(JString arg0);
		jfloat getFloat(JString arg0, jfloat arg1);
		JFloatArray getFloatArray(JString arg0);
		java::util::ArrayList getIntegerArrayList(JString arg0);
		JObject getParcelable(JString arg0);
		JArray getParcelableArray(JString arg0);
		java::util::ArrayList getParcelableArrayList(JString arg0);
		JObject getSerializable(JString arg0);
		jshort getShort(JString arg0);
		jshort getShort(JString arg0, jshort arg1);
		JShortArray getShortArray(JString arg0);
		android::util::Size getSize(JString arg0);
		android::util::SizeF getSizeF(JString arg0);
		android::util::SparseArray getSparseParcelableArray(JString arg0);
		java::util::ArrayList getStringArrayList(JString arg0);
		jboolean hasFileDescriptors();
		void putAll(android::os::Bundle arg0);
		void putBinder(JString arg0, JObject arg1);
		void putBundle(JString arg0, android::os::Bundle arg1);
		void putByte(JString arg0, jbyte arg1);
		void putByteArray(JString arg0, JByteArray arg1);
		void putChar(JString arg0, jchar arg1);
		void putCharArray(JString arg0, JCharArray arg1);
		void putCharSequence(JString arg0, JString arg1);
		void putCharSequenceArray(JString arg0, JArray arg1);
		void putCharSequenceArrayList(JString arg0, java::util::ArrayList arg1);
		void putFloat(JString arg0, jfloat arg1);
		void putFloatArray(JString arg0, JFloatArray arg1);
		void putIntegerArrayList(JString arg0, java::util::ArrayList arg1);
		void putParcelable(JString arg0, JObject arg1);
		void putParcelableArray(JString arg0, JArray arg1);
		void putParcelableArrayList(JString arg0, java::util::ArrayList arg1);
		void putSerializable(JString arg0, JObject arg1);
		void putShort(JString arg0, jshort arg1);
		void putShortArray(JString arg0, JShortArray arg1);
		void putSize(JString arg0, android::util::Size arg1);
		void putSizeF(JString arg0, android::util::SizeF arg1);
		void putSparseParcelableArray(JString arg0, android::util::SparseArray arg1);
		void putStringArrayList(JString arg0, java::util::ArrayList arg1);
		void readFromParcel(android::os::Parcel arg0);
		void remove(JString arg0);
		void setClassLoader(java::lang::ClassLoader arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

