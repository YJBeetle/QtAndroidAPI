#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JShortArray.hpp"
#include "./Parcel.hpp"
#include "./PersistableBundle.hpp"
#include "../util/Size.hpp"
#include "../util/SizeF.hpp"
#include "../util/SparseArray.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../JString.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./Bundle.hpp"

namespace android::os
{
	// Fields
	JObject Bundle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Bundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::os::Bundle Bundle::EMPTY()
	{
		return getStaticObjectField(
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
	JObject Bundle::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
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
	JObject Bundle::getBinder(JString arg0)
	{
		return callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0.object<jstring>()
		);
	}
	android::os::Bundle Bundle::getBundle(JString arg0)
	{
		return callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object<jstring>()
		);
	}
	jbyte Bundle::getByte(JString arg0)
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0.object<jstring>()
		);
	}
	java::lang::Byte Bundle::getByte(JString arg0, jbyte arg1)
	{
		return callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JByteArray Bundle::getByteArray(JString arg0)
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	jchar Bundle::getChar(JString arg0)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0.object<jstring>()
		);
	}
	jchar Bundle::getChar(JString arg0, jchar arg1)
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			arg0.object<jstring>(),
			arg1
		);
	}
	JCharArray Bundle::getCharArray(JString arg0)
	{
		return callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0.object<jstring>()
		);
	}
	JString Bundle::getCharSequence(JString arg0)
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	JString Bundle::getCharSequence(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JArray Bundle::getCharSequenceArray(JString arg0)
	{
		return callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Bundle::getCharSequenceArrayList(JString arg0)
	{
		return callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	java::lang::ClassLoader Bundle::getClassLoader()
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jfloat Bundle::getFloat(JString arg0)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	jfloat Bundle::getFloat(JString arg0, jfloat arg1)
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	JFloatArray Bundle::getFloatArray(JString arg0)
	{
		return callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Bundle::getIntegerArrayList(JString arg0)
	{
		return callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JObject Bundle::getParcelable(JString arg0)
	{
		return callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	JArray Bundle::getParcelableArray(JString arg0)
	{
		return callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Bundle::getParcelableArrayList(JString arg0)
	{
		return callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	JObject Bundle::getSerializable(JString arg0)
	{
		return callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0.object<jstring>()
		);
	}
	jshort Bundle::getShort(JString arg0)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			arg0.object<jstring>()
		);
	}
	jshort Bundle::getShort(JString arg0, jshort arg1)
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	JShortArray Bundle::getShortArray(JString arg0)
	{
		return callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0.object<jstring>()
		);
	}
	android::util::Size Bundle::getSize(JString arg0)
	{
		return callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0.object<jstring>()
		);
	}
	android::util::SizeF Bundle::getSizeF(JString arg0)
	{
		return callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0.object<jstring>()
		);
	}
	android::util::SparseArray Bundle::getSparseParcelableArray(JString arg0)
	{
		return callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0.object<jstring>()
		);
	}
	java::util::ArrayList Bundle::getStringArrayList(JString arg0)
	{
		return callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
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
	void Bundle::putBinder(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putBundle(JString arg0, android::os::Bundle arg1)
	{
		callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putByte(JString arg0, jbyte arg1)
	{
		callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Bundle::putByteArray(JString arg0, JByteArray arg1)
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	void Bundle::putChar(JString arg0, jchar arg1)
	{
		callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Bundle::putCharArray(JString arg0, JCharArray arg1)
	{
		callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	void Bundle::putCharSequence(JString arg0, JString arg1)
	{
		callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void Bundle::putCharSequenceArray(JString arg0, JArray arg1)
	{
		callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	void Bundle::putCharSequenceArrayList(JString arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putFloat(JString arg0, jfloat arg1)
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Bundle::putFloatArray(JString arg0, JFloatArray arg1)
	{
		callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	void Bundle::putIntegerArrayList(JString arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putParcelable(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putParcelableArray(JString arg0, JArray arg1)
	{
		callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	void Bundle::putParcelableArrayList(JString arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putSerializable(JString arg0, JObject arg1)
	{
		callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putShort(JString arg0, jshort arg1)
	{
		callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void Bundle::putShortArray(JString arg0, JShortArray arg1)
	{
		callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			arg0.object<jstring>(),
			arg1.object<jshortArray>()
		);
	}
	void Bundle::putSize(JString arg0, android::util::Size arg1)
	{
		callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putSizeF(JString arg0, android::util::SizeF arg1)
	{
		callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putSparseParcelableArray(JString arg0, android::util::SparseArray arg1)
	{
		callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void Bundle::putStringArrayList(JString arg0, java::util::ArrayList arg1)
	{
		callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
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
	void Bundle::remove(JString arg0)
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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
	JString Bundle::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

