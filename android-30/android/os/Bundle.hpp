#pragma once

#include "../../JByteArray.hpp"
#include "../../JCharArray.hpp"
#include "../../JFloatArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JShortArray.hpp"
#include "./Parcel.def.hpp"
#include "./PersistableBundle.def.hpp"
#include "../util/Size.def.hpp"
#include "../util/SizeF.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../../java/lang/Byte.def.hpp"
#include "../../JString.hpp"
#include "../../java/lang/ClassLoader.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./Bundle.def.hpp"

namespace android::os
{
	// Fields
	inline JObject Bundle::CREATOR()
	{
		return getStaticObjectField(
			"android.os.Bundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline android::os::Bundle Bundle::EMPTY()
	{
		return getStaticObjectField(
			"android.os.Bundle",
			"EMPTY",
			"Landroid/os/Bundle;"
		);
	}
	
	// Constructors
	inline Bundle::Bundle()
		: android::os::BaseBundle(
			"android.os.Bundle",
			"()V"
		) {}
	inline Bundle::Bundle(android::os::Bundle &arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		) {}
	inline Bundle::Bundle(android::os::PersistableBundle arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.object()
		) {}
	inline Bundle::Bundle(jint arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(I)V",
			arg0
		) {}
	inline Bundle::Bundle(java::lang::ClassLoader arg0)
		: android::os::BaseBundle(
			"android.os.Bundle",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Bundle::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject Bundle::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::os::Bundle Bundle::deepCopy() const
	{
		return callObjectMethod(
			"deepCopy",
			"()Landroid/os/Bundle;"
		);
	}
	inline jint Bundle::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject Bundle::getBinder(JString arg0) const
	{
		return callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0.object<jstring>()
		);
	}
	inline android::os::Bundle Bundle::getBundle(JString arg0) const
	{
		return callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0.object<jstring>()
		);
	}
	inline jbyte Bundle::getByte(JString arg0) const
	{
		return callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0.object<jstring>()
		);
	}
	inline java::lang::Byte Bundle::getByte(JString arg0, jbyte arg1) const
	{
		return callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JByteArray Bundle::getByteArray(JString arg0) const
	{
		return callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			arg0.object<jstring>()
		);
	}
	inline jchar Bundle::getChar(JString arg0) const
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0.object<jstring>()
		);
	}
	inline jchar Bundle::getChar(JString arg0, jchar arg1) const
	{
		return callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JCharArray Bundle::getCharArray(JString arg0) const
	{
		return callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0.object<jstring>()
		);
	}
	inline JString Bundle::getCharSequence(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline JString Bundle::getCharSequence(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline JArray Bundle::getCharSequenceArray(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	inline java::util::ArrayList Bundle::getCharSequenceArrayList(JString arg0) const
	{
		return callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline java::lang::ClassLoader Bundle::getClassLoader() const
	{
		return callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	inline jfloat Bundle::getFloat(JString arg0) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0.object<jstring>()
		);
	}
	inline jfloat Bundle::getFloat(JString arg0, jfloat arg1) const
	{
		return callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JFloatArray Bundle::getFloatArray(JString arg0) const
	{
		return callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0.object<jstring>()
		);
	}
	inline java::util::ArrayList Bundle::getIntegerArrayList(JString arg0) const
	{
		return callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline JObject Bundle::getParcelable(JString arg0) const
	{
		return callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	inline JArray Bundle::getParcelableArray(JString arg0) const
	{
		return callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0.object<jstring>()
		);
	}
	inline java::util::ArrayList Bundle::getParcelableArrayList(JString arg0) const
	{
		return callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline JObject Bundle::getSerializable(JString arg0) const
	{
		return callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0.object<jstring>()
		);
	}
	inline jshort Bundle::getShort(JString arg0) const
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			arg0.object<jstring>()
		);
	}
	inline jshort Bundle::getShort(JString arg0, jshort arg1) const
	{
		return callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JShortArray Bundle::getShortArray(JString arg0) const
	{
		return callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0.object<jstring>()
		);
	}
	inline android::util::Size Bundle::getSize(JString arg0) const
	{
		return callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0.object<jstring>()
		);
	}
	inline android::util::SizeF Bundle::getSizeF(JString arg0) const
	{
		return callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0.object<jstring>()
		);
	}
	inline android::util::SparseArray Bundle::getSparseParcelableArray(JString arg0) const
	{
		return callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0.object<jstring>()
		);
	}
	inline java::util::ArrayList Bundle::getStringArrayList(JString arg0) const
	{
		return callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Bundle::hasFileDescriptors() const
	{
		return callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	inline void Bundle::putAll(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"putAll",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Bundle::putBinder(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putBundle(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putByte(JString arg0, jbyte arg1) const
	{
		callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Bundle::putByteArray(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void Bundle::putChar(JString arg0, jchar arg1) const
	{
		callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Bundle::putCharArray(JString arg0, JCharArray arg1) const
	{
		callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		);
	}
	inline void Bundle::putCharSequence(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void Bundle::putCharSequenceArray(JString arg0, JArray arg1) const
	{
		callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline void Bundle::putCharSequenceArrayList(JString arg0, java::util::ArrayList arg1) const
	{
		callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putFloat(JString arg0, jfloat arg1) const
	{
		callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Bundle::putFloatArray(JString arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			arg0.object<jstring>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void Bundle::putIntegerArrayList(JString arg0, java::util::ArrayList arg1) const
	{
		callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putParcelable(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putParcelableArray(JString arg0, JArray arg1) const
	{
		callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline void Bundle::putParcelableArrayList(JString arg0, java::util::ArrayList arg1) const
	{
		callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putSerializable(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putShort(JString arg0, jshort arg1) const
	{
		callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void Bundle::putShortArray(JString arg0, JShortArray arg1) const
	{
		callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			arg0.object<jstring>(),
			arg1.object<jshortArray>()
		);
	}
	inline void Bundle::putSize(JString arg0, android::util::Size arg1) const
	{
		callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putSizeF(JString arg0, android::util::SizeF arg1) const
	{
		callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putSparseParcelableArray(JString arg0, android::util::SparseArray arg1) const
	{
		callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::putStringArrayList(JString arg0, java::util::ArrayList arg1) const
	{
		callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void Bundle::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Bundle::remove(JString arg0) const
	{
		callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Bundle::setClassLoader(java::lang::ClassLoader arg0) const
	{
		callMethod<void>(
			"setClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.object()
		);
	}
	inline JString Bundle::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Bundle::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers
#include "./BaseBundle.hpp"

