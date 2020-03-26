#pragma once

#ifndef ANDROID_OS_BUNDLE
#define ANDROID_OS_BUNDLE

#include "../../__JniBaseClass.hpp"
#include "BaseBundle.hpp"

namespace __jni_impl::android::os
{
	class PersistableBundle;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang
{
	class Byte;
}
namespace __jni_impl::android::util
{
	class Size;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::util
{
	class SizeF;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::util
{
	class SparseArray;
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
		void __constructor(__jni_impl::android::os::PersistableBundle arg0);
		void __constructor(__jni_impl::android::os::Bundle arg0);
		void __constructor(jint arg0);
		void __constructor(__jni_impl::java::lang::ClassLoader arg0);
		void __constructor();
		
		// Methods
		void remove(jstring arg0);
		jstring toString();
		jobject clone();
		jbyte getByte(jstring arg0);
		QAndroidJniObject getByte(jstring arg0, jbyte arg1);
		void putByte(jstring arg0, jbyte arg1);
		jshort getShort(jstring arg0);
		jshort getShort(jstring arg0, jshort arg1);
		void putShort(jstring arg0, jshort arg1);
		jchar getChar(jstring arg0);
		jchar getChar(jstring arg0, jchar arg1);
		void putChar(jstring arg0, jchar arg1);
		jfloat getFloat(jstring arg0);
		jfloat getFloat(jstring arg0, jfloat arg1);
		void putFloat(jstring arg0, jfloat arg1);
		void clear();
		QAndroidJniObject getClassLoader();
		void putAll(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getSize(jstring arg0);
		QAndroidJniObject getBundle(jstring arg0);
		void putByteArray(jstring arg0, jbyteArray arg1);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject deepCopy();
		jboolean hasFileDescriptors();
		void setClassLoader(__jni_impl::java::lang::ClassLoader arg0);
		void putCharSequence(jstring arg0, jstring arg1);
		void putParcelable(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void putSize(jstring arg0, __jni_impl::android::util::Size arg1);
		void putSizeF(jstring arg0, __jni_impl::android::util::SizeF arg1);
		void putParcelableArray(jstring arg0, jarray arg1);
		void putParcelableArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putSparseParcelableArray(jstring arg0, __jni_impl::android::util::SparseArray arg1);
		void putIntegerArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putStringArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putCharSequenceArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		void putSerializable(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void putShortArray(jstring arg0, jshortArray arg1);
		void putCharArray(jstring arg0, jcharArray arg1);
		void putFloatArray(jstring arg0, jfloatArray arg1);
		void putCharSequenceArray(jstring arg0, jarray arg1);
		void putBundle(jstring arg0, __jni_impl::android::os::Bundle arg1);
		void putBinder(jstring arg0, __jni_impl::__JniBaseClass arg1);
		jstring getCharSequence(jstring arg0, jstring arg1);
		jstring getCharSequence(jstring arg0);
		QAndroidJniObject getSizeF(jstring arg0);
		QAndroidJniObject getParcelable(jstring arg0);
		jarray getParcelableArray(jstring arg0);
		QAndroidJniObject getParcelableArrayList(jstring arg0);
		QAndroidJniObject getSparseParcelableArray(jstring arg0);
		QAndroidJniObject getSerializable(jstring arg0);
		QAndroidJniObject getIntegerArrayList(jstring arg0);
		QAndroidJniObject getStringArrayList(jstring arg0);
		QAndroidJniObject getCharSequenceArrayList(jstring arg0);
		jbyteArray getByteArray(jstring arg0);
		jshortArray getShortArray(jstring arg0);
		jcharArray getCharArray(jstring arg0);
		jfloatArray getFloatArray(jstring arg0);
		jarray getCharSequenceArray(jstring arg0);
		QAndroidJniObject getBinder(jstring arg0);
		void readFromParcel(__jni_impl::android::os::Parcel arg0);
	};
} // namespace __jni_impl::android::os

#include "PersistableBundle.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/lang/Byte.hpp"
#include "../util/Size.hpp"
#include "Parcel.hpp"
#include "../util/SizeF.hpp"
#include "../../java/util/ArrayList.hpp"
#include "../util/SparseArray.hpp"

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
	void Bundle::__constructor(__jni_impl::android::os::PersistableBundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/PersistableBundle;)V",
			arg0.__jniObject().object());
	}
	void Bundle::__constructor(__jni_impl::android::os::Bundle arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	void Bundle::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(I)V",
			arg0);
	}
	void Bundle::__constructor(__jni_impl::java::lang::ClassLoader arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"(Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object());
	}
	void Bundle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Bundle",
			"()V");
	}
	
	// Methods
	void Bundle::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jstring Bundle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject Bundle::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jbyte Bundle::getByte(jstring arg0)
	{
		return __thiz.callMethod<jbyte>(
			"getByte",
			"(Ljava/lang/String;)B",
			arg0
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
	void Bundle::putByte(jstring arg0, jbyte arg1)
	{
		__thiz.callMethod<void>(
			"putByte",
			"(Ljava/lang/String;B)V",
			arg0,
			arg1
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
	jshort Bundle::getShort(jstring arg0, jshort arg1)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(Ljava/lang/String;S)S",
			arg0,
			arg1
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
	jchar Bundle::getChar(jstring arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(Ljava/lang/String;)C",
			arg0
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
	void Bundle::putChar(jstring arg0, jchar arg1)
	{
		__thiz.callMethod<void>(
			"putChar",
			"(Ljava/lang/String;C)V",
			arg0,
			arg1
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
	jfloat Bundle::getFloat(jstring arg0, jfloat arg1)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(Ljava/lang/String;F)F",
			arg0,
			arg1
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
	void Bundle::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject Bundle::getClassLoader()
	{
		return __thiz.callObjectMethod(
			"getClassLoader",
			"()Ljava/lang/ClassLoader;"
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
	QAndroidJniObject Bundle::getSize(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0
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
	void Bundle::putByteArray(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"putByteArray",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	jint Bundle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
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
	QAndroidJniObject Bundle::deepCopy()
	{
		return __thiz.callObjectMethod(
			"deepCopy",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Bundle::hasFileDescriptors()
	{
		return __thiz.callMethod<jboolean>(
			"hasFileDescriptors",
			"()Z"
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
	void Bundle::putCharSequence(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequence",
			"(Ljava/lang/String;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
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
	void Bundle::putSize(jstring arg0, __jni_impl::android::util::Size arg1)
	{
		__thiz.callMethod<void>(
			"putSize",
			"(Ljava/lang/String;Landroid/util/Size;)V",
			arg0,
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
	void Bundle::putParcelableArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putParcelableArray",
			"(Ljava/lang/String;[Landroid/os/Parcelable;)V",
			arg0,
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
	void Bundle::putSparseParcelableArray(jstring arg0, __jni_impl::android::util::SparseArray arg1)
	{
		__thiz.callMethod<void>(
			"putSparseParcelableArray",
			"(Ljava/lang/String;Landroid/util/SparseArray;)V",
			arg0,
			arg1.__jniObject().object()
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
	void Bundle::putStringArrayList(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		__thiz.callMethod<void>(
			"putStringArrayList",
			"(Ljava/lang/String;Ljava/util/ArrayList;)V",
			arg0,
			arg1.__jniObject().object()
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
	void Bundle::putSerializable(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putSerializable",
			"(Ljava/lang/String;Ljava/io/Serializable;)V",
			arg0,
			arg1.__jniObject().object()
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
	void Bundle::putCharArray(jstring arg0, jcharArray arg1)
	{
		__thiz.callMethod<void>(
			"putCharArray",
			"(Ljava/lang/String;[C)V",
			arg0,
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
	void Bundle::putCharSequenceArray(jstring arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"putCharSequenceArray",
			"(Ljava/lang/String;[Ljava/lang/CharSequence;)V",
			arg0,
			arg1
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
	void Bundle::putBinder(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"putBinder",
			"(Ljava/lang/String;Landroid/os/IBinder;)V",
			arg0,
			arg1.__jniObject().object()
		);
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
	jstring Bundle::getCharSequence(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequence",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject Bundle::getSizeF(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
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
	jarray Bundle::getParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParcelableArray",
			"(Ljava/lang/String;)[Landroid/os/Parcelable;",
			arg0
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
	QAndroidJniObject Bundle::getSparseParcelableArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getSparseParcelableArray",
			"(Ljava/lang/String;)Landroid/util/SparseArray;",
			arg0
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
	QAndroidJniObject Bundle::getIntegerArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getIntegerArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
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
	QAndroidJniObject Bundle::getCharSequenceArrayList(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArrayList",
			"(Ljava/lang/String;)Ljava/util/ArrayList;",
			arg0
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
	jshortArray Bundle::getShortArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getShortArray",
			"(Ljava/lang/String;)[S",
			arg0
		).object<jshortArray>();
	}
	jcharArray Bundle::getCharArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharArray",
			"(Ljava/lang/String;)[C",
			arg0
		).object<jcharArray>();
	}
	jfloatArray Bundle::getFloatArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFloatArray",
			"(Ljava/lang/String;)[F",
			arg0
		).object<jfloatArray>();
	}
	jarray Bundle::getCharSequenceArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getCharSequenceArray",
			"(Ljava/lang/String;)[Ljava/lang/CharSequence;",
			arg0
		).object<jarray>();
	}
	QAndroidJniObject Bundle::getBinder(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getBinder",
			"(Ljava/lang/String;)Landroid/os/IBinder;",
			arg0
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
} // namespace __jni_impl::android::os

namespace android::os
{
	class Bundle : public __jni_impl::android::os::Bundle
	{
	public:
		Bundle(QAndroidJniObject obj) { __thiz = obj; }
		Bundle(__jni_impl::android::os::PersistableBundle arg0)
		{
			__constructor(
				arg0);
		}
		Bundle(__jni_impl::android::os::Bundle arg0)
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
		Bundle()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUNDLE

