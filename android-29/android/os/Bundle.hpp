#pragma once

#ifndef ANDROID_OS_BUNDLE
#define ANDROID_OS_BUNDLE

#include "../../__JniBaseClass.hpp"
#include "BaseBundle.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::android::util
{
	class SizeF;
}
namespace __jni_impl::android::util
{
	class SparseArray;
}
namespace __jni_impl::java::lang
{
	class Byte;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}

namespace __jni_impl::android::os
{
	class Bundle : public __jni_impl::android::os::BaseBundle
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject EMPTY();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Bundle arg0);
		void __constructor(__jni_impl::android::os::PersistableBundle arg0);
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::lang::ClassLoader arg0);
		
		// Methods
		void clear();
		jobject clone();
		QAndroidJniObject deepCopy();
		jint describeContents();
		QAndroidJniObject getBinder(jstring arg0);
		QAndroidJniObject getBinder(const QString &arg0);
		QAndroidJniObject getBundle(jstring arg0);
		QAndroidJniObject getBundle(const QString &arg0);
		jbyte getByte(jstring arg0);
		jbyte getByte(const QString &arg0);
		QAndroidJniObject getByte(jstring arg0, jbyte arg1);
		QAndroidJniObject getByte(const QString &arg0, jbyte arg1);
		jbyteArray getByteArray(jstring arg0);
		jbyteArray getByteArray(const QString &arg0);
		jchar getChar(jstring arg0);
		jchar getChar(const QString &arg0);
		jchar getChar(jstring arg0, jchar arg1);
		jchar getChar(const QString &arg0, jchar arg1);
		jcharArray getCharArray(jstring arg0);
		jcharArray getCharArray(const QString &arg0);
		jstring getCharSequence(jstring arg0);
		jstring getCharSequence(const QString &arg0);
		jstring getCharSequence(jstring arg0, jstring arg1);
		jstring getCharSequence(const QString &arg0, const QString &arg1);
		jarray getCharSequenceArray(jstring arg0);
		jarray getCharSequenceArray(const QString &arg0);
		QAndroidJniObject getCharSequenceArrayList(jstring arg0);
		QAndroidJniObject getCharSequenceArrayList(const QString &arg0);
		QAndroidJniObject getClassLoader();
		jfloat getFloat(jstring arg0);
		jfloat getFloat(const QString &arg0);
		jfloat getFloat(jstring arg0, jfloat arg1);
		jfloat getFloat(const QString &arg0, jfloat arg1);
		jfloatArray getFloatArray(jstring arg0);
		jfloatArray getFloatArray(const QString &arg0);
		QAndroidJniObject getIntegerArrayList(jstring arg0);
		QAndroidJniObject getIntegerArrayList(const QString &arg0);
		QAndroidJniObject getParcelable(jstring arg0);
		QAndroidJniObject getParcelable(const QString &arg0);
		jarray getParcelableArray(jstring arg0);
		jarray getParcelableArray(const QString &arg0);
		QAndroidJniObject getParcelableArrayList(jstring arg0);
		QAndroidJniObject getParcelableArrayList(const QString &arg0);
		QAndroidJniObject getSerializable(jstring arg0);
		QAndroidJniObject getSerializable(const QString &arg0);
		jshort getShort(jstring arg0);
		jshort getShort(const QString &arg0);
		jshort getShort(jstring arg0, jshort arg1);
		jshort getShort(const QString &arg0, jshort arg1);
		jshortArray getShortArray(jstring arg0);
		jshortArray getShortArray(const QString &arg0);
		QAndroidJniObject getSize(jstring arg0);
		QAndroidJniObject getSize(const QString &arg0);
		QAndroidJniObject getSizeF(jstring arg0);
		QAndroidJniObject getSizeF(const QString &arg0);
		QAndroidJniObject getSparseParcelableArray(jstring arg0);
		QAndroidJniObject getSparseParcelableArray(const QString &arg0);
		QAndroidJniObject getStringArrayList(jstring arg0);
		QAndroidJniObject getStringArrayList(const QString &arg0);
		jboolean hasFileDescriptors();
		void putAll(__jni_impl::android::os::Bundle arg0);
		void putBinder(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void putBinder(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void putBundle(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void putBundle(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		void putByte(jstring arg0, jbyte arg1);
		void putByte(const QString &arg0, jbyte arg1);
		void putByteArray(jstring arg0, jbyteArray arg1);
		void putByteArray(const QString &arg0, jbyteArray arg1);
		void putChar(jstring arg0, jchar arg1);
		void putChar(const QString &arg0, jchar arg1);
		void putCharArray(jstring arg0, jcharArray arg1);
		void putCharArray(const QString &arg0, jcharArray arg1);
		void putCharSequence(jstring arg0, jstring arg1);
		void putCharSequence(const QString &arg0, const QString &arg1);
		void putCharSequenceArray(jstring arg0, jarray arg1);
		void putCharSequenceArray(const QString &arg0, jarray arg1);
		void putCharSequenceArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putCharSequenceArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void putFloat(const QString &arg0, jfloat arg1);
		void putFloatArray(jstring arg0, jfloatArray arg1);
		void putFloatArray(const QString &arg0, jfloatArray arg1);
		void putIntegerArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putIntegerArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		void putParcelable(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void putParcelable(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void putParcelableArray(jstring arg0, jarray arg1);
		void putParcelableArray(const QString &arg0, jarray arg1);
		void putParcelableArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putParcelableArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		void putSerializable(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void putSerializable(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		void putShort(jstring arg0, jshort arg1);
		void putShort(const QString &arg0, jshort arg1);
		void putShortArray(jstring arg0, jshortArray arg1);
		void putShortArray(const QString &arg0, jshortArray arg1);
		void putSize(jstring arg0, __jni_impl::android::util::Size arg1);
		void putSize(const QString &arg0, __jni_impl::android::util::Size arg1);
		void putSizeF(jstring arg0, __jni_impl::android::util::SizeF arg1);
		void putSizeF(const QString &arg0, __jni_impl::android::util::SizeF arg1);
		void putSparseParcelableArray(jstring arg0, __jni_impl::android::util::SparseArray arg1);
		void putSparseParcelableArray(const QString &arg0, __jni_impl::android::util::SparseArray arg1);
		void putStringArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putStringArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
		void remove(jstring arg0);
		void remove(const QString &arg0);
		void setClassLoader(__jni_impl::java::lang::ClassLoader arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"
#include "PersistableBundle.hpp"
#include "../util/Size.hpp"
#include "../util/SizeF.hpp"
#include "../util/SparseArray.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/util/ArrayList.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject Bundle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject Bundle::EMPTY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Bundle",
			"EMPTY",
			"Landroid/os/Bundle;"
		);
	}
	
	// Constructors
	void Bundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"()V"
		);
	}
	void Bundle::__constructor(__jni_impl::android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::__constructor(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(I)V",
			arg0
		);
	}
	void Bundle::__constructor(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Bundle::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Bundle::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject Bundle::deepCopy()
	{
		return __thiz.callObjectMethod(
			"deepCopy",
			"()Landroid/os/Bundle;"
		);
	}
	jint Bundle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject Bundle::getBinder(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getBinder(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getBundle(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getBundle(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"(Ljava/lang/String;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyte Bundle::getByte(jstring arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0
		);
	}
	jbyte Bundle::getByte(const QString &arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getByte(jstring arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Bundle::getByte(const QString &arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"getByte",
			"(Ljava/lang/String;B)Ljava/lang/Byte;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jbyteArray Bundle::getByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray Bundle::getByteArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getByteArray",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	jchar Bundle::getChar(jstring arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0
		);
	}
	jchar Bundle::getChar(const QString &arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jchar Bundle::getChar(jstring arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			arg0,
			arg1
		);
	}
	jchar Bundle::getChar(const QString &arg0, jchar arg1)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;C)C",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jcharArray Bundle::getCharArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jcharArray Bundle::getCharArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jcharArray>();
	}
	jstring Bundle::getCharSequence(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring Bundle::getCharSequence(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Bundle::getCharSequence(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring Bundle::getCharSequence(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jstring>();
	}
	jarray Bundle::getCharSequenceArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	jarray Bundle::getCharSequenceArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject Bundle::getCharSequenceArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getCharSequenceArrayList(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
		);
	}
	jfloat Bundle::getFloat(jstring arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			arg0
		);
	}
	jfloat Bundle::getFloat(const QString &arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;)F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jfloat Bundle::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
		);
	}
	jfloat Bundle::getFloat(const QString &arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jfloatArray Bundle::getFloatArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	jfloatArray Bundle::getFloatArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jfloatArray>();
	}
	QAndroidJniObject Bundle::getIntegerArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getIntegerArrayList(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getParcelable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getParcelable(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelable",
			"(Ljava/lang/String;)Landroid/os/Parcelable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Bundle::getParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
		).object<jarray>();
	}
	jarray Bundle::getParcelableArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject Bundle::getParcelableArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getParcelableArrayList(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getSerializable(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSerializable(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSerializable",
			"(Ljava/lang/String;)Ljava/io/Serializable;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jshort Bundle::getShort(jstring arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			arg0
		);
	}
	jshort Bundle::getShort(const QString &arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;)S",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jshort Bundle::getShort(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
		);
	}
	jshort Bundle::getShort(const QString &arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jshortArray Bundle::getShortArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	jshortArray Bundle::getShortArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jshortArray>();
	}
	QAndroidJniObject Bundle::getSize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSize(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getSizeF(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSizeF(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getSparseParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getSparseParcelableArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Bundle::getStringArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
		);
	}
	QAndroidJniObject Bundle::getStringArrayList(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getStringArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Bundle::hasFileDescriptors()
	{
		return __thiz.callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
		);
	}
	void Bundle::putAll(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::putBinder(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putBinder(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putBundle(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putBundle(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz.callMethod<void>(
			"putBundle",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putByte(jstring arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putByte(const QString &arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void Bundle::putByteArray(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putChar(jstring arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putChar(const QString &arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putCharArray(jstring arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharArray(const QString &arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putCharSequence(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequence(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Bundle::putCharSequenceArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putCharSequenceArray(const QString &arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putCharSequenceArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putCharSequenceArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putFloat(jstring arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putFloat(const QString &arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"putFloat",
			"(Ljava/lang/String;F)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putFloatArray(jstring arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			arg0,
			arg1
		);
	}
	void Bundle::putFloatArray(const QString &arg0, jfloatArray arg1)
	{
		__thiz.callMethod<void>(
			"putFloatArray",
			"(Ljava/lang/String;[F)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putIntegerArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putIntegerArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putIntegerArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelable(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelable(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putParcelable",
			"(Ljava/lang/String;Landroid/os/Parcelable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelableArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0,
			arg1
		);
	}
	void Bundle::putParcelableArray(const QString &arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putParcelableArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putParcelableArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSerializable(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSerializable(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putShort(jstring arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putShort(const QString &arg0, jshort arg1)
	{
		__thiz.callMethod<void>(
			"putShort",
			"(Ljava/lang/String;S)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putShortArray(jstring arg0, jshortArray arg1)
	{
		__thiz.callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			arg0,
			arg1
		);
	}
	void Bundle::putShortArray(const QString &arg0, jshortArray arg1)
	{
		__thiz.callMethod<void>(
			"putShortArray",
			"(Ljava/lang/String;[S)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void Bundle::putSize(jstring arg0, __jni_impl::android::util::Size arg1)
	{
		__thiz.callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSize(const QString &arg0, __jni_impl::android::util::Size arg1)
	{
		__thiz.callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSizeF(jstring arg0, __jni_impl::android::util::SizeF arg1)
	{
		__thiz.callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSizeF(const QString &arg0, __jni_impl::android::util::SizeF arg1)
	{
		__thiz.callMethod<void>(
			"putSizeF",
			"(Ljava/lang/String;Landroid/util/SizeF;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSparseParcelableArray(jstring arg0, __jni_impl::android::util::SparseArray arg1)
	{
		__thiz.callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putSparseParcelableArray(const QString &arg0, __jni_impl::android::util::SparseArray arg1)
	{
		__thiz.callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::putStringArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Bundle::putStringArrayList(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void Bundle::readFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void Bundle::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Bundle::remove(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Bundle::setClassLoader(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz.callMethod<void>(
			"setClassLoader",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object()
		);
	}
	jstring Bundle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Bundle::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Bundle : public __jni_impl::android::os::Bundle
	{
	public:
		Bundle(QAndroidJniObject obj) { __thiz = obj; }
		Bundle()
		{
			__constructor();
		}
		Bundle(__jni_impl::android::os::Bundle arg0)
		{
			__constructor(
				arg0);
		}
		Bundle(__jni_impl::android::os::PersistableBundle arg0)
		{
			__constructor(
				arg0);
		}
		Bundle(jint arg0)
		{
			__constructor(
				arg0);
		}
		Bundle(__jni_impl::java::lang::ClassLoader arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUNDLE

