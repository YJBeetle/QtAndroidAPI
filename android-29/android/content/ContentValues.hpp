#pragma once

#ifndef ANDROID_CONTENT_CONTENTVALUES
#define ANDROID_CONTENT_CONTENTVALUES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}
namespace __jni_impl::java::lang
{
	class Byte;
}
namespace __jni_impl::java::lang
{
	class Double;
}
namespace __jni_impl::java::lang
{
	class Float;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::lang
{
	class Long;
}
namespace __jni_impl::java::lang
{
	class Short;
}

namespace __jni_impl::android::content
{
	class ContentValues : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring TAG();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::content::ContentValues arg0);
		void __constructor(jint arg0);
		
		// Methods
		void clear();
		jboolean containsKey(jstring arg0);
		jboolean containsKey(const QString &arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jobject get(jstring arg0);
		jobject get(const QString &arg0);
		QAndroidJniObject getAsBoolean(jstring arg0);
		QAndroidJniObject getAsBoolean(const QString &arg0);
		QAndroidJniObject getAsByte(jstring arg0);
		QAndroidJniObject getAsByte(const QString &arg0);
		jbyteArray getAsByteArray(jstring arg0);
		jbyteArray getAsByteArray(const QString &arg0);
		QAndroidJniObject getAsDouble(jstring arg0);
		QAndroidJniObject getAsDouble(const QString &arg0);
		QAndroidJniObject getAsFloat(jstring arg0);
		QAndroidJniObject getAsFloat(const QString &arg0);
		QAndroidJniObject getAsInteger(jstring arg0);
		QAndroidJniObject getAsInteger(const QString &arg0);
		QAndroidJniObject getAsLong(jstring arg0);
		QAndroidJniObject getAsLong(const QString &arg0);
		QAndroidJniObject getAsShort(jstring arg0);
		QAndroidJniObject getAsShort(const QString &arg0);
		jstring getAsString(jstring arg0);
		jstring getAsString(const QString &arg0);
		jint hashCode();
		QAndroidJniObject keySet();
		void put(jstring arg0, jbyteArray arg1);
		void put(const QString &arg0, jbyteArray arg1);
		void put(jstring arg0, __jni_impl::java::lang::Boolean arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Boolean arg1);
		void put(jstring arg0, __jni_impl::java::lang::Byte arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Byte arg1);
		void put(jstring arg0, __jni_impl::java::lang::Double arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Double arg1);
		void put(jstring arg0, __jni_impl::java::lang::Float arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Float arg1);
		void put(jstring arg0, __jni_impl::java::lang::Integer arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Integer arg1);
		void put(jstring arg0, __jni_impl::java::lang::Long arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Long arg1);
		void put(jstring arg0, __jni_impl::java::lang::Short arg1);
		void put(const QString &arg0, __jni_impl::java::lang::Short arg1);
		void put(jstring arg0, jstring arg1);
		void put(const QString &arg0, const QString &arg1);
		void putAll(__jni_impl::android::content::ContentValues arg0);
		void putNull(jstring arg0);
		void putNull(const QString &arg0);
		void remove(jstring arg0);
		void remove(const QString &arg0);
		jint size();
		jstring toString();
		QAndroidJniObject valueSet();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../java/lang/Byte.hpp"
#include "../../java/lang/Double.hpp"
#include "../../java/lang/Float.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../java/lang/Long.hpp"
#include "../../java/lang/Short.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject ContentValues::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ContentValues::TAG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentValues",
			"TAG",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void ContentValues::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"()V"
		);
	}
	void ContentValues::__constructor(__jni_impl::android::content::ContentValues arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentValues::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentValues",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	void ContentValues::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jboolean ContentValues::containsKey(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean ContentValues::containsKey(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint ContentValues::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContentValues::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jobject ContentValues::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject ContentValues::get(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	QAndroidJniObject ContentValues::getAsBoolean(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsBoolean(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsBoolean",
			"(Ljava/lang/String;)Ljava/lang/Boolean;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentValues::getAsByte(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsByte(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByte",
			"(Ljava/lang/String;)Ljava/lang/Byte;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jbyteArray ContentValues::getAsByteArray(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			arg0
		).object<jbyteArray>();
	}
	jbyteArray ContentValues::getAsByteArray(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsByteArray",
			"(Ljava/lang/String;)[B",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jbyteArray>();
	}
	QAndroidJniObject ContentValues::getAsDouble(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsDouble(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsDouble",
			"(Ljava/lang/String;)Ljava/lang/Double;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentValues::getAsFloat(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsFloat(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsFloat",
			"(Ljava/lang/String;)Ljava/lang/Float;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentValues::getAsInteger(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsInteger(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsInteger",
			"(Ljava/lang/String;)Ljava/lang/Integer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentValues::getAsLong(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsLong(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsLong",
			"(Ljava/lang/String;)Ljava/lang/Long;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ContentValues::getAsShort(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			arg0
		);
	}
	QAndroidJniObject ContentValues::getAsShort(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsShort",
			"(Ljava/lang/String;)Ljava/lang/Short;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ContentValues::getAsString(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring ContentValues::getAsString(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAsString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jint ContentValues::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject ContentValues::keySet()
	{
		return __thiz.callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::put(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Boolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Boolean arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Boolean;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Byte arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Byte arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Byte;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Double arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Double arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Double;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Float;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Integer;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Long arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Long arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Long;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, __jni_impl::java::lang::Short arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(const QString &arg0, __jni_impl::java::lang::Short arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Short;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void ContentValues::put(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ContentValues::put(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ContentValues::putAll(__jni_impl::android::content::ContentValues arg0)
	{
		__thiz.callMethod<void>(
			"putAll",
			"(Landroid/content/ContentValues;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentValues::putNull(jstring arg0)
	{
		__thiz.callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ContentValues::putNull(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"putNull",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ContentValues::remove(jstring arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ContentValues::remove(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint ContentValues::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
	}
	jstring ContentValues::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContentValues::valueSet()
	{
		return __thiz.callObjectMethod(
			"valueSet",
			"()Ljava/util/Set;"
		);
	}
	void ContentValues::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentValues : public __jni_impl::android::content::ContentValues
	{
	public:
		ContentValues(QAndroidJniObject obj) { __thiz = obj; }
		ContentValues()
		{
			__constructor();
		}
		ContentValues(__jni_impl::android::content::ContentValues arg0)
		{
			__constructor(
				arg0);
		}
		ContentValues(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTVALUES

