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
	__JniBaseClass Bundle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::os::Bundle Bundle::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"EMPTY",
			"Landroid/os/Bundle;"
		);
	}
	
	// QAndroidJniObject forward
	Bundle::Bundle(QAndroidJniObject obj) : android::os::BaseBundle(obj) {}
	
	// Constructors
	Bundle::Bundle()
		: android::os::BaseBundle(
			"android.os.Bundle",
			"()V"
		) {}
	Bundle::Bundle(android::os::Bundle &arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	Bundle::Bundle(android::os::PersistableBundle arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		) {}
	Bundle::Bundle(jint arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(I)V",
			arg0
		) {}
	Bundle::Bundle(java::lang::ClassLoader arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		) {}
	
	// Methods
	void Bundle::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Bundle::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	android::os::Bundle Bundle::deepCopy()
	{
		return callObjectMethod(
			"deepCopy",
			"()Landroid/os/Bundle;"
		);
	}
	jint Bundle::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	__JniBaseClass Bundle::getBinder(jstring arg0)
	{
		return callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0
		);
	}
	android::os::Bundle Bundle::getBundle(jstring arg0)
	{
		return callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	jbyte Bundle::getByte(jstring arg0)
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0
		);
	}
	java::lang::Byte Bundle::getByte(jstring arg0, jbyte arg1)
	{
		return callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			arg0,
			arg1
		);
	}
	jbyteArray Bundle::getByteArray(jstring arg0)
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jchar Bundle::getChar(jstring arg0)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0
		);
	}
	jchar Bundle::getChar(jstring arg0, jchar arg1)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jcharArray Bundle::getCharArray(jstring arg0)
	{
		return callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jstring Bundle::getCharSequence(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Bundle::getCharSequence(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jarray Bundle::getCharSequenceArray(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	java::util::ArrayList Bundle::getCharSequenceArrayList(jstring arg0)
	{
		return callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	java::lang::ClassLoader Bundle::getClassLoader()
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jfloat Bundle::getFloat(jstring arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Bundle::getFloat(jstring arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jfloatArray Bundle::getFloatArray(jstring arg0)
	{
		return callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	java::util::ArrayList Bundle::getIntegerArrayList(jstring arg0)
	{
		return callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	__JniBaseClass Bundle::getParcelable(jstring arg0)
	{
		return callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0
		);
	}
	jarray Bundle::getParcelableArray(jstring arg0)
	{
		return callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
		).object<jarray>();
	}
	java::util::ArrayList Bundle::getParcelableArrayList(jstring arg0)
	{
		return callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	__JniBaseClass Bundle::getSerializable(jstring arg0)
	{
		return callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0
		);
	}
	jshort Bundle::getShort(jstring arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Bundle::getShort(jstring arg0, jshort arg1)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jshortArray Bundle::getShortArray(jstring arg0)
	{
		return callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	android::util::Size Bundle::getSize(jstring arg0)
	{
		return callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
		);
	}
	android::util::SizeF Bundle::getSizeF(jstring arg0)
	{
		return callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	android::util::SparseArray Bundle::getSparseParcelableArray(jstring arg0)
	{
		return callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0
		);
	}
	java::util::ArrayList Bundle::getStringArrayList(jstring arg0)
	{
		return callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	jboolean Bundle::hasFileDescriptors()
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	void Bundle::putAll(android::os::Bundle arg0)
	{
		callMethod<void>(
			"putAll",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Bundle::putBinder(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putBundle(jstring arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putByte(jstring arg0, jbyte arg1)
	{
		callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putByteArray(jstring arg0, jbyteArray arg1)
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putChar(jstring arg0, jchar arg1)
	{
		callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharArray(jstring arg0, jcharArray arg1)
	{
		callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequence(jstring arg0, jstring arg1)
	{
		callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequenceArray(jstring arg0, jarray arg1)
	{
		callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequenceArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putFloat(jstring arg0, jfloat arg1)
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putFloatArray(jstring arg0, jfloatArray arg1)
	{
		callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putIntegerArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putParcelable(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putParcelableArray(jstring arg0, jarray arg1)
	{
		callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putParcelableArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putSerializable(jstring arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putShort(jstring arg0, jshort arg1)
	{
		callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putShortArray(jstring arg0, jshortArray arg1)
	{
		callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putSize(jstring arg0, android::util::Size arg1)
	{
		callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putSizeF(jstring arg0, android::util::SizeF arg1)
	{
		callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putSparseParcelableArray(jstring arg0, android::util::SparseArray arg1)
	{
		callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::putStringArrayList(jstring arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.object()
		);
	}
	void Bundle::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void Bundle::remove(jstring arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Bundle::setClassLoader(java::lang::ClassLoader arg0)
	{
		callMethod<void>(
			"setClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	jstring Bundle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Bundle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

